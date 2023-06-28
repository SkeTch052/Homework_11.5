cmake_minimum_required(VERSION 3.22.0)
project(Project)
add_library(DynLibFigures SHARED Equilateral_Triangle.cpp Figure.cpp Isosceles_Triangle.cpp Parallelogram.cpp 
Quadrangle.cpp Rectangle.cpp Rhombus.cpp Right_Triangle.cpp Square.cpp Triangle.cpp)
add_executable(ProjectExe FiguresClient.cpp)
target_link_libraries(ProjectExe DynLibFigures)
target_compile_definitions(DynLibFigures PRIVATE DYNLIBFIGURES_EXPORTS)