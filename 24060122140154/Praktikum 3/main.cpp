#include <GL/glut.h>

static int ruasIbuJari1 = 0, ruasIbuJari2 = 0, ruasIbuJari3 = 0;
static int ruasJariTelunjuk1 = 0, ruasJariTelunjuk2 = 0, ruasJariTelunjuk3 = 0;
static int ruasJariTengah1 = 0, ruasJariTengah2 = 0, ruasJariTengah3 = 0;
static int ruasJariManis1 = 0, ruasJariManis2 = 0, ruasJariManis3 = 0;
static int ruasJariKelingking1 = 0, ruasJariKelingking2 = 0, ruasJariKelingking3 = 0;
static int telapak1 = 0, telapak2 = 0;
static int lenganX1 = 0, lenganX2 = 0, lenganY = 0;

void init(void) {

    glClearColor(0, 0, 0, 0);
    glShadeModel(GL_FLAT);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    
    //lengan Bagian Atas
    glTranslatef(-1.8, 0, 0);
    glRotatef((GLfloat)lenganX1, 0, 0, 1);
    glRotatef((GLfloat)lenganX2, 0, 1, 0);
    glTranslatef(1.8, 0, 0);
    glPushMatrix();
    glTranslatef(-1.4, 0, 0);
    glScalef(0.8, 0.2, 0.56);
    glutWireCube(1);
    glPopMatrix();

    //lengan Bagian Bawah
    glTranslatef(-1, 0, 0);
    glRotatef((GLfloat)lenganY, 0, 0, 1);
    glTranslatef(1, 0, 0);
    glPushMatrix();
    glTranslatef(-0.6, 0, 0);
    glScalef(0.8, 0.2, 0.56);
    glutWireCube(1);
    glPopMatrix();

    //Telapak Tangan
    glRotatef((GLfloat)telapak1, 1, 0, 0);
    glRotatef((GLfloat)telapak2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.4, 0.2, 0.56);
    glutWireCube(1.0);
    glPopMatrix();

    //Ibu Jari
    glPushMatrix();
    glTranslatef(0, 0, 0.38);
    glRotatef((GLfloat)-ruasIbuJari3, 1, 0, 0);
    glRotatef((GLfloat)ruasIbuJari1, 0, 1, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0, 0, 0.2);
    glRotatef((GLfloat)-ruasIbuJari2, 1, 0, 0);
    glPushMatrix();
    glScalef(0.1, 0.1, 0.25);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Telunjuk
    glPushMatrix();
    glTranslatef(0.3, 0, 0.22);
    glRotatef((GLfloat)ruasJariTelunjuk1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)ruasJariTelunjuk2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.22, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.22, 0, 0);
    glRotatef((GLfloat)ruasJariTelunjuk3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.21, 0.1, 0.13);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Tengah
    glPushMatrix();
    glTranslatef(0.3, 0, 0.05);
    glRotatef((GLfloat)ruasJariTengah1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.25, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.25, 0, 0);
    glRotatef((GLfloat)ruasJariTengah2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.27, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.27, 0, 0);
    glRotatef((GLfloat)ruasJariTengah3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.21, 0.1, 0.14);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Manis
    glPushMatrix();
    glTranslatef(0.3, 0, -0.1);
    glRotatef((GLfloat)ruasJariManis1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.2, 0, 0);
    glRotatef((GLfloat)ruasJariManis2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.21, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.21, 0, 0);
    glRotatef((GLfloat)ruasJariManis3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.2, 0.1, 0.11);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Jari Kelingking
    glPushMatrix();
    glTranslatef(0.3, 0, -0.21);
    glRotatef((GLfloat)ruasJariKelingking1, 0, 0, 1);
    glPushMatrix();
    glScalef(0.18, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.18, 0, 0);
    glRotatef((GLfloat)ruasJariKelingking2, 0, 0, 1);
    glPushMatrix();
    glScalef(0.17, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(0.17, 0, 0);
    glRotatef((GLfloat)ruasJariKelingking3, 0, 0, 1);
    glPushMatrix();
    glScalef(0.19, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
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

        //lengan bagian Atas
    case '1': lenganX1 = (lenganX1 + 3) % 360;
        if (lenganX1 > 110) lenganX1 = 110;
        glutPostRedisplay();
        break;
    case '2': lenganX1 = (lenganX1 - 3) % 360;
        if (lenganX1 < -110) lenganX1 = -110;
        glutPostRedisplay();
        break;
    case '3': lenganX2 = (lenganX2 + 3) % 360;
        if (lenganX2 > 90) lenganX2 = 90;
        glutPostRedisplay();
        break;
    case '4': lenganX2 = (lenganX2 - 3) % 360;
        if (lenganX2 < -90) lenganX2 = -90;
        glutPostRedisplay();
        break;

        //lengan Bagaian bawah
    case 'q': lenganY = (lenganY + 3) % 360;
        if (lenganY > 120) lenganY = 120;
        glutPostRedisplay();
        break;
    case 'Q': lenganY = (lenganY - 3) % 360;
        if (lenganY < 0) lenganY = 0;
        glutPostRedisplay();
        break;

        //Telapak Tangan
    case 's': telapak1 = (telapak1 + 3) % 360;
        if (telapak1 > 90) telapak1 = 90;
        glutPostRedisplay();
        break;
    case 'S': telapak1 = (telapak1 - 3) % 360;
        if (telapak1 < -90) telapak1 = -90;
        glutPostRedisplay();
        break;
    case 'z': telapak2 = (telapak2 + 3) % 360;
        if (telapak2 > 90) telapak2 = 90;
        glutPostRedisplay();
        break;
    case 'Z': telapak2 = (telapak2 - 3) % 360;
        if (telapak2 < 0) telapak2 = 0;
        glutPostRedisplay();
        break;

        //Ruas Ibu Jari
    case 'e': ruasIbuJari3 = (ruasIbuJari3 - 3) % 360;
        if (ruasIbuJari3 < 0) ruasIbuJari3 = 0;
        glutPostRedisplay();
        break;
    case 'E': ruasIbuJari3 = (ruasIbuJari3 + 3) % 360;
        if (ruasIbuJari3 > 90) ruasIbuJari3 = 90;
        glutPostRedisplay();
        break;
    case 'd': ruasIbuJari1 = (ruasIbuJari1 - 3) % 360;
        if (ruasIbuJari1 < 0) ruasIbuJari1 = 0;
        glutPostRedisplay();
        break;
    case 'D': ruasIbuJari1 = (ruasIbuJari1 + 3) % 360;
        if (ruasIbuJari1 > 90) ruasIbuJari1 = 90;
        glutPostRedisplay();
        break;
    case 'x': ruasIbuJari2 = (ruasIbuJari2 - 3) % 360;
        if (ruasIbuJari2 < 0) ruasIbuJari2 = 0;
        glutPostRedisplay();
        break;
    case 'X': ruasIbuJari2 = (ruasIbuJari2 + 3) % 360;
        if (ruasIbuJari2 > 90) ruasIbuJari2 = 90;
        glutPostRedisplay();
        break;

        //Ruas Jari Telunjuk
    case 'r': ruasJariTelunjuk1 = (ruasJariTelunjuk1 - 3) % 360;
        if (ruasJariTelunjuk1 < 0) ruasJariTelunjuk1 = 0;
        glutPostRedisplay();
        break;
    case 'R': ruasJariTelunjuk1 = (ruasJariTelunjuk1 + 3) % 360;
        if (ruasJariTelunjuk1 > 90) ruasJariTelunjuk1 = 90;
        glutPostRedisplay();
        break;
    case 'f': ruasJariTelunjuk2 = (ruasJariTelunjuk2 - 3) % 360;
        if (ruasJariTelunjuk2 < 0) ruasJariTelunjuk2 = 0;
        glutPostRedisplay();
        break;
    case 'F': ruasJariTelunjuk2 = (ruasJariTelunjuk2 + 3) % 360;
        if (ruasJariTelunjuk2 > 90) ruasJariTelunjuk2 = 90;
        glutPostRedisplay();
        break;
    case 'c': ruasJariTelunjuk3 = (ruasJariTelunjuk3 - 3) % 360;
        if (ruasJariTelunjuk3 < 0) ruasJariTelunjuk3 = 0;
        glutPostRedisplay();
        break;
    case 'C': ruasJariTelunjuk3 = (ruasJariTelunjuk3 + 3) % 360;
        if (ruasJariTelunjuk3 > 90) ruasJariTelunjuk3 = 90;
        glutPostRedisplay();
        break;

        //Ruas Jari Tengah
    case 't': ruasJariTengah1 = (ruasJariTengah1 - 3) % 360;
        if (ruasJariTengah1 < 0) ruasJariTengah1 = 0;
        glutPostRedisplay();
        break;
    case 'T': ruasJariTengah1 = (ruasJariTengah1 + 3) % 360;
        if (ruasJariTengah1 > 90) ruasJariTengah1 = 90;
        glutPostRedisplay();
        break;
    case 'g': ruasJariTengah2 = (ruasJariTengah2 - 3) % 360;
        if (ruasJariTengah2 < 0) ruasJariTengah2 = 0;
        glutPostRedisplay();
        break;
    case 'G': ruasJariTengah2 = (ruasJariTengah2 + 3) % 360;
        if (ruasJariTengah2 > 90) ruasJariTengah2 = 90;
        glutPostRedisplay();
        break;
    case 'v': ruasJariTengah3 = (ruasJariTengah3 - 3) % 360;
        if (ruasJariTengah3 < 0) ruasJariTengah3 = 0;
        glutPostRedisplay();
        break;
    case 'V': ruasJariTengah3 = (ruasJariTengah3 + 3) % 360;
        if (ruasJariTengah3 > 90) ruasJariTengah3 = 90;
        glutPostRedisplay();
        break;

        //Ruas Jari Manis
    case 'y': ruasJariManis1 = (ruasJariManis1 - 3) % 360;
        if (ruasJariManis1 < 0) ruasJariManis1 = 0;
        glutPostRedisplay();
        break;
    case 'Y': ruasJariManis1 = (ruasJariManis1 + 3) % 360;
        if (ruasJariManis1 > 90) ruasJariManis1 = 90;
        glutPostRedisplay();
        break;
    case 'h': ruasJariManis2 = (ruasJariManis2 - 3) % 360;
        if (ruasJariManis2 < 0) ruasJariManis2 = 0;
        glutPostRedisplay();
        break;
    case 'H': ruasJariManis2 = (ruasJariManis2 + 3) % 360;
        if (ruasJariManis2 > 90) ruasJariManis2 = 90;
        glutPostRedisplay();
        break;
    case 'b': ruasJariManis3 = (ruasJariManis3 - 3) % 360;
        if (ruasJariManis3 < 0) ruasJariManis3 = 0;
        glutPostRedisplay();
        break;
    case 'B': ruasJariManis3 = (ruasJariManis3 + 3) % 360;
        if (ruasJariManis3 > 90) ruasJariManis3 = 90;
        glutPostRedisplay();
        break;

        //Ruas Jari Kelingking
    case 'u': ruasJariKelingking1 = (ruasJariKelingking1 - 3) % 360;
        if (ruasJariKelingking1 < 0) ruasJariKelingking1 = 0;
        glutPostRedisplay();
        break;
    case 'U': ruasJariKelingking1 = (ruasJariKelingking1 + 3) % 360;
        if (ruasJariKelingking1 > 90) ruasJariKelingking1 = 90;
        glutPostRedisplay();
        break;
    case 'j': ruasJariKelingking2 = (ruasJariKelingking2 - 3) % 360;
        if (ruasJariKelingking2 < 0) ruasJariKelingking2 = 0;
        glutPostRedisplay();
        break;
    case 'J': ruasJariKelingking2 = (ruasJariKelingking2 + 3) % 360;
        if (ruasJariKelingking2 > 90) ruasJariKelingking2 = 90;
        glutPostRedisplay();
        break;
    case 'n': ruasJariKelingking3 = (ruasJariKelingking3 - 3) % 360;
        if (ruasJariKelingking3 < 0) ruasJariKelingking3 = 0;
        glutPostRedisplay();
        break;
    case 'N': ruasJariKelingking3 = (ruasJariKelingking3 + 3) % 360;
        if (ruasJariKelingking3 > 90) ruasJariKelingking3 = 90;
        glutPostRedisplay();
        break;

    case 27: /*exit(10);*/

        //Gunakan Tombol Tab Untuk  Melakukan Reset
    case 9: ruasJariKelingking1 = ruasJariKelingking2 = ruasJariKelingking3 =
        lenganX1 = lenganX2 = lenganY = ruasJariManis1 = ruasJariManis2 = ruasJariManis3 = ruasJariTengah1
        = ruasJariTengah2 = ruasJariTengah3 = ruasJariTelunjuk1 = ruasJariTelunjuk2 = ruasJariTelunjuk3 = ruasIbuJari1 =
        ruasIbuJari3 = ruasIbuJari2 = telapak1 = telapak2 = 0;
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
    glutCreateWindow("lengan");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
