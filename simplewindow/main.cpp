#include <basic_window.h>
#include <cstdlib>

#ifdef __APPLE__
#include <CoreFoundation/CoreFoundation.h>
#endif

int main(int argc, char** argv)
{
    BasicWindow oglWindow(600,800, "Basic Window");
    oglWindow.initialize();
    
    oglWindow.showWindow();
    
    return EXIT_SUCCESS;
}
