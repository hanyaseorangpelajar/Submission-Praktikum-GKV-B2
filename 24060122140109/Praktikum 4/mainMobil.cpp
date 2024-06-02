#include <GL/glut.h>
#include <cmath>
//Jeremia Joel Richard Ramalael
// 24060122140109

int prevX = 0;
int prevY = 0;
float rotX = 0.0;
float rotY = 0.0;
float distance = 5.0;

void drawCar() {
    // Body
    glColor3f(1.0, 0.0, 0.0); // Red color
    glPushMatrix();
    glScalef(3.0, 0.6, 1.5);
    glutSolidCube(1.0);
    glPopMatrix();

    // Front Hood
    glColor3f(0.6, 0.0, 0.0); // Red color
    glPushMatrix();
    glTranslatef(1.3, 0.0, 0.0);
    glScalef(0.5, 0.3, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

	// Windshield
	glColor3f(0.6, 0.0, 0.0); // Dark red color
	glPushMatrix();
	glTranslatef(-0.1, 0.27, 0.0);
	glScalef(2, 1.13, 1.3);
	glutSolidCube(1.0);
	glPopMatrix();
	
	// Window 1
	glColor3f(0.5, 0.5, 0.5); // Gray color
	glPushMatrix();
	glTranslatef(-0.6, 0.55, 0.66); // Adjust the position to stick on the windshield
	glScalef(2, 1.5, 1.7); // Adjust the size of the window
	glBegin(GL_QUADS);
	    glVertex3f(-0.15, -0.15, 0.0);
	    glVertex3f(0.15, -0.15, 0.0);
	    glVertex3f(0.15, 0.15, 0.0);
	    glVertex3f(-0.15, 0.15, 0.0);
	glEnd();
	glPopMatrix();
	
		// Window 2
	glColor3f(0.5, 0.5, 0.5); // Gray color
	glPushMatrix();
	glTranslatef(0.2, 0.55, 0.66); // Adjust the position to stick on the windshield
	glScalef(2.7, 1.5, 1.7); // Adjust the size of the window
	glBegin(GL_QUADS);
	    glVertex3f(-0.15, -0.15, 0.0);
	    glVertex3f(0.15, -0.15, 0.0);
	    glVertex3f(0.15, 0.15, 0.0);
	    glVertex3f(-0.15, 0.15, 0.0);
	glEnd();
	glPopMatrix();
	
		// Window 3
	glColor3f(0.5, 0.5, 0.5); // Gray color
	glPushMatrix();
	glTranslatef(-0.6, 0.55, -0.66); // Adjust the position to stick on the windshield
	glScalef(2, 1.5, 1.7); // Adjust the size of the window
	glBegin(GL_QUADS);
	    glVertex3f(-0.15, -0.15, 0.0);
	    glVertex3f(0.15, -0.15, 0.0);
	    glVertex3f(0.15, 0.15, 0.0);
	    glVertex3f(-0.15, 0.15, 0.0);
	glEnd();
	glPopMatrix();
	
		// Window 4
	glColor3f(0.5, 0.5, 0.5); // Gray color
	glPushMatrix();
	glTranslatef(0.2, 0.55, -0.66); // Adjust the position to stick on the windshield
	glScalef(2.7, 1.5, 1.7); // Adjust the size of the window
	glBegin(GL_QUADS);
	    glVertex3f(-0.15, -0.15, 0.0);
	    glVertex3f(0.15, -0.15, 0.0);
	    glVertex3f(0.15, 0.15, 0.0);
	    glVertex3f(-0.15, 0.15, 0.0);
	glEnd();
	glPopMatrix();
	// Window front 1
	glColor3f(0.5, 0.5, 0.5); // Gray color
	glPushMatrix();
	glTranslatef(0.91, 0.55, -0.3); // Adjust the position to stick on the windshield
	glRotatef(90.0, 0.0, 1.0, 0.0); // Rotate the window by 90 degrees around the y-axis
	glScalef(1.8, 1.5, 10); // Adjust the size of the window
	glBegin(GL_QUADS);
	    glVertex3f(-0.15, -0.15, 0.0);
	    glVertex3f(0.15, -0.15, 0.0);
	    glVertex3f(0.15, 0.15, 0.0);
	    glVertex3f(-0.15, 0.15, 0.0);
	glEnd();
	glPopMatrix();
	
	// Window front 2
	glColor3f(0.5, 0.5, 0.5); // Gray color
	glPushMatrix();
	glTranslatef(0.91, 0.55, 0.3); // Adjust the position to stick on the windshield
	glRotatef(90.0, 0.0, 1.0, 0.0); // Rotate the window by 90 degrees around the y-axis
	glScalef(1.8, 1.5, 10); // Adjust the size of the window
	glBegin(GL_QUADS);
	    glVertex3f(-0.15, -0.15, 0.0);
	    glVertex3f(0.15, -0.15, 0.0);
	    glVertex3f(0.15, 0.15, 0.0);
	    glVertex3f(-0.15, 0.15, 0.0);
	glEnd();
	glPopMatrix();

		
		
    // Wheels
    glColor3f(0.0, 0.0, 0.0); // Black color
    glPushMatrix();
    glTranslatef(1, -0.6, 0.7);
    glutSolidTorus(0.1, 0.3, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1, -0.6, -0.7);
    glutSolidTorus(0.1, 0.3, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.1, -0.6, 0.7);
    glutSolidTorus(0.1, 0.3, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.1, -0.6, -0.7);
    glutSolidTorus(0.1, 0.3, 10, 10);
    glPopMatrix();
    
        // Front Bumper
    glColor3f(0.2, 0.2, 0.2); // Gray color
    glPushMatrix();
    glTranslatef(1.52, -0.3, 0.0); // Adjust the position of the front bumper
    glScalef(0.2, 0.2, 1.48); // Adjust the size of the front bumper
    glutSolidCube(1.0);
    glPopMatrix();
    
            // Behind Bumper
    glColor3f(0.2, 0.2, 0.2); // Gray color
    glPushMatrix();
    glTranslatef(-1.54, -0.25, 0.0); // Adjust the position of the front bumper
    glScalef(0.2, 0.2, 1.43); // Adjust the size of the front bumper
    glutSolidCube(1.0);
    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(distance * sin(rotY * 0.01) * cos(rotX * 0.01), distance * sin(rotX * 0.01), distance * cos(rotY * 0.01) * cos(rotX * 0.01), 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    drawCar();

    glutSwapBuffers();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)width / (GLfloat)height, 1.0, 100.0);
}

void init() {
    glClearColor(1.0, 0.9, 0.8, 1.0); // Cream background color (RGB: 255, 230, 204)
    glEnable(GL_DEPTH_TEST);
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        prevX = x;
        prevY = y;
    }
}

void motion(int x, int y) {
    int deltaX = x - prevX;
    int deltaY = y - prevY;

    prevX = x;
    prevY = y;

    rotX += deltaX;
    rotY += deltaY;

    glutPostRedisplay();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("3D Car");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();
    return 0;
}

