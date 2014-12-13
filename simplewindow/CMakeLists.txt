addflags()

add_executable(simple_window main.cpp
                             basic_window.cpp)

message("${glfw_include}")

include_directories(${glfw_include}
                    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_link_libraries(simple_window glfw ${GLFW_LIBRARIES})
