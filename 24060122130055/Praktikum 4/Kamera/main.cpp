#include <stdlib.h>
#include <stdio.h>  
#include <math.h> 
#include <GL/glut.h>
double rotAngle = 40; 
double rotAngle1 = 20;  
double rotAngle2 = 0;  
void init() 
{ 
	glClearColor(0, 0, 0, 0); 
 	glClearDepth(1.0); 
 	glMatrixMode(GL_PROJECTION); 
 	glLoadIdentity(); 
 	gluPerspective(60, 1, 1, 1000); 
 	glMatrixMode(GL_MODELVIEW); 
 	glLoadIdentity(); 
 	gluLookAt( 
 	0.0, 0.0, 5.0,  
 	0.0, 0.0, 0.0,  
 	0.0, 1.0, 0.0); 
} 

void display() 
{ 
 	glClear( 
 	GL_COLOR_BUFFER_BIT | 
 	GL_DEPTH_BUFFER_BIT); 
 	glPushMatrix(); 
 	glRotated(rotAngle, 0, 1, 0); 
 	glRotated(rotAngle1, 1, 0, 0);  
 	glRotated(rotAngle2, 0, 0, 1); 
 	glEnable(GL_COLOR_MATERIAL);  
 	glColor3f(1.0, 0.1, 0.1); 
 	glutSolidTeapot(1); 
 	glPopMatrix();
 	glFlush();  
 	glutSwapBuffers();  
} 
void keyboard(unsigned char k, int x, int y) 
{ 
 	switch (k) 
 	{ 
 		case 'a': 
 		rotAngle += 5; 
 		break; 
 		case 'y': 
 		rotAngle1 += 5;  
 		break; 
 		case 'z': 
 		rotAngle2 += 5;  
 		break; 
 		case 's': 
 		rotAngle2 -= 5;  
 		break;
 		case 'b': 
 		rotAngle1 -= 5;  
 		break; 
 		case 'l': 
 		rotAngle -= 5;  
 		break; 
 		case 'q': 
 		exit(0); 
 	} 
 	glutPostRedisplay(); 
} 

int main() 
{ 
 	glutInitDisplayMode( 
 	GLUT_DOUBLE |  
 	GLUT_DEPTH | 
 	GLUT_RGB ); 
 	glutCreateWindow("Kamera"); 
 	glutDisplayFunc(display); 
 	glutKeyboardFunc(keyboard);  
 	init(); 
 	glutMainLoop(); 
 	return 0; 
}
