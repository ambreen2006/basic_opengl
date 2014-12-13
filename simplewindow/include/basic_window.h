#ifndef __BASIC_OPENGL_SIMPLEWINDOW_BASICWINDOW__
#define __BASIC_OPENGL_SIMPLEWINDOW_BASICWINDOW__

#include <iostream>
#include <GLFW/glfw3.h>
#include <stdexcept>

class BasicWindow
{
public:
    BasicWindow(int width, int height, const std::string& title);
    virtual void initialize();
    virtual ~BasicWindow();
    virtual const void showWindow();

private:
    GLFWwindow      *gWindow;
    std::string     gTitle;
    int             gWidth;
    int             gHeight;
};

#endif
