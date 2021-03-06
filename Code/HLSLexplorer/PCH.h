#ifndef __PCH_H__
#define __PCH_H__

#pragma once

#ifdef _DEBUG
# define _CRTDBG_MAP_ALLOC
#endif

#include "BaseTypes.h"

// wxWidgets
#include <wx/wxprec.h>

#ifdef GetHwnd
# undef GetHwnd
#endif

enum class ETextureType : uint8
{
	ETexType_Invalid,

	ETexType_1D,
	ETexType_1DArray,
	ETexType_2D,
	ETexType_2DArray,
	ETexType_3D,
	ETexType_Cube,
	ETexType_CubeArray
};

struct Vec4
{
	Vec4()
	{
		x = y = z = w = 0.0f;
	}

	unsigned char x, y, z, w;
};

#ifndef SAFE_RELEASE
# define SAFE_RELEASE(p)	{ if(p) { (p)->Release(); (p)=nullptr; } }
#endif

#endif