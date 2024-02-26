/*
 * FreeGLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone 
 * and torus shapes in FreeGLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <stdlib.h>

#include <GL/glut.h>



void Garis(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.00, 0.20, 0.0);
    glVertex3f(0.00, -0.20, 0.0);
    glEnd();
    glFlush();
}

void Segitiga(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.10, -0.10, 0.00);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.10, -0.10, 0.00);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.00, 0.10, 0.00);
    glEnd();
    glFlush();
}

void segiEmpat(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0, 0.0, 0.0);
	glRectf(-0.15f, 0.15f, 0.15f, -0.15f);
	
	glColor3f(1.0, 0.0, 0.0);
	glRectf(-0.48f, 0.15f, -0.18f, -0.15f);
	
	glColor3f(1.0, 0.0, 0.0);
	glRectf(0.18f, 0.15f, 0.48f, -0.15f);
	
	glColor3f(0.0, 1.0, 0.0);
	glRectf(-0.315f, 0.45f, -0.015f, 0.15f);
	
	glColor3f(0.0, 1.0, 0.0);
	glRectf(0.315f, 0.45f, 0.015f, 0.15f);
	
	glColor3f(0.0, 0.0, 1.0);
	glRectf(-0.15f, 0.75f, 0.15f, 0.45f);
	
	glFlush();
}

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, 0.18, 0.18, -0.18);
    glFlush();
}


int main(int argc, char* argv[]){	// Main program
	
	glutInit(&argc, argv);
	glutInitWindowSize(640, 640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);	
	glutCreateWindow("Susunan-Balok");
	glutDisplayFunc(segiEmpat);
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	
	glutMainLoop();
	
	return 0;
}
