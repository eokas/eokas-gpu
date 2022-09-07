
#ifndef _EOKAS_GPU_RESOURCE_H_
#define _EOKAS_GPU_RESOURCE_H_

#include "header.h"
#include <memory>

namespace eokas::gpu
{
    class Resource :public Interface
    { };

    class Texture :public Resource
    {
    public:
        enum class Type
        {
            Texture1D,
            Texture2D,
            Texture3D,
        };

        enum class Usage
        {
            Default = 0,
            Color = 1,
            DepthStencil = 2,
            RenderTarget = 4,
            Staging = 8,
            Storage = 16,
            Cubemap = 32,
            Mipped = 64,
        };

        using Ref = std::shared_ptr<Texture>;

    public:
        virtual u32_t getWidth() const = 0;
        virtual u32_t getHeight() const = 0;
        virtual u32_t getDepth() const = 0;
        virtual PixelFormat getFormat() const = 0;
        virtual u32_t getUsages() const = 0;
    };

    class Buffer :public Resource
    { };
};

#endif//_EOKAS_GPU_RESOURCE_H_
