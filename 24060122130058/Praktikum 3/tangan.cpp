#include <GL/glut.h>
#include <stdlib.h>

static int shoulder = 45, elbow = 45, telapak = 0, telunjuk = 0, tengah = 0, manis = 0, kelingking = 0, jempol = 0;

void init(void) {
    glClearColor(0.2, 0.2, 0.2, 0.0);
    glShadeModel(GL_FLAT);
}

void jari() {
    glColor3f(0.8, 0.6, 0.2);
    glPushMatrix();
    glTranslatef(0.7, 0.0, 0.0);
    glScalef(0.5, 0.1, 0.15);
    glutSolidCube(1.0);
    glPopMatrix();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glColor3f(0.6, 0.6, 0.6);
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)telapak, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.5, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.3);
    glRotatef((GLfloat)telunjuk, 0.0, 0.0, 0.1);
    jari();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.1);
    glRotatef((GLfloat)tengah, 0.0, 0.0, 0.1);
    jari();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.1);
    glRotatef((GLfloat)manis, 0.0, 0.0, 0.1);
    jari();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.0, -0.3);
    glRotatef((GLfloat)kelingking, 0.0, 0.0, 0.1);
    jari();
    glPopMatrix();
    glPopMatrix();

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
    case 'w':
        shoulder = (shoulder + 5) % 360;
        glutPostRedisplay();
        break;
    case 's':
        shoulder = (shoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case 'a':
        elbow = (elbow + 5) % 90;
        glutPostRedisplay();
        break;
    case 'd':
        elbow = (elbow - 5) % 90;
        glutPostRedisplay();
        break;
    case 'i':
        telapak = (telapak + 5) % 90;
        glutPostRedisplay();
        break;
    case 'k':
        telapak = (telapak - 5) % 90;
        glutPostRedisplay();
        break;
    case 'j':
        telunjuk = (telunjuk + 5) % 90;
        glutPostRedisplay();
        break;
    case 'l':
        telunjuk = (telunjuk - 5) % 90;
        glutPostRedisplay();
        break;
    case 'u':
        tengah = (tengah + 5) % 90;
        glutPostRedisplay();
        break;
    case 'o':
        tengah = (tengah - 5) % 90;
        glutPostRedisplay();
        break;
    case 'm':
        manis = (manis + 5) % 90;
        glutPostRedisplay();
        break;
    case ',':
        manis = (manis - 5) % 90;
        glutPostRedisplay();
        break;
    case 'n':
        kelingking = (kelingking + 5) % 90;
        glutPostRedisplay();
        break;
    case '.':
        kelingking = (kelingking - 5) % 90;
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
    glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH), glutGet(GLUT_SCREEN_HEIGHT));
    glutCreateWindow(argv[0]);
    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
