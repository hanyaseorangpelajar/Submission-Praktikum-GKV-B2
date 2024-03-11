#include <GL/glut.h> 

static int shoulder = 270, elbow = 90, palm = 0, mid1 = 0, mid2 = 0, mid3 = 0, thum1 = 0, thum2 = 0, thum3 = 0;

void init(void) {
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Bahu
    glPushMatrix();
    glTranslatef(-3.0, 1.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    
    // Siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    
    // Telapak tangan
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)palm, 1.0, 0.0, 0.0);
    glTranslatef(0.65, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.3, 0.5, 1.1);
    glutWireCube(1.0);
    glPopMatrix();
	
    // Jari Telunjuk
    glPushMatrix();
    glTranslatef(0.3, 0.15, 0.0);
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)mid1, 0.0, 0.0, 1.0);
    glTranslatef(0.23, 0.0, 0.45);
    glPushMatrix();
    glScalef(0.65, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    	// Tengah
    	glTranslatef(0.4, 0.0, 0.0);
    	glRotatef((GLfloat)mid2, 0.0, 0.0, 1.0);
    	glTranslatef(0.08, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
    
    	// Ujung
    	glTranslatef(0.2, 0.0, 0.0);
    	glRotatef((GLfloat)mid3, 0.0, 0.0, 1.0);
    	glTranslatef(0.2, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
	
	glPopMatrix();
	
	// Jari Tengah
	glPushMatrix();
    glTranslatef(0.3, 0.15, 0.0);
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)mid1, 0.0, 0.0, 1.0);
    glTranslatef(0.23, 0.0, 0.15);
    glPushMatrix();
    glScalef(0.65, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    	// Tengah
    	glTranslatef(0.4, 0.0, 0.0);
    	glRotatef((GLfloat)mid2, 0.0, 0.0, 1.0);
    	glTranslatef(0.08, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
    
    	// Ujung
    	glTranslatef(0.2, 0.0, 0.0);
    	glRotatef((GLfloat)mid3, 0.0, 0.0, 1.0);
    	glTranslatef(0.2, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
    	
	glPopMatrix();
	
	// Jari Manis
    glPushMatrix();
    glTranslatef(0.3, 0.15, 0.0);
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)mid1, 0.0, 0.0, 1.0);
    glTranslatef(0.23, 0.0, -0.15);
    glPushMatrix();
    glScalef(0.65, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    	// Tengah
    	glTranslatef(0.4, 0.0, 0.0);
    	glRotatef((GLfloat)mid2, 0.0, 0.0, 1.0);
    	glTranslatef(0.08, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
    
    	// Ujung
    	glTranslatef(0.2, 0.0, 0.0);
    	glRotatef((GLfloat)mid3, 0.0, 0.0, 1.0);
    	glTranslatef(0.2, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
	
	glPopMatrix();
	
	// Jari Kelingking
    glPushMatrix();
    glTranslatef(0.3, 0.15, 0.0);
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)mid1, 0.0, 0.0, 1.0);
    glTranslatef(0.23, 0.0, -0.45);
    glPushMatrix();
    glScalef(0.65, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    	// Tengah
    	glTranslatef(0.4, 0.0, 0.0);
    	glRotatef((GLfloat)mid2, 0.0, 0.0, 1.0);
    	glTranslatef(0.08, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
    
    	// Ujung
    	glTranslatef(0.2, 0.0, 0.0);
    	glRotatef((GLfloat)mid3, 0.0, 0.0, 1.0);
    	glTranslatef(0.2, 0.0, 0.0);
    	glPushMatrix();
    	glScalef(0.4, 0.2, 0.2);
    	glutWireCube(1.0);
    	glPopMatrix();
	
	glPopMatrix();
	
	// Jari Jempol
    glPushMatrix();
    glTranslatef(-0.4, 0.0, 0.55);
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)thum1, 1.0, 0.0, 0.0);
    glTranslatef(0.23, 0.0, 0.3);
    glPushMatrix();
    glScalef(0.25, 0.2, 0.65);
    glutWireCube(1.0);
    glPopMatrix();
    
    	// Tengah
		glTranslatef(-0.4, 0.0, 0.48);
		glRotatef((GLfloat)thum2, 1.0, 0.0, 0.0);
		glTranslatef(0.4, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.25, 0.2, 0.4);
		glutWireCube(1.0);
		glPopMatrix();

		// Ujung
		glTranslatef(-0.4, 0.0, 0.28);
		glRotatef((GLfloat)thum3, 1.0, 0.0, 0.0);
		glTranslatef(0.4, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.25, 0.2, 0.4);
		glutWireCube(1.0);
		glPopMatrix();
	
	glPopMatrix();
    
    glPopMatrix();
    glutSwapBuffers();
}
    



void reshape(int w, int h) {
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
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
            if (elbow < 120)
                elbow += 5;
            glutPostRedisplay();
            break;
        case 'E':
            if (elbow > 0)
                elbow -= 5;
            glutPostRedisplay();
            break;
        case 'p':
            if (palm < 90) // Adjust the maximum angle as needed
                palm += 5;
            glutPostRedisplay();
            break;
        case 'P':
            if (palm > -90) // Adjust the minimum angle as needed
                palm -= 5;
            glutPostRedisplay();
            break;
        case 'z':
            if (mid1 < 90) // Adjust the maximum angle as needed
                mid1 += 5;
            glutPostRedisplay();
            break;
        case 'Z':
            if (mid1 > 0) // Adjust the minimum angle as needed
                mid1 -= 5;
            glutPostRedisplay();
            break;
        case 'x':
            if (mid2 < 90) // Adjust the maximum angle as needed
                mid2 += 5;
            glutPostRedisplay();
            break;
        case 'X':
            if (mid2 > 0) // Adjust the minimum angle as needed
                mid2 -= 5;
            glutPostRedisplay();
            break;
        case 'c':
            if (mid3 < 90) // Adjust the maximum angle as needed
                mid3 += 5;
            glutPostRedisplay();
            break;
        case 'C':
            if (mid3 > 0) // Adjust the minimum angle as needed
                mid3 -= 5;
            glutPostRedisplay();
            break;
        case 'v':
            if (thum1 > -90) // Adjust the maximum angle as needed
                thum1 -= 5;
            glutPostRedisplay();
            break;
        case 'V':
            if (thum1 < 0) // Adjust the minimum angle as needed
                thum1 += 5;
            glutPostRedisplay();
        case 'b':
            if (thum2 > -90) // Adjust the maximum angle as needed
                thum2 -= 5;
            glutPostRedisplay();
            break;
        case 'B':
            if (thum2 < 0) // Adjust the minimum angle as needed
                thum2 += 5;
            glutPostRedisplay();
            break;
        case 'n':
            if (thum3 > -90) // Adjust the maximum angle as needed
                thum3 -= 5;
            glutPostRedisplay();
            break;
        case 'N':
            if (thum3 < 0) // Adjust the minimum angle as needed
                thum3 += 5;
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
    glutInitWindowSize (1680, 900);
    glutInitWindowPosition (100, 100);
    init();
    glutCreateWindow ("Tangan Bergerak");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
