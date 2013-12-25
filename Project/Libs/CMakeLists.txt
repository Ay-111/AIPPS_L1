cmake_minimum_required(VERSION 2.6)

project(ShapeLib)


set(HEADERS ShapeLib/Point.h ShapeLib/Picture.h ShapeLib/Line.h ShapeLib/ColoredLine.h ShapeLib/ColoredPoint.h)

set(SOURCES ShapeLib/_ColoredLine.cpp ShapeLib/_coloredPoint.cpp ShapeLib/_Line.cpp ShapeLib/_Picture.cpp)

#добавление либы без финда
set(LIBS ShapeLib/DevIL.lib)


add_definitions(-O4)

#добавление либы с финдом
find_path(DevIL INCLUDE_DIR 
    NAMES DevIL.lib
    PATHS ${DevIL_PKGCONF_INCLUDE_DIRS}
    )


find_library(DevIL NAMES DevIL.lib PATHS ${DevIL__PKGCONF_LIBRARY_DIRS})
include_directories(${DevIL_PKGCONF_INCLUDE_DIRS} )


set (LIBS1 ${LIBS1} ${DevIL_LIBRARIES} )

add_library(HelloLib STATIC ${SOURCES} ${HEADERS} ${LIBS1} ${LIBS})
