cmake_minimum_required(VERSION 2.6)

project(ShapeLib)


set(HEADERS ShapeLib/Point.h ShapeLib/Picture.h ShapeLib/Line.h ShapeLib/ColoredLine.h ShapeLib/ColoredPoint.h)

set(SOURCES ShapeLib/_ColoredLine.cpp ShapeLib/_coloredPoint.cpp ShapeLib/_Line.cpp ShapeLib/_Picture.cpp)

add_definitions(-O4)


add_library(HelloLib STATIC ${SOURCES} ${HEADERS})
