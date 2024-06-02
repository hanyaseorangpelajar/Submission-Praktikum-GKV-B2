#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 0, 
elbow = 0, 
telapak = 0, 
telunjuk = 0, 
tengah = 0, 
manis = 0, 
kelingking = 0, 
jempol = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void jari() {
    glPushMatrix();
    glTranslatef(0.7,0.0, 0.0);
    glScalef(0.8,0.1, 0.15);
    glutWireCube(1.0);
    glPopMatrix();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0); 
    glPopMatrix();
    
    //lengan
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0); 
    glPopMatrix();
    
    //Telapak
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)telapak, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.5, 0.4, 1.0);
    glutWireCube(1.0); 
    glPopMatrix();

    //Telunjuk
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.3); 
    glRotatef((GLfloat)telunjuk, 0.0, 0.0, 0.1);
    jari();
    glPopMatrix();
    
    //Tengah
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.1);
    glRotatef((GLfloat)tengah, 0.0,0.0, 0.1);
    jari();
    glPopMatrix();
    
    //Manis
    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.1);
    glRotatef((GLfloat)manis, 0.0, 0.0, 0.1);
    jari();
    glPopMatrix();
    
    //Kelingking
    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.3);
    glRotatef((GLfloat)kelingking, 0.0, 0.0, 0.1);
    jari();
    glPopMatrix();
    glPopMatrix();
    
    //Jempol
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.5);
    glRotatef((GLfloat)jempol, 0.0, 0.0, 1.0);
    jari();
    glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
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
        elbow = (elbow + 5) % 90;
        glutPostRedisplay();
        break;
    case 'E':
        elbow = (elbow - 5) % 90;
        glutPostRedisplay();
        break;
    case 'w':
        telapak = (telapak + 5) % 90;
        glutPostRedisplay();
        break;
    case 'W':
        telapak = (telapak - 5) % 90;
        glutPostRedisplay();
        break;
    case '1':
        telunjuk = (telunjuk + 5) % 90;
        glutPostRedisplay();
        break;
    case '!':
        telunjuk = (telunjuk - 5) % 90;
        glutPostRedisplay();
        break;
    case '2':
        tengah = (tengah + 5) % 90;
        glutPostRedisplay();
        break;
    case '@':
        tengah = (tengah - 5) % 90;
        glutPostRedisplay();
        break;
    case '3':
        manis = (manis + 5) % 90;
        glutPostRedisplay();
        break;
    case '#':
        manis = (manis - 5) % 90;
        glutPostRedisplay();
        break;
    case '4':
        kelingking = (kelingking + 5) % 90;
        glutPostRedisplay();
        break;
    case '$':
        kelingking = (kelingking - 5) % 90;
        glutPostRedisplay();
        break;
    case '5':
        jempol = (jempol + 5) % 90;
        glutPostRedisplay();
        break;
    case '%':
        jempol = (jempol - 5) % 90;
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
    glutInitWindowSize(700, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}

