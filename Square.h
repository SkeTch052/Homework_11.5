#pragma once
#include "Rectangle.h"
#ifdef DYNLIBFIGURES_EXPORTS
#define DYNLIBFIGURES_API __declspec(dllexport)
#else
#define DYNLIBFIGURES_API __declspec(dllimport)
#endif
namespace Figures_ns
{
	class Square : public Rectangle { public: DYNLIBFIGURES_API Square(); };
}