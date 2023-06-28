#pragma once
#include "Parallelogram.h"
#ifdef DYNLIBFIGURES_EXPORTS
#define DYNLIBFIGURES_API __declspec(dllexport)
#else
#define DYNLIBFIGURES_API __declspec(dllimport)
#endif
namespace Figures_ns
{
	class Rhombus : public Parallelogram { public: DYNLIBFIGURES_API Rhombus(); };
}