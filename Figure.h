#pragma once
#include <string>
#include "Macros.h"
namespace Figures_ns
{
    class Figure {
    protected:
        int sides_count;
        std::string name;
    public:
        DYNLIBFIGURES_API Figure();
        DYNLIBFIGURES_API int get_sides_count();
        DYNLIBFIGURES_API std::string get_name() const;
    };
}