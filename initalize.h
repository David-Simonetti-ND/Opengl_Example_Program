 #include <GLFW/glfw3.h>
void init(GLFWwindow* window)
 {
    // glfw: initialize and configure
    // ------------------------------
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    // glfw window creation
    // --------------------
    
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }
    glfwMakeContextCurrent(window);
    glewExperimental = true;
    if (glewInit() != GLEW_OK)
    {
        std::cout << "Failed to intialize GLEW";
    }
    // configure global opengl state
    // -----------------------------
    glEnable(GL_DEPTH_TEST);
}