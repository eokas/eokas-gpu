
#include "d3d11-device.h"

namespace eokas::gpu
{
	D3D11Device::D3D11Device()
	{
		UINT createDeviceFlags = 0;
#ifdef _DEBUG
		createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

		D3D_DRIVER_TYPE driverTypes[] = {
			D3D_DRIVER_TYPE_HARDWARE,
			D3D_DRIVER_TYPE_WARP,
			D3D_DRIVER_TYPE_REFERENCE,
		};
		UINT numDriverTypes = ARRAYSIZE(driverTypes);

		D3D_FEATURE_LEVEL featureLevels[] = {
			D3D_FEATURE_LEVEL_11_1,
			D3D_FEATURE_LEVEL_11_0,
			D3D_FEATURE_LEVEL_10_1,
			D3D_FEATURE_LEVEL_10_0,
		};
		UINT numFeatureLevels = ARRAYSIZE(featureLevels);

		HRESULT hr = 0;

		for (UINT driverTypeIndex = 0; driverTypeIndex < numDriverTypes; driverTypeIndex++)
		{
			mDriverType = driverTypes[driverTypeIndex];
			hr = D3D11CreateDevice(nullptr, mDriverType, nullptr, createDeviceFlags, featureLevels,
					numFeatureLevels, D3D11_SDK_VERSION,
					&mDevice, &mFeatureLevel, &mContext);

			if (hr == E_INVALIDARG)
			{
				// DirectX 11.0 platforms will not recognize D3D_FEATURE_LEVEL_11_1 so we need to retry without it
				hr = D3D11CreateDevice(nullptr, mDriverType, nullptr, createDeviceFlags,
						&featureLevels[1], numFeatureLevels - 1, D3D11_SDK_VERSION,
						&mDevice, &mFeatureLevel, &mContext);
			}

			if (SUCCEEDED(hr))
				break;
		}
		if (FAILED(hr))
			throw std::runtime_error("Device creation failed");
	}
};
