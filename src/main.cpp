/* A simple program to show how to set up an X window for OpenGL rendering.
 * X86 compilation: gcc -o -L/usr/X11/lib   main main.c -lGL -lX11
 * X64 compilation: gcc -o -L/usr/X11/lib64 main main.c -lGL -lX11
 */
#include <stdio.h>
#include <stdlib.h>
#include "UIViewController.h"

#ifdef _WIN32
#include <glew.h>
#include "C:\Users\dokipen\Documents\Visual Studio 2010\libs\glfw-2.7.7.bin.WIN32\include\GL\glfw.h"
#else
#define GLEW_STATIC
#include <GL/glew.h>
//#include <glew.h>
#include <GLFW/glfw3.h>
#endif
#include <memory>







int main( int argc, char* argv[] )
  {



    //UIViewController *viewController = new UIViewController;
    auto viewController = make_unique<UIViewController>();
    //mainCore->appLoop();
    //delete viewController;


  return 0;
  }
