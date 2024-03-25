/*
Nama   = Rosidah Rahmati
NIM    = 24060122140121
Lab    = B2
Projek = Tangan Bergerak
*/

#include <GL/glut.h>

static int 
shoulder1 = 0, shoulder2 = 0, 
elbow = 0, forearm = 0, palm = 0, 
thumb1 = 0, thumb2 = 0, 
index1 = 0, index2 = 0, 
middle1 = 0, middle2 = 0, 
ring1 = 0, ring2 = 0, 
pinkie1 = 0, pinkie2 = 0;

void init(void) 
{
    glClearColor(1.0f, 0.713f, 0.756f, 0.0f); //Light Pink
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    
    //Shoulder
    glTranslatef(-2.0, 0.0, 0.0);
    glRotatef ((GLfloat) shoulder1, 10.0, 5.0, 0.0);
    glRotatef ((GLfloat) shoulder2, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.5, 0.5, 1.0);
    glutWireCube(0.8);
    glPopMatrix();
    
    //Elbow
    glTranslatef(0.2, 0.0, 0.0); 
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef ((GLfloat)forearm, 1.0, 0.0, 0.0); //Forearm
    glPushMatrix();
    glScalef(1.5, 0.5, 1.0);
    glutWireCube(0.8);
    glPopMatrix();
    
    //Palm
    glTranslatef(0.58, 0.0, 0.0); 
    glRotatef((GLfloat)palm, 0.0, 0.0, 1.0); 
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.2, 0.5, 1.5);
    glutWireCube(0.8);
    glPopMatrix();
    
    //Thumb
    	glPushMatrix();
	    	//Ruas pertama
			glTranslatef (0.1, 0.0, -0.71); 
			glRotatef ((GLfloat) thumb1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.03, 0.0, 0.0); 
			glRotatef ((GLfloat) thumb2, 0.0, 0.0, 1.0);  
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
    	glPopMatrix();

    //Index
    	glPushMatrix();
			//Ruas pertama
			glTranslatef (0.36, 0.0, -0.43); 
			glRotatef ((GLfloat) index1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.33, 0.5, 0.23); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.015, 0.0, 0.0); 
			glRotatef ((GLfloat) index2, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0);
			glPushMatrix(); 
			glScalef (0.33, 0.5, 0.23); 
			glutWireCube (0.8);  
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.015, 0.0, 0.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix();
			glScalef (0.33, 0.5, 0.23); 
			glutWireCube (0.8); 
			glPopMatrix();
		glPopMatrix();
	
	//Middle
		glPushMatrix();
			//Ruas pertama
			glTranslatef (0.39, 0.0, -0.1); 
			glRotatef ((GLfloat) middle1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.4, 0.5, 0.3); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.07, 0.0, 0.0); 
			glRotatef ((GLfloat) middle2, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.4, 0.5, 0.3); 
			glutWireCube (0.8);  
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.07, 0.0, 0.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix();
			glScalef (0.4, 0.5, 0.3); 
			glutWireCube (0.8); 
			glPopMatrix(); 
		glPopMatrix();
	
	//Ring
		glPushMatrix();
			//Ruas pertama
			glTranslatef (0.37, 0.0, 0.23); 
			glRotatef ((GLfloat) ring1, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.03, 0.0, 0.0);
			glRotatef ((GLfloat) ring2, 0.0, 0.0, 1.0); 
			glTranslatef (0.25, 0.0, 0.0);
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.03, 0.0, 0.0); 
			glTranslatef (0.25, 0.0, 0.0); 
			glPushMatrix(); 
			glScalef (0.35, 0.5, 0.25); 
			glutWireCube (0.8); 
			glPopMatrix(); 
		glPopMatrix();
	
	//Pinkie
		glPushMatrix();
		
			//Ruas pertama
			glTranslatef (0.38, 0.0, 0.52);
			glRotatef ((GLfloat) pinkie1, 0.0, 0.0, 1.0); 
			glTranslatef (0.2, 0.0, 0.0); 
			glPushMatrix();
			glScalef (0.25, 0.5, 0.2); 
			glutWireCube (0.8);  
			glPopMatrix(); 
			//Ruas kedua
			glTranslatef (0.0, 0.0, 0.0); 
			glRotatef ((GLfloat) pinkie2, 0.0, 0.0, 1.0); 
			glTranslatef (0.2, 0.0, 0.0);
			glPushMatrix(); 
			glScalef (0.25, 0.5, 0.2); 
			glutWireCube (0.8); 
			glPopMatrix(); 
			//Ruas ketiga
			glTranslatef (0.0, 0.0, 0.0); 
			glTranslatef (0.2, 0.0, 0.0);
			glPushMatrix();
			glScalef (0.25, 0.5, 0.2); 
			glutWireCube (0.8);
			glPopMatrix();
		glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(75.0, (GLfloat)w / (GLfloat)h, 1.0, 35.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    	case 's':
            shoulder1 = (shoulder1 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            shoulder1 = (shoulder1 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'a':
            shoulder2 = (shoulder2 + 5) % 360;
            glutPostRedisplay();
            break;
        case 'A':
            shoulder2 = (shoulder2 - 5) % 360;
            glutPostRedisplay();
            break;
        case 'e': //tangan kiri
            elbow = (elbow + 5) % 130;
            glutPostRedisplay();
            break;
        case 'E': //tangan kanan
            elbow = (elbow - 5) % 130;
            glutPostRedisplay();
            break;
        case 'z':
            forearm = (forearm + 5) % 100;
            glutPostRedisplay();
            break;
        case 'Z':
            forearm = (forearm - 5) % 100;
            glutPostRedisplay();
            break;
        case 'p':
            palm = (palm + 5) % 90;
            glutPostRedisplay();
            break;
        case 'P':
            palm = (palm - 5) % 90;
            glutPostRedisplay();
            break;
        case 'd':
            thumb1 = (thumb1 + 5) % 90;
            glutPostRedisplay();
            break;
        case 'D':
            thumb1 = (thumb1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'f':
            thumb2 = (thumb2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'g':
            index1 = (index1 + 5) % 90;
            glutPostRedisplay();
            break;
        case 'G':
            index1 = (index1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'h':
            index2 = (index2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'j':
            middle1 = (middle1 + 5) % 90;
            glutPostRedisplay();
            break;
         case 'J':
            middle1 = (middle1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'k':
            middle2 = (middle2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'l':
            ring1 = (ring1 + 5) % 90;
            glutPostRedisplay();
            break;
         case 'L':
            ring1 = (ring1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'm':
            ring2 = (ring2 + 5) % 130;
            glutPostRedisplay();
            break;
        case 'n':
            pinkie1 = (pinkie1 + 5) % 90;
            glutPostRedisplay();
            break;
        case 'N':
            pinkie1 = (pinkie1 - 5) % 20;
            glutPostRedisplay();
            break;
        case 'b':
            pinkie2 = (pinkie2 + 5) % 130;
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
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(200, 0);
    glutCreateWindow ("Tangan Bergerak");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
