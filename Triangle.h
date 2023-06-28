#pragma once
#include "Figure.h"
#ifdef DYNLIBFIGURES_EXPORTS
#define DYNLIBFIGURES_API __declspec(dllexport)
#else
#define DYNLIBFIGURES_API __declspec(dllimport)
#endif
namespace Figures_ns
{
    class Triangle : public Figure {
    protected:
        int a, b, c, A, B, C;
    public:
        DYNLIBFIGURES_API Triangle();
        DYNLIBFIGURES_API int get_side_a() const;
        DYNLIBFIGURES_API int get_side_b() const;
        DYNLIBFIGURES_API int get_side_c() const;
        DYNLIBFIGURES_API int get_angle_A() const;
        DYNLIBFIGURES_API int get_angle_B() const;
        DYNLIBFIGURES_API int get_angle_C() const;
    };
}