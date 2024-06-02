#include <GL/glut.h>
static int shoulder = 0, elbow = 0, telapaktangan = 0;
static int jempol_ruas1, telunjuk_ruas1, jateng_ruas1, manis_ruas1, keling_ruas1 =0;

void init(void) {
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_FLAT);
}

void display(void) {
	glClear (GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	
		glTranslatef (-1.0, 0.0, 0.0);
		glRotatef ((GLfloat) shoulder, 0.0, 1.0, 0.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
		glScalef (2.0, 0.4, 0.6);
		glutWireCube (1.0); 
		glPopMatrix();
	
		glTranslatef (1.0, 0.0, 0.0);
		glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
		glTranslatef (1.0, 0.0, 0.0); 
		glPushMatrix();
		glScalef (2.0, 0.4, 0.6);
		glutWireCube (1.0);
		glPopMatrix(); 
		
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef((GLfloat) telapaktangan, 1.0, 0.0, 0.0);
		glTranslatef(0.2, 0.0, 0.0); 
		glPushMatrix();
		glScalef(0.5, 0.2, 1.0);
		glutWireCube(1.0);
		glPopMatrix();
		
		glTranslatef(-0.3, 0.0, 0.35);
		glTranslatef(0.25, 0.0, 0.3); 
		glPushMatrix();
		glRotatef((GLfloat) jempol_ruas1, 1.0, 0.0, 0.0);
		glScalef(0.2, 0.2, 0.3);
		glutWireCube(1.0);
		glPopMatrix();
		
		glTranslatef(0.5, 0.0, -0.15);
		glTranslatef(0.1, 0.0, -0.225);  
		glPushMatrix();
		glRotatef((GLfloat) telunjuk_ruas1, 0.0, 0.0, 1.0);
		glScalef(0.6, 0.2, 0.15);
		glutWireCube(1.0);
		glPopMatrix();
		
		glTranslatef(0.0, 0.0, 0.0);
		glTranslatef(0.085, 0.0, -0.225); 
		glPushMatrix();
		glRotatef((GLfloat) jateng_ruas1, 0.0, 0.0, 1.0);
		glScalef(0.75 , 0.2, 0.15);
		glutWireCube(1.0);
		glPopMatrix();
		
		glTranslatef(0.0, 0.0, 0.0);
		glTranslatef(-0.075, 0.0, -0.225); 
		glPushMatrix();
		glRotatef((GLfloat) manis_ruas1, 0.0, 0.0, 1.0);
		glScalef(0.6 , 0.2, 0.15);
		glutWireCube(1.0);
		glPopMatrix();
		
		glTranslatef(0.0, 0.0, 0.0);
		glRotatef((GLfloat) keling_ruas1, 0.0, 0.0, 1.0);
		glTranslatef(-0.05, 0.0, -0.225); 
		glPushMatrix();
		glScalef(0.5 , 0.2, 0.15);
		glutWireCube(1.0);
		glPopMatrix();
		
	glPopMatrix();
	glutSwapBuffers();
}


void reshape (int w, int h) {
 	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION); 
	glLoadIdentity();
 	gluPerspective(100.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW); glLoadIdentity();
 	glTranslatef (0.0, 0.0, -5.0);
} 

void keyboard(unsigned char key, int x, int y) {
	switch (key) { 
		case 's': 
		shoulder = (shoulder + 5) % 360;
		glutPostRedisplay(); 
		break;
 		
		case 'S': 
		shoulder = (shoulder - 5) % 360;
		glutPostRedisplay(); 
		break;
		
		case 'e': 
		if (elbow < 150){
			elbow = (elbow + 5);
		}
		glutPostRedisplay(); 
		break;

		case 'E': 
		if (elbow > 0){
		elbow = (elbow - 5);			
		}
		glutPostRedisplay(); 
		break;
		
		case '0':
		telapaktangan = (telapaktangan + 5) % 360;
		glutPostRedisplay();
		break;
		
		case ')':
		telapaktangan = (telapaktangan - 5) % 90;
		glutPostRedisplay();
		break;
		
		case '2':
		if (telunjuk_ruas1 < 90){
			telunjuk_ruas1 = (telunjuk_ruas1 + 5);
		}
		glutPostRedisplay();
		break;
		
		case '@' :
		if (telunjuk_ruas1 > 0){
			telunjuk_ruas1 = (telunjuk_ruas1 - 5);
		}
		glutPostRedisplay();
		break;
		
		case '6':
		if (jempol_ruas1 <150){
			jempol_ruas1 = jempol_ruas1 + 5;
		}
		glutPostRedisplay();
		break;
		
		case '3':
		if (jateng_ruas1<90){
			jateng_ruas1 = (jateng_ruas1 + 5);
		}
		glutPostRedisplay();
		break;
		
		case '#' :
		if (jateng_ruas1>0){
			jateng_ruas1 = (jateng_ruas1 - 5);
		}
		glutPostRedisplay();
		break;
		
		case '4':
		manis_ruas1 = (manis_ruas1 + 5) % 90;
		glutPostRedisplay();
		break;
		
		case '$' :
		manis_ruas1 = (manis_ruas1 - 5) % 90;
		glutPostRedisplay();
		break;
		
		case '5':
		keling_ruas1 = (keling_ruas1 + 5) % 90;
		glutPostRedisplay();
		break;
		
		case '%' :
		keling_ruas1 = (keling_ruas1 - 5) % 90;
		glutPostRedisplay();
		break;
		
		case 27: 
		exit(0); 
		break;
		
		default: 
		break;
 }
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (1000, 1000);
	glutInitWindowPosition (100, 100);
	glutCreateWindow (argv[0]); init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop(); 
	return 0;
}
