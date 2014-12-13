#include <basic_window.h>
#include <CoreFoundation/CoreFoundation.h>

int main(int argc, char** argv)
{
    BasicWindow oglWindow(600,800, "Basic Window");
    oglWindow.initialize();
    
    oglWindow.showWindow();
    
    return EXIT_SUCCESS;
}
