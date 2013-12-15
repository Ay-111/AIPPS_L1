cmake_minimum_required(VERSION 2.6)


project(MyProject)



set (SOURCES src/main.cpp)


include_directories(libs/ShapeLib)


add_subdirectory(libs)


add_executable(test ${SOURCES})


target_link_libraries(test HelloLib)