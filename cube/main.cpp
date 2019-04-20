//
//  main.cpp
//  Program2.1
//
//  Created by William Louis Crupi on 4/1/19.
//  Copyright © 2019 William Louis Crupi. All rights reserved.
//
//
#define GL_SILENCE_DEPRECATION

#include </usr/local/Cellar/glew/2.1.0/include/GL/glew.h>
#include </usr/local/include/GLFW/glfw3.h>
#include </usr/local/include/GLFW/glfw3native.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void init(GLFWwindow* window){}
void display(GLFWwindow *window,double currentTime){
    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
}
int main(void)
{
    if (!glfwInit()) {exit(EXIT_FAILURE);}
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR,4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    GLFWwindow* window = glfwCreateWindow(600, 600, "Chapter2 - program1", NULL, NULL);
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK){ exit(EXIT_FAILURE);}
    glfwSwapInterval(1);
    init(window);
    while(!glfwWindowShouldClose(window)) {
        display(window,glfwGetTime());
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
    
}
