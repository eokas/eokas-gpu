
#ifndef _EOKAS_GPU_D3D11_RESOURCE_H_
#define _EOKAS_GPU_D3D11_RESOURCE_H_

#include "d3d11-header.h"

namespace eokas::gpu
{
	class D3D11Texture : public Texture
	{
	public:
		virtual u32_t getWidth() const override;

		virtual u32_t getHeight() const override;

		virtual u32_t getDepth() const override;

		virtual PixelFormat getFormat() const override;

		virtual u32_t getUsages() const override;
	};
};

#endif //_EOKAS_GPU_D3D11_RESOURCE_H_
