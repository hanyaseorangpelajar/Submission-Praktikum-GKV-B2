#include <GL/glut.h> 

static int shoulder = 270, elbow = 90, palm = 0, thumb1=0, thumb2=0, thumb3=0, finger1 = 0, finger2 = 0, finger3 = 0, finger4 = 0, finger5 = 0;

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
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.1, 0.5, 1.1);
    glutWireCube(1.0);
    glPopMatrix();
    
     // Jari-jari
    glPushMatrix();
    glTranslatef(0.28, 0.0, 0.0); 
    // Jari klinking
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)finger1, 0.0, 0.0, 1.0);
    glTranslatef(0.3, 0.0, 0.4);
    glPushMatrix();
    glScalef(0.8, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
        // Tengah
        glTranslatef(0.4, 0.0, 0.0);
        glRotatef((GLfloat)finger2, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        // Ujung
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)finger3, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix(); // Pop matrix for fingers
    
 
    // Jari-jari
    glPushMatrix();
    glTranslatef(0.28, 0.0, 0.0); 
    // Jari manis
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)finger1, 0.0, 0.0, 1.0);
    glTranslatef(0.3, 0.0, 0.15);
    glPushMatrix();
    glScalef(0.8, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
        // Tengah
        glTranslatef(0.4, 0.0, 0.0);
        glRotatef((GLfloat)finger2, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
        // Ujung
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)finger3, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix(); // Pop matrix for fingers
       
 // Jari-jari
    glPushMatrix();
    glTranslatef(0.28, 0.0, 0.0); // Posisi jari-jari dimulai dari posisi akhir telapak tangan

    // Jari Tengah
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)finger1, 0.0, 0.0, 1.0);
    glTranslatef(0.3, 0.0, -0.1);
    glPushMatrix();
    glScalef(0.8, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

        // Tengah
        glTranslatef(0.4, 0.0, 0.0);
        glRotatef((GLfloat)finger2, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();

        // Ujung
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)finger3, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix(); // Pop matrix for fingers
    
    
    // Jari-jari
    glPushMatrix();
    glTranslatef(0.28, 0.0, 0.0); // Posisi jari-jari dimulai dari posisi akhir telapak tangan

    // Jari tlunjuk
    
    glTranslatef(0.4, 0.0, 0.0);
    glRotatef((GLfloat)finger1, 0.0, 0.0, 1.0);
    glTranslatef(0.3, 0.0, -0.4);
    glPushMatrix();
    glScalef(0.8, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

        // Tengah
        glTranslatef(0.4, 0.0, 0.0);
        glRotatef((GLfloat)finger2, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();

        // Ujung
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)finger3, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix(); // Pop matrix for fingers
    
     // Jari-jari
    glPushMatrix();
    glTranslatef(0.28, 0.0, 0.0); // Posisi jari-jari dimulai dari posisi akhir telapak tangan

    // Jari ibu jari
    glTranslatef(0.2, 0.0, 0.0);
    glRotatef((GLfloat)thumb1, 0.0, 0.5, 0.8);
    glTranslatef(-0.1, 0.0, -0.65);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();

        // Tengah
        glTranslatef(0.4, 0.0, 0.0);
        glRotatef((GLfloat)thumb2, 0.0, 0.0, 1.0);
        glTranslatef(-0.1, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();

        // Ujung
        glTranslatef(0.2, 0.0, 0.0);
        glRotatef((GLfloat)thumb3, 0.0, 0.0, 1.0);
        glTranslatef(0.2, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.4, 0.2, 0.2);
        glutWireCube(1.0);
        glPopMatrix();
    glPopMatrix(); // Pop matrix for fingers
   
    
   
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
        case '1':
            if (finger1 < 90) // Adjust the maximum angle as needed
                finger1 += 5;
            glutPostRedisplay();
            break;
        case '2':
            if (finger2 < 90) // Adjust the maximum angle as needed
                finger2 += 5;
            glutPostRedisplay();
            break;
        case '3':
            if (finger3 < 90) // Adjust the maximum angle as needed
                finger3 += 5;
            glutPostRedisplay();
            break;
        case '4':
            if (finger4 < 90) // Adjust the maximum angle as needed
                finger4 += 5;
            glutPostRedisplay();
            break;
        case '5':
            if (thumb1 < 90) // Adjust the maximum angle as needed
                thumb1 += 5;
            glutPostRedisplay();
            break;
		case '6':
            if (thumb2 < 90) // Adjust the maximum angle as needed
                thumb2 += 5;
            glutPostRedisplay();
            break;  
		case '7':
            if (thumb3 < 90) // Adjust the maximum angle as needed
                thumb3 += 5;
            glutPostRedisplay();
            break;  
			    
        case '8':
            if (thumb1 > 90) // Adjust the maximum angle as needed
                thumb1 -= 5;
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
    glutInitWindowSize (1280, 720);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
