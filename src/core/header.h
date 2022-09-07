
#ifndef _EOKAS_GPU_HEADER_H_
#define _EOKAS_GPU_HEADER_H_

#include <eokas-base/main.h>
#include <d3d12.h>

namespace eokas::gpu
{
	enum class FeatureLevel
	{
		
	};

    enum class PipelineType
    {
        Compute,
        Graphics,
        RayTracing,
    };

    enum class PrimitiveTopology
    {
        PointList,
        LineList,
        LineStrip,
        TriangleList,
        TriangleStrip,
        PatchList
    };

    enum class CullMode
    {
        None,
        Back,
        Front,
        Both,
    };

    enum class FrontFaceMode
    {
        CW,
        CCW
    };

    enum class FillMode
    {
        Solid,
        WireFrame,
    };

    enum class WriteMask
    {
        R = 1,
        G = 2,
        B = 4,
        A = 8,
        Z = 16
    };

    enum class CompareOp
    {
        NEVER, // False
        ALWAYS, // True
        EQ, // ==
        NE, // !=
        LT, // <
        LE, // <=
        GT, // >
        GE, // >=
    };

    enum class BlendOp
    {
        ADD,
        SUB,
        REV_SUB,
        MIN,
        MAX,
    };

    enum class BlendConstant
    {
        Zero,
        One,
        SrcColor,
        DstColor,
        SrcAlpha,
        DstAlpha,
        OneMinusSrcColor,
        OneMinusDstColor,
        OneMinusSrcAlpha,
        OneMinusDstAlpha,
        SaturateSrcAlpha,
        Factor,
        OneMinusFactor,

    };

    enum class StencilOp
    {
        KEEP,
        SET_ZERO,
        REPLACE,
        INVERT,
        INC,
        DEC,
        INC_SAT,
        DEC_SAT,
    };

    enum class ShaderType
    {
        Unknown,
        VertexShader,
        PixelShader,
        ComputeShader
    };

    enum class ShaderSemantice
    {
        Undefined,
        POSITION,
        COLOR,
        NORMAL,
        TANGENT,
        BITANGENT,
        TEXCOORD0,
        TEXCOORD1,
        TEXCOORD2,
        TEXCOORD3,
        TEXCOORD4,
        TEXCOORD5,
        TEXCOORD6,
        TEXCOORD7,
    };


};

#endif//_EOKAS_GPU_HEADER_H_
