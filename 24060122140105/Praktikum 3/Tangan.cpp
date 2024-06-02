#include <GL/glut.h>
static int shoulder = 0, elbow = 0, hand=0, kelingking=0, kelingkingg=0, telunjuk=0, telunjukk=0, manis=0, maniss=0, tengah=0, tengahh=0;
static int jempol=0, jempoll=0;

void init(void) {
 glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}

void display(void) {
 glClear (GL_COLOR_BUFFER_BIT);
glPushMatrix();
	//pucuk
	glTranslatef (-1.0, 0.0, 0.0);
	glColor3f(0.0,1.0,0.0);
	glRotatef ((GLfloat)shoulder, 1.0, 0.0, 0);
	glTranslatef (-1.0, 0.0, 0.0); 
		glPushMatrix();
 		glScalef (2.0, 0.7, 1.0);
		glutWireCube (1.0); 
		glPopMatrix();
		
	//lengan
	glTranslatef (1.0, 0.0, 0.0);
	glColor3f(0.0,1.0,1.0);
 	glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
	glTranslatef (1.0, 0.0, 0.0);
		glPushMatrix();
 		glScalef (2.0, 0.6, 1.0);
		glutWireCube (1.0);
		glPopMatrix();
		
	//telapak	 
	glTranslatef (1.0, 0.0, 0.0);
	glColor3f(1.0,1.0,1.0);
	glRotatef ((GLfloat) hand, 0.0, 0.0, 1.0);
	glTranslatef (0.5, 0.0, 0.0); 
		glPushMatrix();
 		glScalef (1.0, 0.4, 1.2);
		glutWireCube (1.0); 
		glPopMatrix();	
		
	//jari kelingking	
	glPushMatrix();
	glColor3f(1.0,1.0,0.0);
	glTranslatef (0.5, 0.0, -0.5);
	glRotatef ((GLfloat) kelingking, 0.0, 0.0, 1.0);
	glTranslatef (0.5, 0.0, 0.0); 
		glPushMatrix();
 		glScalef (0.5, 0.2, 0.2);
 		glTranslatef(-0.6, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
		
	glTranslatef (0.0, 0.0, -0.5);
	glRotatef ((GLfloat) kelingkingg, 0.0, 0.0, 1.0);
	glTranslatef (0.0, 0.0, 0.5); 
		glPushMatrix();
 		glScalef (0.4, 0.2, 0.2);
 		glTranslatef(0.4, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
	glPopMatrix();
	
	//jari manis	
	glPushMatrix();
	glColor3f(1.0,0.0,0.0);
	glTranslatef (0.5, 0.0, -0.15);
	glRotatef ((GLfloat) manis, 0.0, 0.0, 1.0);
	glTranslatef (0.5, 0.0, 0.0); 
		glPushMatrix();
		glScalef (0.7, 0.2, 0.2);
 		glTranslatef(-0.3, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
		
	glTranslatef (0.2, 0.0, -0.5);
	glRotatef ((GLfloat) maniss, 0.0, 0.0, 1.0);
	glTranslatef (0.0, 0.0, 0.5); 
		glPushMatrix();
 		glScalef (0.6, 0.2, 0.2);
 		glTranslatef(0.4, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
		glPopMatrix();
	
	//jari tengah	
	glPushMatrix();
	glColor3f(1.0,0.0,1.0);
	glTranslatef (0.5, 0.0, 0.15);
	glRotatef ((GLfloat) tengah, 0.0, 0.0, 1.0);
	glTranslatef (0.5, 0.0, 0.0); 
		glPushMatrix();
 		glScalef (0.7, 0.2, 0.2);
 		glTranslatef(-0.3, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
		
	glTranslatef (0.2, 0.0, -0.5);
	glRotatef ((GLfloat) tengahh, 0.0, 0.0, 1.0);
	glTranslatef (0.0, 0.0, 0.5); 
		glPushMatrix();
 		glScalef (0.7, 0.2, 0.2);
 		glTranslatef(0.4, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
		glPopMatrix();
	
	//jari telunjuk
	glPushMatrix();
	glColor3f(0.0,1.0,1.0);
	glTranslatef (0.5, 0.0, 0.5);
	glRotatef ((GLfloat) telunjuk, 0.0, 0.0, 1.0);
	glTranslatef (0.5, 0.0, 0.0); 
		glPushMatrix();
 		glScalef (0.7, 0.2, 0.2);
 		glTranslatef(-0.3, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
		
	glTranslatef (0.2, 0.0, -0.5);
	glRotatef ((GLfloat) telunjukk, 0.0, 0.0, 1.0);
	glTranslatef (0.0, 0.0, 0.5); 
		glPushMatrix();
 		glScalef (0.4, 0.2, 0.2);
 		glTranslatef(0.35, 0.0, 0.0);
		glutWireCube (1.0); 
		glPopMatrix();
		glPopMatrix();
				
	//jari jempol
	glPushMatrix();
	glColor3f(0.0,0.0,1.0);
	glTranslatef (-0.4, 0.0, 0.5);
	glRotatef ((GLfloat) jempol, 1.0, 0.0, 0.0);
	glTranslatef (0.5, 0.0, 0.0); 
		glPushMatrix();
 		glScalef (0.3, 0.2, 0.5);
 		glTranslatef(-0.29, 0.0, 0.4);
		glutWireCube (1.0); 
		glPopMatrix();
		
	glTranslatef (-0.1, 0.0, 0.25);
	glRotatef ((GLfloat) jempoll, 1.0, 0.0, 0.0);
	glTranslatef (0.0, 0.0, 0.5); 
		glPushMatrix();
 		glScalef (0.3, 0.2, 0.6);
 		glTranslatef(0.0, 0.0, -0.2);
		glutWireCube (1.0); 
		glPopMatrix();
	glPopMatrix();	
glPopMatrix();
glutSwapBuffers();
}

void reshape (int w, int h) {
 glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION); glLoadIdentity
();
 gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW); glLoadIdentity();
 glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
switch (key) {
	
	//lengan
// case 'q': shoulder = (shoulder + 5) % 90;
//glutPostRedisplay(); break;
 case 'Q': shoulder = (shoulder - 5) % 180;
glutPostRedisplay(); break;
 case 'w': elbow = (elbow + 5) % 180;
glutPostRedisplay(); break;
// case 'W': elbow = (elbow - 5) % 180; 
//glutPostRedisplay(); break;
 case 'e': hand = (hand + 5) % 90;
glutPostRedisplay(); break;
 case 'E': hand = (hand - 5) % 90;
glutPostRedisplay(); break;
	//jari kelingking
 case 'a': kelingking = (kelingking + 5) % 90;
glutPostRedisplay(); break;
 case 'A': kelingking = (kelingking - 5) % 90;
glutPostRedisplay(); break;
 case 's': kelingkingg = (kelingkingg + 5) % 90;
glutPostRedisplay(); break;
 case 'S': kelingkingg = (kelingkingg - 5) % 90;
glutPostRedisplay(); break;
	//jari telunjuk
 case 'd': telunjuk = (telunjuk + 5) % 90;
glutPostRedisplay(); break;
 case 'D': telunjuk = (telunjuk - 5) % 90;
glutPostRedisplay(); break;
 case 'f': telunjukk = (telunjukk + 5) % 90;
glutPostRedisplay(); break;
 case 'F': telunjukk = (telunjukk - 5) % 90;
glutPostRedisplay(); break;
	//jari manis
 case 'g': manis = (manis + 5) % 90;
glutPostRedisplay(); break;
 case 'G': manis = (manis - 5) % 90;
glutPostRedisplay(); break;
 case 'h': maniss = (maniss + 5) % 90;
glutPostRedisplay(); break;
 case 'H': maniss = (maniss - 5) % 90;
glutPostRedisplay(); break;
	//jari tengah
 case 'z': tengah = (tengah + 5) % 90;
glutPostRedisplay(); break;
 case 'Z': tengah = (tengah - 5) % 90;
glutPostRedisplay(); break;
 case 'x': tengahh = (tengahh + 5) % 90;
glutPostRedisplay(); break;
 case 'X': tengahh = (tengahh - 5) % 90;
glutPostRedisplay(); break;
	//jari jempol
 case 'c': jempol = (jempol + 5) % 90;
glutPostRedisplay(); break;
 case 'C': jempol = (jempol - 5) % 90;
glutPostRedisplay(); break;
 case 'v': jempoll = (jempoll + 5) % 90;
glutPostRedisplay(); break;
 case 'V': jempoll = (jempoll - 5) % 90;
glutPostRedisplay(); break;
case 27: exit(0); break;
default: break;
 }
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (700, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow (argv[0]); init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutMainLoop(); return 0;
}
