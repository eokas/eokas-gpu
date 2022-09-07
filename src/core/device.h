
#ifndef _EOKAS_GPU_DEVICE_H_
#define _EOKAS_GPU_DEVICE_H_

#include "header.h"
#include "resource.h"

namespace eokas::gpu
{
    class SDK :public Interface
    {
    public:
        using Ref = std::shared_ptr<SDK>;


    };

    class Capabilities :public Interface
    {
    public:
        using Ref = std::shared_ptr<Capabilities>;
    };

    class Device :public Interface
    {
    public:
        using Ref = std::shared_ptr<Device>;

    public:
        virtual Capabilities::Ref GetCapabilities() = 0;
        virtual Texture::Ref CreateTexture1D() = 0;
        virtual Texture::Ref CreateTexture2D() = 0;
        virtual Texture::Ref CreateTexture3D() = 0;
    };
};

#endif//_EOKAS_GPU_DEVICE_H_
