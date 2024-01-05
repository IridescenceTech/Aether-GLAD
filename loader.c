#include "include/glad/gl.h"

typedef void (*GLFWglproc)(void);
GLFWglproc glfwGetProcAddress(const char* procname);

int aether_loadgl(void) {
    return gladLoadGL((GLADloadfunc) glfwGetProcAddress);
}

int aether_loadgles(void) {
    return gladLoadGLES2((GLADloadfunc) glfwGetProcAddress);
}