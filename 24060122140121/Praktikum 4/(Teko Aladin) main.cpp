/*
Nama   = Rosidah Rahmati
NIM    = 24060122140121
Lab    = B2
Projek = Menggerakkan Kamera
*/

#include <stdlib.h> // standard definitions
#include <stdio.h> // C I/O (for sprintf)
#include <math.h> // standard definitions
#include <GL/glut.h> // GLUT

double rotAngle = 10; // rotation angle (BEWARE: Global)
double rotAngle1 = 10; // rotation angle (BEWARE: Global)
double translateX = 0; // translation along X-axis
double translateY = 0; // translation along Y-axis

//------------------------------------------------------------------
// init
// Sets up some default OpenGL values.
//------------------------------------------------------------------

void init()
{
    glClearColor(0, 0, 0, 0); // background color
    glClearDepth(1.0); // background depth value
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, 1, 1, 1000); // setup a perspective projection
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(
        0.0, 0.0, 5.0, // eye position
        0.0, 0.0, 0.0, // lookat position
        0.0, 1.0, 0.0); // up direction
}

//------------------------------------------------------------------
// display callback function
// This is called each time application needs to redraw itself.
// Most of the opengl work is done through this function.
//------------------------------------------------------------------

void display()
{
    glClear(
        GL_COLOR_BUFFER_BIT | // clear the frame buffer (color)
        GL_DEPTH_BUFFER_BIT); // clear the depth buffer (depths)
    glPushMatrix(); // save the current camera transform
    glTranslatef(translateX, translateY, 0); // apply translation
    glRotated(rotAngle, 0, 1, 0); // rotate by rotAngle about y-axis
    glRotated(rotAngle1, 1, 0, 0); // rotate by rotAngle about y-axis
    glEnable(GL_COLOR_MATERIAL); // specify object color
    glColor3f(1.0, 0.1, 0.1); // redish
    glutSolidTeapot(1); // draw the teapot
    glPopMatrix(); // restore the modelview matrix
    glFlush(); // force OpenGL to render now
    glutSwapBuffers(); // make the image visible
}

//------------------------------------------------------------------
// keyboard callback function
// This is called whenever a keyboard key is hit.
//------------------------------------------------------------------

void keyboard(unsigned char k, int x, int y)
{
    switch (k)
    {
    case 'i':
        rotAngle += 5; // increase rotation by 5 degrees
        break;
    case 'j':
        rotAngle1 += 5; // increase rotation by 5 degrees
        break;
    case 'l':
        rotAngle1 -= 5; // decrease rotation by 5 degrees
        break;
    case 'k':
        rotAngle -= 5; // decrease rotation by 5 degrees
        break;
    case 'w':
        translateY += 0.1; // translate along positive Y-axis
        break;
    case 's':
        translateY -= 0.1; // translate along negative Y-axis
        break;
    case 'd':
        translateX += 0.1; // translate along positive X-axis
        break;
    case 'a':
        translateX -= 0.1; // translate along negative X-axis
        break;
    case 'q':
        exit(0); // exit
    }
    glutPostRedisplay(); // redraw the image now
}

//-----------------------------------------------------------------
// main program
// Where everything begins.
//------------------------------------------------------------------

int main()
{
    glutInitDisplayMode(
        GLUT_DOUBLE | // use double buffering
        GLUT_DEPTH | // request memory for z-buffer
        GLUT_RGB); // set RGB color mode
    glutCreateWindow("Teko Aladin"); // create the window
    glutDisplayFunc(display); // call display() to redraw window
    glutKeyboardFunc(keyboard); // call keyboard() when key is hit
    init(); // our own initializations
    glutMainLoop(); // let GLUT take care of everything
    return 0;
}
