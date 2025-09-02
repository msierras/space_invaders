#include <cstdio>
#include <GL/glew.h>
#include <GLFW/glfw3.h> // This header is needed in order to use GLFW

// GLFW error events are reported through callbacks, where in the first argument it receives the error code as an int,
// and in the second argument it receives the error description as a UTF-8 encoded string (const char *). 
// The function below prints the error description to stderr. 
void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

int main(){

    glfwSetErrorCallback(error_callback);

    // initializing the GLFW library
    if( !glfwInit() ) return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    return 0; 
}