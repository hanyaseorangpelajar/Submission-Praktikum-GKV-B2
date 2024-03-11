// NAMA			: Raka Maulana Yusuf
// NIM			: 24060122140119
// Deskripsi	: Membuat gambar berupa tangan yang dapat digerakkan menggunakan input keyboard

#include <stdio.h>
#include <stdlib.h>
#include <gl/glut.h>

// Mengatur sudut rotasi
static int pundhak = 0, sikut = 0, ugelugeltangan = 0, jempol = 0, panuduh = 0, panuduh2 = 0, panunggul = 0, panunggul2 = 0, manis = 0, manis2 = 0, jentik = 0, jentik2 = 0;

void init(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPushMatrix();
		//pundhak
		glTranslatef(-1.0,0.0,0.0);
		glRotatef((GLfloat) pundhak, 0.0,0.0,1.0);
		glTranslatef(1.0,0.0,0.0);
		glColor3f(0.0, 0.0, 0.0);
		glPushMatrix();
			glScalef(2.0,0.4,1.0);
			glutWireCube(1.0);
		glPopMatrix();
		//sikut
		glTranslatef(1.0,0.0,0.0);
		glRotatef((GLfloat) sikut, 0.0,0.0,1.0);
		glTranslatef(1.0,0.0,0.0);
		glColor3f(0.0, 0.0, 0.0); 
		glPushMatrix();
			glScalef(2.0,0.4,1.0);
			glutWireCube(1.0);
		glPopMatrix();
		//ugelugeltangan
		glTranslatef(1.0,0.0,0.0);
		glRotatef((GLfloat) ugelugeltangan, 0.0,0.0,1.0);
		glTranslatef(0.5,0.0,0.0);
		glColor3f(0.0, 0.0, 0.0);
		glPushMatrix();
			glScalef(1.0,0.4 ,1.0);
			glutWireCube(1.0);
		glPopMatrix();
		//panuduh
		glPushMatrix();
			glTranslatef(0.5,0.0,0.0);
			glRotatef((GLfloat) panuduh, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			//panuduh2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) panuduh2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		//panunggul
		glPushMatrix();	
			glTranslatef(0.5,0.0,0.0);
			glRotatef((GLfloat) panunggul, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			//panunggul2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) panunggul2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		//manis
		glPushMatrix();
			glTranslatef(0.5,0.0,-0.2);
			glRotatef((GLfloat) manis, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			//manis2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) manis2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		//jentik
		glPushMatrix();
			glTranslatef(0.5,0.0,-0.4);
			glRotatef((GLfloat) jentik, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
			//jentik2
			glTranslatef(0.25,0.0,0.0);
			glRotatef((GLfloat) jentik2, 0.0,0.0,1.0);
			glTranslatef(0.25,0.0,0.0);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.5,0.2 ,0.20);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
		//jempol
		glPushMatrix();
			glTranslatef(0.2,0.0,0.4);
			glRotatef((GLfloat) jempol, -1.0,0.0,0.0);
			glTranslatef(0.0,0.0,0.25);
			glColor3f(0.0, 0.0, 0.0);
			glPushMatrix();
				glScalef(0.2,0.2 ,0.50);
				glutWireCube(1.0);
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
	
	glutSwapBuffers();
}

void reshape(int i, int j) {
    glViewport(0, 0, (GLsizei)i, (GLsizei)j);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)i / (GLfloat)j, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);

}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    // Menggerakkan sendi bahu
    case 'a':
        pundhak = (pundhak + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan sendi siku
    case 's':
        sikut = (sikut + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan sendi pergelangan tangan
    case 'd':
        ugelugeltangan = (ugelugeltangan + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan ibu jari
    case 't':
        jempol = (jempol + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan jari telunjuk
    case 'f':
        panuduh = (panuduh + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan jari tengah
    case 'g':
        panunggul = (panunggul + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan jari manis
    case 'h':
        manis = (manis + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan jari kelingking
    case 'j':
        jentik = (jentik + 5) % 360;
        glutPostRedisplay();
        break;
    // Menggerakkan jari telunjuk atas
    case 'v':
    	panuduh2 = (panuduh2 + 5) % 360;
		glutPostRedisplay();
		break;
	// Menggerakkan jari tengah atas
	case 'b':
		panunggul2 = (panunggul2 + 5) % 360;
		glutPostRedisplay();
		break;
	// Menggerakkan jari manis atas
	case 'n':
		manis2 = (manis2 + 5) % 360;
		glutPostRedisplay();
		break;
	// Menggerakkan jari kelingking atas
	case 'm':
		jentik2 = (jentik2 + 5) % 360;
		glutPostRedisplay();
		break;
    // Menghentikan program
    case 27:
        exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}

