///*
// * FreeGLUT Shapes Demo
// *
// * Written by Nigel Stewart November 2003
// *
// * This program is test harness for the sphere, cone 
// * and torus shapes in FreeGLUT.
// *
// * Spinning wireframe and smooth shaded shapes are
// * displayed until the ESC or q key is pressed.  The
// * number of geometry stacks and slices can be adjusted
// * using the + and - keys.
// */
//
#include <GL/glut.h>

#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535898
#define circle_points 100

//void translasi(void){
//  glClear(GL_COLOR_BUFFER_BIT);
//	glTranslatef(-0.50, 0.50, 0);
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glRectf(-0.18, 0.18, 0.18, -0.18);
//  glFlush();
//}

void rangkaMobil(void){
	// kamus lokal
	int i, radius, xPusat, yPusat;
	float sudut, x, y;
	// algoritma
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-0.30, 0.60, 0.0);
	glVertex3f(0.40, 0.60, 0.0);
	glVertex3f(0.80, 0.20, 0.0);
	glVertex3f(0.80, -0.10, 0.0);
	glVertex3f(-0.50, -0.10, 0.0);
	glVertex3f(-0.50, 0.20, 0.0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glBegin(GL_TRIANGLES);
		glColor3f(0.0f, 0.0f, 0.0f); glVertex3f(0.40, 0.50, 0.00);
		glColor3f(0.0f, 0.0f, 0.0f); glVertex3f(0.40, 0.20, 0.00);
		glColor3f(0.0f, 0.0f, 0.0f); glVertex3f(0.70, 0.20, 0.00);
	glEnd();
    glPopMatrix();
	
    glPushMatrix();
    glPointSize(5.0f);
    glTranslatef(0.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.0, 0.0, 0.0);
    glEnd();
    glPopMatrix();
	
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    radius = 20;
    xPusat = -20;
    yPusat = -10;
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
    glColor3f(0.0f, 0.0f, 0.0f);
    radius = 20;
    xPusat = 50;
    yPusat = -10;
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
    glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.25, 0.20, 0.0);
	glVertex3f(0.30, 0.20, 0.0);
	glVertex3f(0.30, 0.50, 0.0);
	glVertex3f(-0.25, 0.50, 0.0);
	glVertex3f(-0.40, 0.20, 0.0);
    glEnd();
	glPopMatrix();
	glFlush();
}

void Segitiga(void){
	glTranslatef(0.25, 0, 0);
	glRotated(60.0, 0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLES);
		glColor3f(0.0f, 0.0f, 0.0f); glVertex3f(-0.05, -0.05, 0.00);
		glColor3f(0.0f, 0.0f, 0.0f); glVertex3f(0.15, -0.05, 0.00);
		glColor3f(0.0f, 0.0f, 0.0f); glVertex3f(-0.05, 0.05, 0.00);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[]){	// Main program
	
	glutInit(&argc, argv);
	glutInitWindowSize(640, 640);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);	
	glutCreateWindow("Membuat Mobil");
	glutDisplayFunc(rangkaMobil);
	glClearColor(1.0f, 0.0f, 1.0f, 0.0f);
	glutMainLoop();
	
	return 0;
}

//#include <GL/gl.h>
//#include <GL/glut.h>
//#include <math.h>
//
//#define PI 3.1415926535898
//#define circle_points 100
//
//void RenderScene(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glPushMatrix();
//    glLineWidth(2.0f);
//    glBegin(GL_LINES);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glVertex3f(0.00, 0.20, 0.0);
//    glVertex3f(0.00, -0.20, 0.0);
//    glEnd();
//    glPopMatrix();
//
//    glPushMatrix();
//    glPointSize(5.0f);
//    glTranslatef(0.35, 0.35, 0.0);
//    glBegin(GL_POINTS);
//    glColor3f(1.0f, 1.0f, 1.0f);
//    glVertex3f(0.25, 0.25, 0.0);
//    glEnd();
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(0.50, 0.50, 0.00);
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glVertex3f(-0.05, -0.05, 0.00);
//    glColor3f(0.0f, 1.0f, 0.0f);
//    glVertex3f(0.15, -0.05, 0.00);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glVertex3f(-0.05, 0.05, 0.00);
//    glColor3f(1.0f, 1.0f, 0.0f);
//    glVertex3f(0.15, 0.05, 0.00);
//    glEnd();
//    glPopMatrix();
//
//    glPushMatrix();
//    glBegin(GL_LINE_LOOP);
//    int i;
//    float angle;
//    for (i = 0; i < circle_points; i++) {
//        angle = 2 * PI * i / circle_points;
//        glVertex3f(cos(angle), sin(angle), 0.0);
//    }
//    glEnd();
//    glPopMatrix();
//
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Simple");
//    glutDisplayFunc(RenderScene);
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}
