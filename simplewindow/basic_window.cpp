#include <basic_window.h>

BasicWindow::BasicWindow(int width, int height, const std::string& title)
: gWindow(nullptr)
, gTitle(title)
, gWidth(width)
, gHeight(height)
{}

void
BasicWindow::initialize()
{
    if( !glfwInit() )
    {
        throw std::runtime_error("glfwInit failed");
    }
}

const void
BasicWindow::showWindow()
{
    this->gWindow = glfwCreateWindow(this->gWidth, this->gHeight, this->gTitle.c_str(), NULL, NULL);

    if( !this->gWindow )
    {
    	glfwTerminate();
    	return;
    }

    glfwMakeContextCurrent(this->gWindow);
    while (!glfwWindowShouldClose(this->gWindow))
    {
    	glfwSwapBuffers(this->gWindow);
        glfwPollEvents();
    }

    glfwDestroyWindow(this->gWindow);
    glfwTerminate();

}

BasicWindow::~BasicWindow()
{
}
