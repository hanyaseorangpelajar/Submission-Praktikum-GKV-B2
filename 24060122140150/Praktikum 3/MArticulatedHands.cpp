//NAMA		: GIGIH HAIDAR FALAH
//NIM		: 24060122140150
//Lab		: B2
//Tanggal	: 13-3-2024

#include <GL/glut.h>

static int Thumbs1 = 0, Thumbs2 = 0 ,Telunjuk1 = 0, Telunjuk2 = 0 ,Middle1 = 0, Middle2 = 0 ,
JariManis1 = 0, JariManis2 = 0 ,Kelingking1 = 0, Kelingking2 = 0 ,Telapak1 = 0, Telapak2 = 0,
Pundak = 0, Lengan1 = 0, Lengan2 = 0;

void init(void) {

    glClearColor(0, 0, 0, 0);
    glShadeModel(GL_FLAT);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    //lengan Bagian Atas
    glTranslatef(-1.0, 0, 0);
    glRotatef((GLfloat)Pundak, 0, 0, 1);
    glRotatef((GLfloat)Lengan1, 0, 1, 0);
    glTranslatef(1.0, 0, 0);
    glPushMatrix();
    glTranslatef(-1.4, 0, 0);
    glScalef(0.8, 0.2, 0.56);
    glutWireCube(1);
    glPopMatrix();

    //lengan Bagian Bawah
    glTranslatef(-1, 0, 0);
    glRotatef((GLfloat)Lengan2, 0, 0, 1);
    glTranslatef(1, 0, 0);
    glPushMatrix();
    glTranslatef(-0.6, 0, 0);
    glScalef(0.8, 0.2, 0.56);
    glutWireCube(1);
    glPopMatrix();

    //Telapak Tangan
    glRotatef((GLfloat)Telapak1, 1, 0, 0);
    glRotatef((GLfloat)Telapak2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.4, 0.2, 0.56);
    glutWireCube(1.0);
    glPopMatrix();

    //Ibu Jari
    glPushMatrix();
    glTranslatef(0, 0, 0.38);
    glRotatef((GLfloat)Thumbs1, 0, 1, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0, 0, 0.2);
    glRotatef((GLfloat)-Thumbs2, 1, 0, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.25);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Telunjuk
    glPushMatrix();
    glTranslatef(0.3, 0, 0.22);
    glRotatef((GLfloat)Telunjuk1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)Telunjuk2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.22, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.22, 0, 0);
    glPopMatrix();

    //Jari Tengah
    glPushMatrix();
    glTranslatef(0.3, 0, 0.05);
    glRotatef((GLfloat)Middle1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.25, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.25, 0, 0);
    glRotatef((GLfloat)Middle2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.27, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.27, 0, 0);
    glPopMatrix();

    //Jari Manis
    glPushMatrix();
    glTranslatef(0.3, 0, -0.1);
    glRotatef((GLfloat)JariManis1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)JariManis2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.21, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.21, 0, 0);
    glPopMatrix();

    //Jari Kelingking
    glPushMatrix();
    glTranslatef(0.3, 0, -0.21);
    glRotatef((GLfloat)Kelingking1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.18, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.18, 0, 0);
    glRotatef((GLfloat)Kelingking2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.17, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.17, 0, 0);
    glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {

        //Pundak
    case '1': Pundak = (Pundak + 3) % 360;
        if (Pundak > 110) Pundak = 110;
        glutPostRedisplay();
        break;
    case '2': Pundak = (Pundak - 3) % 360;
        if (Pundak < -110) Pundak = -110;
        glutPostRedisplay();
        break;
    case '3': Lengan1 = (Lengan1 + 3) % 360;
        if (Lengan1 > 90) Lengan1 = 90;
        glutPostRedisplay();
        break;
    case '4': Lengan1 = (Lengan1 - 3) % 360;
        if (Lengan1 < -90) Lengan1 = -90;
        glutPostRedisplay();
        break;

        //lengan Bagaian bawah
    case 'q': Lengan2 = (Lengan2 + 3) % 360;
        if (Lengan2 > 120) Lengan2 = 120;
        glutPostRedisplay();
        break;
    case 'Q': Lengan2 = (Lengan2 - 3) % 360;
        if (Lengan2 < 0) Lengan2 = 0;
        glutPostRedisplay();
        break;

        //Telapak Tangan
    case 'w': Telapak1 = (Telapak1 + 3) % 360;
        if (Telapak1 > 90) Telapak1 = 90;
        glutPostRedisplay();
        break;
    case 'W': Telapak1 = (Telapak1 - 3) % 360;
        if (Telapak1 < -90) Telapak1 = -90;
        glutPostRedisplay();
        break;
    case 'e': Telapak2 = (Telapak2 + 3) % 360;
        if (Telapak2 > 90) Telapak2 = 90;
        glutPostRedisplay();
        break;
    case 'E': Telapak2 = (Telapak2 - 3) % 360;
        if (Telapak2 < 0) Telapak2 = 0;
        glutPostRedisplay();
        break;

        //Ruas Ibu Jari
    case 't': Thumbs1 = (Thumbs1 - 3) % 360;
        if (Thumbs1 < 0) Thumbs1 = 0;
        glutPostRedisplay();
        break;
    case 'T': Thumbs1 = (Thumbs1 + 3) % 360;
        if (Thumbs1 > 90) Thumbs1 = 90;
        glutPostRedisplay();
        break;
    case 'y': Thumbs2 = (Thumbs2 - 3) % 360;
        if (Thumbs2 < 0) Thumbs2 = 0;
        glutPostRedisplay();
        break;
    case 'Y': Thumbs2 = (Thumbs2 + 3) % 360;
        if (Thumbs2 > 90) Thumbs2 = 90;
        glutPostRedisplay();
        break;

        //Jari Telunjuk
    case 'u': Telunjuk1 = (Telunjuk1 - 3) % 360;
        if (Telunjuk1 < 0) Telunjuk1 = 0;
        glutPostRedisplay();
        break;
    case 'U': Telunjuk1 = (Telunjuk1 + 3) % 360;
        if (Telunjuk1 > 90) Telunjuk1 = 90;
        glutPostRedisplay();
        break;
    case 'i': Telunjuk2 = (Telunjuk2 - 3) % 360;
        if (Telunjuk2 < 0) Telunjuk2 = 0;
        glutPostRedisplay();
        break;
    case 'I': Telunjuk2 = (Telunjuk2 + 3) % 360;
        if (Telunjuk2 > 90) Telunjuk2 = 90;
        glutPostRedisplay();
        break;


        //Jari Tengah
    case 'p': Middle1 = (Middle1 - 3) % 360;
        if (Middle1 < 0) Middle1 = 0;
        glutPostRedisplay();
        break;
    case 'P': Middle1 = (Middle1 + 3) % 360;
        if (Middle1 > 90) Middle1 = 90;
        glutPostRedisplay();
        break;
    case 'a': Middle2 = (Middle2 - 3) % 360;
        if (Middle2 < 0) Middle2 = 0;
        glutPostRedisplay();
        break;
    case 'A': Middle2 = (Middle2 + 3) % 360;
        if (Middle2 > 90) Middle2 = 90;
        glutPostRedisplay();
        break;

        //Jari Manis
    case 'd': JariManis1 = (JariManis1 - 3) % 360;
        if (JariManis1 < 0) JariManis1 = 0;
        glutPostRedisplay();
        break;
    case 'D': JariManis1 = (JariManis1 + 3) % 360;
        if (JariManis1 > 90) JariManis1 = 90;
        glutPostRedisplay();
        break;
    case 'f': JariManis2 = (JariManis2 - 3) % 360;
        if (JariManis2 < 0) JariManis2 = 0;
        glutPostRedisplay();
        break;
    case 'F': JariManis2 = (JariManis2 + 3) % 360;
        if (JariManis2 > 90) JariManis2 = 90;
        glutPostRedisplay();
        break;

        //Kelingking
    case 'h': Kelingking1 = (Kelingking1 - 3) % 360;
        if (Kelingking1 < 0) Kelingking1 = 0;
        glutPostRedisplay();
        break;
    case 'H': Kelingking1 = (Kelingking1 + 3) % 360;
        if (Kelingking1 > 90) Kelingking1 = 90;
        glutPostRedisplay();
        break;
    case 'j': Kelingking2 = (Kelingking2 - 3) % 360;
        if (Kelingking2 < 0) Kelingking2 = 0;
        glutPostRedisplay();
        break;
    case 'J': Kelingking2 = (Kelingking2 + 3) % 360;
        if (Kelingking2 > 90) Kelingking2 = 90;
        glutPostRedisplay();
        break;

    case 27: /*exit(10);*/

        //Tab For Reset Object tangan
    case 9: Kelingking1 = Kelingking2 = 
        Pundak = Lengan1 = Lengan2 = JariManis1 = JariManis2 =  Middle1
        = Middle2 = Telunjuk1 = Telunjuk2 =  Thumbs1 =
        Thumbs2 = Telapak1 = Telapak2 = 0;
        glutPostRedisplay();
        break;
    default:break;
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(650, 650);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("ArticulatedHands/Haidar");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
