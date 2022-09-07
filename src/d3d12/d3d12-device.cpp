
#include "d3d12-device.h"

namespace eokas::gpu
{
    static void Ensure(HRESULT hr, const char* message)
    {
        if(FAILED(hr))
        {
            throw std::runtime_error(message);
        }
    }

    D3D12Device::D3D12Device()
    {
        #if defined(DEBUG) || defined(_DEBUG)
        // Enable the D3D12 debug layer.
        {
            Microsoft::WRL::ComPtr<ID3D12Debug> debugController;
            Ensure(D3D12GetDebugInterface(IID_PPV_ARGS(&debugController)),
                "Setup debug controller failed.");
            debugController->EnableDebugLayer();
        }
        #endif

        Ensure(D3D12CreateDevice(nullptr, D3D_FEATURE_LEVEL_12_0, IID_PPV_ARGS(&mDevice)),
            "Create D3D12 device failed.");
        
    }
}
