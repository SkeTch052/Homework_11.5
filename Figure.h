#pragma once
#include <string>
#ifdef DYNLIBFIGURES_EXPORTS
#define DYNLIBFIGURES_API __declspec(dllexport)
#else
#define DYNLIBFIGURES_API __declspec(dllimport)
#endif
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