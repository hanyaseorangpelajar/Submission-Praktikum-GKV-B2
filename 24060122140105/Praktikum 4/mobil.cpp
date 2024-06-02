//Nama	: Krisna Okky Widayat
//NIM	: 24060122140105

#include <GL/glut.h>

int windowWidth = 800;
int windowHeight = 600;
int lastMouseX, lastMouseY;
float rotationX = 0.0;
float rotationY = 0.0;

void drawCar() {
    // Body
    glColor3f(1.0, 0.0, 0.0); // Red color
    glPushMatrix();
    glScalef(2.0, 0.5, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Front Hood
    glPushMatrix();
    glTranslatef(0.8, 0.7, 0.0);
    glScalef(0.6, 0.3, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();
	
	// Hood
    glPushMatrix();
    glTranslatef(0.0, 0.7, 0.0);
    glScalef(1.19, 0.3, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();
    
    // Windshield
    glColor3f(0.3, 0.3, 0.8); // Blue color
    glPushMatrix();
    glTranslatef(0.8, 0.4, 0.0);
    glScalef(0.3, 0.3, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Back
    glPushMatrix();
    glTranslatef(-0.9, 0.5, 0.0);
    glScalef(0.6, 0.5, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    // Windows
    glColor3f(0.75, 0.75, 0.75); // Gray color
    glPushMatrix();
    glTranslatef(0.0, 0.4, 0.3);
    glScalef(1.2, 0.3, 0.4);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0, 0.4, -0.3);
    glScalef(1.2, 0.3, 0.4);
    glutSolidCube(1.0);
    glPopMatrix();

    // Front Lamps
    glColor3f(1.0, 1.0, 0.0); // Yellow color
    glPushMatrix();
    glTranslatef(1.0, -0.15, 0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0, -0.15, -0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();

    // Back Lamps
    glColor3f(0.0, 0.0, 0.0); // Red color
    glPushMatrix();
    glTranslatef(-1.0, -0.15, 0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0, -0.15, -0.3);
    glutSolidSphere(0.1, 20, 20);
    glPopMatrix();

    // Wheels
    glColor3f(0.0, 0.0, 0.0); // Black color
    glPushMatrix();
    glTranslatef(0.6, -0.4, 0.6);
    glutSolidTorus(0.15, 0.3, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6, -0.4, -0.6);
    glutSolidTorus(0.15, 0.3, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6, -0.4, 0.6);
    glutSolidTorus(0.15, 0.3, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6, -0.4, -0.6);
    glutSolidTorus(0.15, 0.3, 20, 20);
    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
    glRotatef(rotationX, 1.0, 0.0, 0.0);
    glRotatef(rotationY, 0.0, 1.0, 0.0);

    drawCar();

    glutSwapBuffers();
}

void reshape(int width, int height) {
    windowWidth = width;
    windowHeight = height;
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)width / (GLfloat)height, 1.0, 100.0);
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glEnable(GL_DEPTH_TEST);
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        lastMouseX = x;
        lastMouseY = y;
    }
}

void motion(int x, int y) {
    rotationX += (y - lastMouseY);
    rotationY += (x - lastMouseX);

    lastMouseX = x;
    lastMouseY = y;

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("3D Car");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
    return 0;
}

