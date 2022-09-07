
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

#define _WINDOW_WIDTH 800
#define _WINDOW_HEIGHT 600
#define _WINDOW_TITLE "eokas-gpu:glfw"

int main(int argc, char** argv) {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(_WINDOW_WIDTH, _WINDOW_HEIGHT, _WINDOW_TITLE, NULL, NULL);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}