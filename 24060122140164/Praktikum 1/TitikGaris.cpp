#include <GL/glut.h>

void BuatGarisTitik(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    //Titik
    glPointSize(5.0f);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.25, 0.25, 0.0);
    glEnd();
    glFlush();

   	//Lines
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.50, 0.40, 0.0);
    glVertex3f(0.50, -0.40, 0.0);
    glEnd();
    glFlush();
}



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Shapes");
    glutDisplayFunc(BuatGarisTitik);
    glutMainLoop();
    return 0;
}

