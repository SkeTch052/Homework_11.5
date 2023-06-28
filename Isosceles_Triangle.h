#pragma once
#include "Triangle.h"
#ifdef DYNLIBFIGURES_EXPORTS
#define DYNLIBFIGURES_API __declspec(dllexport)
#else
#define DYNLIBFIGURES_API __declspec(dllimport)
#endif
namespace Figures_ns
{
	class Isosceles_Triangle : public Triangle { public: DYNLIBFIGURES_API Isosceles_Triangle(); };
}
