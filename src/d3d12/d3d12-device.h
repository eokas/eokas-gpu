
#ifndef _EOKAS_GPU_D3D12_DEVICE_H_
#define _EOKAS_GPU_D3D12_DEVICE_H_

#include "d3d12-header.h"

namespace eokas::gpu
{
    class D3D12Device :public Device
    {
    public:
        D3D12Device();

    private:
        Microsoft::WRL::ComPtr<ID3D12Device> mDevice;
    };
}

#endif //_EOKAS_GPU_D3D12_DEVICE_H_
