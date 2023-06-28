#include "Figure.h"
#include <string>
namespace Figures_ns
{
    Figure::Figure() {
        sides_count = 0;
        name = "Фигура";
    }
    int Figure::get_sides_count() { return sides_count; }
    std::string Figure::get_name() const { return name; }
}