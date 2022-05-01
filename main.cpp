#include <iostream>
#include "include.cpp"

int main(int argc, char** argv) {
    std::cout << "Main Partition" << std::endl;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hi");
    glutDisplayFunc(displayMe);
    glutMainLoop();

    return 0;
}