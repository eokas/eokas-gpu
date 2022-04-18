
#ifndef _EOKAS_GPU_D3D11_DEVICE_H_
#define _EOKAS_GPU_D3D11_DEVICE_H_

#include "d3d11-header.h"

namespace eokas::gpu
{
	class D3D11Device : public Device
	{
	public:
		D3D11Device();

	private:
		D3D_DRIVER_TYPE mDriverType = D3D_DRIVER_TYPE_HARDWARE;
		D3D_FEATURE_LEVEL mFeatureLevel = D3D_FEATURE_LEVEL_11_0;

		Microsoft::WRL::ComPtr<ID3D11Device> mDevice;
		Microsoft::WRL::ComPtr<ID3D11DeviceContext> mContext;
	};
};

#endif//_EOKAS_GPU_D3D11_DEVICE_H_
