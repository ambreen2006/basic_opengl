cmake_minimum_required(VERSION 2.6)

project(BasicOpenGLExercise)

macro(addflags)
  enable_language("CXX")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endmacro()

addflags()

set(glfw_include "${CMAKE_CURRENT_SOURCE_DIR}/glfw-3.0.4/include")

add_subdirectory("glfw-3.0.4")
add_subdirectory("simplewindow")
