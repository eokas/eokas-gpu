
#ifndef _EOKAS_GPU_DEVICE_H_
#define _EOKAS_GPU_DEVICE_H_

#include "header.h"

#include "resource.h"

namespace eokas::gpu
{
    class Device :public Interface, std::enable_shared_from_this<Device>
    {
    public:
        virtual Texture::Ref CreateTexture1D() = 0;
    };
};

#endif//_EOKAS_GPU_DEVICE_H_
