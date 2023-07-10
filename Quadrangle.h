#pragma once
#include "Figure.h"
namespace Figures_ns
{
    class Quadrangle : public Figure {
    protected:
        int a, b, c, d, A, B, C, D;
    public:
        DYNLIBFIGURES_API Quadrangle();
        DYNLIBFIGURES_API int get_side_a() const;
        DYNLIBFIGURES_API int get_side_b() const;
        DYNLIBFIGURES_API int get_side_c() const;
        DYNLIBFIGURES_API int get_side_d() const;
        DYNLIBFIGURES_API int get_angle_A() const;
        DYNLIBFIGURES_API int get_angle_B() const;
        DYNLIBFIGURES_API int get_angle_C() const;
        DYNLIBFIGURES_API int get_angle_D() const;
    };
}