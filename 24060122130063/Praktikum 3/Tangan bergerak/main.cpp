/*Nama: Keisya Intan Nabila
NIM: 24060122130063
Program: membuat lengan bergerak*/

#include <GL/glut.h> 

static int shoulder = 0, elbow = 0, finger1 = 0, finger2 = 0, finger3 = 0, finger4 = 0, finger5 = 0, finger6 = 0, finger7 = 0, finger8 = 0, finger9 = 0, palm = 0,
finger10 = 10, finger11 = 0, finger12 = 0, finger13 = 0, finger14 = 0, finger15 = 0;
void init(void) {
    glClearColor (0.100f, 0.50f, 0.81f, 0.0);
    glShadeModel (GL_FLAT);
}

void display(void) {
    glClear (GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    
    // Lengan atas
    glTranslatef (-2.0, -1.0, 0.0);
    glRotatef ((GLfloat) shoulder, 8.0, 3.0, 0.0);
    glTranslatef (-1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef (2.0, 0.4, 1.0); //panjang, lebar, dalam
    glutWireCube (1.0);
    glPopMatrix();

	// Lengan Elbow
    glTranslatef(1.0, 0.0, 0.0); //jarak panjang lengan atas dan bawah, tinggi jarak tangan, jarak sisi tangan atas dan bawah
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

	//Telapak Tangan
    glTranslatef(1.0, 0.0, 0.0); //jarak panjang lengan atas dan bawah, tinggi jarak tangan, jarak sisi tangan atas dan bawah
    glRotatef((GLfloat)palm, 0.0, 0.0, 1.0); //rotasi
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.5, 1.5);
    glutWireCube(1.0);
    glPopMatrix();
    
	//jari jari kelingking 
	glPushMatrix();
	glTranslatef (0.47, 0.0, 0.6); // Posisi jari-jari kelingking dari jari-jari pertama
	glRotatef ((GLfloat) finger1, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.2, 0.0, 0.0); // Posisi jari-jari  dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.37, 0.3, 0.27); // Bentuk jari-jari  (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya

	glTranslatef (0.17, 0.0, 0.0); // Posisi ruas jari-jari kelingking dari jari-jari pertama
	glRotatef ((GLfloat) finger2, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.2, 0.0, 0.0); // Posisi jari-jari  dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.37, 0.3, 0.27); // Bentuk jari-jari  (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	
	glTranslatef (0.17, 0.0, 0.0); // Posisi ruas jari-jari kelingking 
	glRotatef ((GLfloat) finger3, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.2, 0.0, 0.0); // Posisi jari-jaridari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.37, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	glPopMatrix();

	//jari manis 
	glPushMatrix();
	glTranslatef (0.56, 0.0, 0.25); // Posisi jari-jari manis dari jari-jari pertama
	glRotatef ((GLfloat) finger4, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.2, 0.0, 0.0); // Posisi jari-jari  dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.5, 0.3, 0.27); // Bentuk jari-jari  (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya

	glTranslatef (0.3, 0.0, 0.0); // Posisi ruas jari manis dari jari-jari pertama
	glRotatef ((GLfloat) finger5, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.2, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.5, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	
	glTranslatef (0.3, 0.0, 0.0); // Posisi ruas jari  dari jari-jari pertama
	glRotatef ((GLfloat) finger6, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.2, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.5, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	glPopMatrix();
	
	//jari tengah 
	glPushMatrix();
	glTranslatef (0.56, 0.0, -0.1); // Posisi jari tengah dari jari-jari pertama
	glRotatef ((GLfloat) finger7, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.58, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya

	glTranslatef (0.34, 0.0, 0.0); // Posisi ruas jari tengah dari jari-jari pertama
	glRotatef ((GLfloat) finger8, 0.0, 0.0, 1.0); // Rotasi jari-jari kedua
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.58, 0.3, 0.27); // Bentuk jari-jari  (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	
	glTranslatef (0.34, 0.0, 0.0); // Posisi  ruas jari dari jari-jari pertama
	glRotatef ((GLfloat) finger9, 0.0, 0.0, 1.0); // Rotasi jari-jari
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.58, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	glPopMatrix();
	
	//Jari telunjuk
	glPushMatrix();
	glTranslatef (0.5, 0.0, -0.45); // Posisi jari telunjuk dari jari-jari pertama
	glRotatef ((GLfloat) finger10, 0.0, 0.0, 1.0); // Rotasi jari-jari
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.5, 0.3, 0.27); // Bentuk jari-jari  (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya

	glTranslatef (0.25, 0.0, 0.0); // Posisi ruas jari telunjuk dari jari-jari pertama
	glRotatef ((GLfloat) finger11, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.5, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	
	glTranslatef (0.25, 0.0, 0.0); // Posisi ruas jari dari jari-jari pertama
	glRotatef ((GLfloat) finger12, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.5, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	glPopMatrix();
	
	//Jari jempol
	glPushMatrix();
	glTranslatef (-0.1, 0.0, -0.88); // Posisi jari jempol dari jari-jari pertama
	glRotatef ((GLfloat) finger13, 0.0, 0.0, 1.0); // Rotasi jari-jari
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.37, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari
	glPopMatrix(); // Pulihkan transformasi sebelumnya

	glTranslatef (0.13, 0.0, 0.0); // Posisi ruas jari dari jari-jari pertama
	glRotatef ((GLfloat) finger14, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.37, 0.3, 0.27); // Bentuk jari-jari (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
	
	glTranslatef (0.13, 0.0, 0.0); // Posisi  ruas jari dari jari-jari pertama
	glRotatef ((GLfloat) finger15, 0.0, 0.0, 1.0); // Rotasi jari-jari 
	glTranslatef (0.25, 0.0, 0.0); // Posisi jari-jari dari pangkal
	glPushMatrix(); // Simpan transformasi sebelumnya
	glScalef (0.37, 0.3, 0.27); // Bentuk jari-jari  (panjang, lebar, dalam)
	glutWireCube (1.0); // Gambar jari-jari 
	glPopMatrix(); // Pulihkan transformasi sebelumnya
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
            elbow = (elbow + 5) % 100;
            glutPostRedisplay();
            break;
        case 'E':
            elbow = (elbow - 5) % 100;
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
            finger1 = (finger1 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'D':
            finger1 = (finger1 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'f':
            finger2 = (finger2 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'F':
            finger2 = (finger2 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'g':
            finger3 = (finger3 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'G':
            finger3 = (finger3 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'h':
            finger4 = (finger4 + 5) % 100;
            glutPostRedisplay();
            break;
         case 'H':
            finger4 = (finger4 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'j':
            finger5 = (finger5 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'J':
            finger5 = (finger5 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'k':
            finger6 = (finger6 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'K':
            finger6 = (finger6 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'r':
            finger7 = (finger7 + 5) % 100;
            glutPostRedisplay();
            break;
         case 'R':
            finger7 = (finger7 - 5) % 30;
            glutPostRedisplay();
            break;
        case 't':
            finger8 = (finger8 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'T':
            finger8 = (finger8 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'y':
            finger9 = (finger9 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'Y':
            finger9 = (finger9 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'u':
            finger10 = (finger10 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'U':
            finger10 = (finger10 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'i':
            finger11 = (finger11 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'I':
            finger11 = (finger11 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'o':
            finger12 = (finger12 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'O':
            finger12 = (finger12 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'z':
            finger13 = (finger13 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'Z':
            finger13 = (finger13 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'x':
            finger14 = (finger14 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'X':
            finger14 = (finger14 - 5) % 30;
            glutPostRedisplay();
            break;
        case 'c':
            finger15 = (finger15 + 5) % 100;
            glutPostRedisplay();
            break;
        case 'C':
            finger15 = (finger15 - 5) % 30;
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
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (argv[0]);
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
