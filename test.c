#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(400, 300);
    glutCreateWindow("Hello Sinthia");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

