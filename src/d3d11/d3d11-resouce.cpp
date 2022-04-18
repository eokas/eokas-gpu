
#include "d3d11-resource.h"

namespace eokas::gpu
{
	u32_t D3D11Texture::getWidth() const
	{
		return 0;
	}

	u32_t D3D11Texture::getHeight() const
	{
		return 0;
	}

	u32_t D3D11Texture::getDepth() const
	{
		return 0;
	}

	PixelFormat D3D11Texture::getFormat() const
	{
		return PixelFormat::Unknown;
	}

	u32_t D3D11Texture::getUsages() const
	{
		return 0;
	}
}
