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

#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926535898
#define circle_points 100

void RenderScene(void) {
	// kamus lokal
	int i, radius, xPusat, yPusat;
	float sudut, x, y;
	
	// algoritma
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glBegin(GL_POLYGON);
    
    radius = 40;
    xPusat = 50;
    yPusat = 50;
    for (i= 0; i<=360;i++){
    	sudut = i*(2*PI/circle_points);
    	x = xPusat + radius*cos(sudut);
    	y = yPusat + radius*sin(sudut);
    	glVertex2f(x/100, y/100);
    }
    glEnd();
    
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f) ;
    radius = 20;
    xPusat = 50;
    yPusat = 50;
    for (i= 0; i<=360;i++){
    	sudut = i*(2*PI/circle_points);
    	x = xPusat + radius*cos(sudut);
    	y = yPusat + radius*sin(sudut);
    	glVertex2f(x/100, y/100);
    }
    glEnd();
    glPopMatrix();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Lingkaran");
    glutDisplayFunc(RenderScene);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}
