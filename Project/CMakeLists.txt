cmake_minimum_required(VERSION 2.6)


project(myproj)

file(GLOB headers *.h)
file(GLOB sources2 *.m)

set (SOURCES src/main.cpp)


include_directories(libs/ShapeLib)




add_subdirectory(libs)


add_executable(test ${SOURCES} ${headers} ${sources2})


target_link_libraries(test HelloLib)