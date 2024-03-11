/* Ananda Putra Bayu
   2460122140125
   B2
*/


#include <GL/glut.h>

static int shoulder = 0, elbow = 0, hand = 0, jari1 = 0, jari2 = 0, jari3 = 0, jari4 = 0, jari5 = 0;

void init(void) {
glClearColor (0.0, 0.0, 0.0, 0.0);
glShadeModel (GL_FLAT);
}

void display(void) {
glClear (GL_COLOR_BUFFER_BIT);
glPushMatrix();

// Pembuatan Bahu
glTranslatef (-1.0, 0.0, 0.0);
glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
glTranslatef (1.0, 0.0, 0.0); glPushMatrix();
glScalef (2.0, 0.4, 1.0);
glutWireCube (1.0); glPopMatrix();

// Pembuatan Siku
glTranslatef (1.0, 0.0, 0.0);
glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
glTranslatef (1.0, 0.0, 0.0); glPushMatrix();
glScalef (2.0, 0.4, 1.0);
glutWireCube (1.0); glPopMatrix();

// Pembuatan Tangan
glTranslatef (0.0, 0.0, 0.0);
glRotatef ((GLfloat) hand, 0.0, 0.0, 1.0);
glTranslatef (1.0, 0.0, 0.0); glPushMatrix();
glScalef (1.5, 0.4, 3.0);
glutWireCube (1.0); glPopMatrix();

// Pembuatan jari 1
glTranslatef (0.0, 0.0, 1.0);
glRotatef ((GLfloat) jari1, 0.0, 0.0, 1.0);
glTranslatef (0.0, 0.0, 1.0); glPushMatrix();
glScalef (0.3, 0.3, 0.6);
glutWireCube (1.0); glPopMatrix();

// Pembuatan jari 2
glTranslatef (0.0, 0.0, 0.0);
glRotatef ((GLfloat) jari2, 0.0, 0.0, 1.0);
glTranslatef (1.0, 0.0, -0.7); glPushMatrix();
glScalef (0.8, 0.3, 0.3);
glutWireCube (1.0); glPopMatrix();

// Pembuatan jari 3
glTranslatef (0.0, 0.0, 0.0);
glRotatef ((GLfloat) jari3, 0.0, 0.0, 1.0);
glTranslatef (0.0, 0.0, -0.7); glPushMatrix();
glScalef (0.8, 0.3, 0.3);
glutWireCube (1.0); glPopMatrix();

// Pembuatan jari 4
glTranslatef (0.0, 0.0, 0.0);
glRotatef ((GLfloat) jari4, 0.0, 0.0, 1.0);
glTranslatef (0.0, 0.0, -0.7); glPushMatrix();
glScalef (0.8, 0.3, 0.3);
glutWireCube (1.0); glPopMatrix();

// Pembuatan jari 5
glTranslatef (0.0, 0.0, 0.0);
glRotatef ((GLfloat) jari5, 0.0, 0.0, 1.0);
glTranslatef (0.0, 0.0, -0.7); glPushMatrix();
glScalef (0.8, 0.3, 0.3);
glutWireCube (1.0); glPopMatrix();

glPopMatrix(); glPopMatrix();
glutSwapBuffers();
}
void reshape (int w, int h) {
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION); glLoadIdentity
();
gluPerspective(90.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
glMatrixMode(GL_MODELVIEW); glLoadIdentity();
glTranslatef (0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
	
switch (key) {
case 'q': 
shoulder = (shoulder + 5) % 360;
if (shoulder > 180) {
	shoulder = 0;
}
glutPostRedisplay(); break;

case 'Q': 
shoulder = (shoulder - 5) % 360;
if (shoulder < -180) {
	shoulder = 0;
}
glutPostRedisplay(); break;

case 'w': 
elbow = (elbow + 5) % 360;
if (elbow > 180) {
	elbow = 0;
}
glutPostRedisplay(); break;

case 'W': 
elbow = (elbow - 5) % 360;
if (elbow < -180) {
	elbow = 0;
}
glutPostRedisplay(); break;

case 'a': 
hand = (hand + 5) % 360;
if (hand > 90) {
	hand = 0;
}
glutPostRedisplay(); break;

case 'A': 
hand = (hand - 5) % 360;
if (hand < -90) {
	hand = 0;
}
glutPostRedisplay(); break;

case 's': 
jari1 = (jari1 + 5) % 360;
if (jari1 > 90) {
	jari1 = 0;
}
glutPostRedisplay(); break;

case 'S': 
jari1 = (jari1 - 5) % 360;
if (jari1 < 0) {
	jari1 = 0;
}
glutPostRedisplay(); break;

case 'z': 
jari2 = (jari2 + 5) % 360;
if (jari2 > 90) {
	jari2 = 0;
}
glutPostRedisplay(); break;

case 'Z': 
jari2 = (jari2 - 5) % 360;
if (jari2 < 0) {
	jari2 = 0;
}
glutPostRedisplay(); break;

case 'x': 
jari3 = (jari3 + 5) % 180;
if (jari3 > 90) {
	jari3 = 0;
}
glutPostRedisplay(); break;

case 'X': 
jari3 = (jari3 - 5) % 360;
if (jari3 < 0) {
	jari3 = 0;
}
glutPostRedisplay(); break;

case 'e': 
jari4 = (jari4 + 5) % 180;
if (jari4 > 90) {
	jari4 = 0;
}
glutPostRedisplay(); break;

case 'E': 
jari4 = (jari4 - 5) % 360;
if (jari4 < 0) {
	jari4 = 0;
}
glutPostRedisplay(); break;

case 'd': 
jari2 = (jari5 + 5) % 180;
if (jari2 > 90) {
	jari2 = 0;
}
glutPostRedisplay(); break;

case 'D': 
jari5 = (jari5 - 5) % 360;
if (jari5 < 0) {
	jari5 = 0;
}
glutPostRedisplay(); break;


case 27: 
exit(0); break;
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
glutMainLoop(); 
return 0;
}
