#pragma once
#include "Quadrangle.h"
#ifdef DYNLIBFIGURES_EXPORTS
#define DYNLIBFIGURES_API __declspec(dllexport)
#else
#define DYNLIBFIGURES_API __declspec(dllimport)
#endif
namespace Figures_ns
{
	class Rectangle : public Quadrangle { public: DYNLIBFIGURES_API Rectangle(); };
}