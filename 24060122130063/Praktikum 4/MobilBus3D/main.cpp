

/*Nama: Keisya Intan Nabila
NIM: 24060122130063*/

#include <math.h> 
#include <GL/glut.h> 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

float angle=0.0, deltaAngle = 0.0, ratio; 
float x=0.0f,y=1.75f,z=15.0f; // posisi awal kamera 
float lx=0.0f,ly=0.0f,lz=-1.0f; 
int deltaMove = 0,h,w; 
int bitmapHeight=12; 
float verticalMovement = 0.0f;

void Reshape(int w1, int h1) { 
 	// Fungsi reshape 
 	if(h1 == 0) h1 = 1; 
 	w = w1; 
 	h = h1; 
 	ratio = 1.0f * w / h; 
 	glMatrixMode(GL_PROJECTION); 
 	glLoadIdentity(); 
 	glViewport(0, 0, w, h); 
 	gluPerspective(45,ratio,0.1,1000); 
 	glMatrixMode(GL_MODELVIEW); 
 	glLoadIdentity(); 
 	gluLookAt(x, y, z, x + lx,y + ly,z + lz, 0.0f,1.0f,0.0f); 
} 
void orientMe(float ang) { 
 	// Fungsi ini untuk memutar arah kamera (tengok kiri/kanan) 
 	lx = sin(ang); 
 	lz = -cos(ang); 
 	glLoadIdentity(); 
 	gluLookAt(x, y, z, x + lx,y + ly,z + lz, 0.0f,1.0f,0.0f); 
} 

void moveMeFlat(int i, int j) { 
 // Fungsi ini untuk maju mundur kamera 
 	x = x + i*(lx)*0.01; 
 	z = z + i*(lz)*0.01; 
 	y += j * 0.01;
 	if (y < 0.1) y = 0.1; 
	if (y > 10.0) y = 10.0;
 	glLoadIdentity(); 
	gluLookAt(x, y, z, x + lx,y + ly,z + lz, 0.0f,1.0f,0.0f); 
} 
void Grid() { 
 // Fungsi untuk membuat grid di "lantai" 
 	double i; 
 	const float Z_MIN = -50, Z_MAX = 50; 
 	const float X_MIN = -60, X_MAX = 60; 
 	const float gap = 1.5; 
 	glColor3f(0.0f, 0.0f, 0.0f); 
 	glBegin(GL_LINES); 
 	for(i=Z_MIN;i<Z_MAX;i+=gap){ 
 		glVertex3f(i, 0, Z_MIN); 
 		glVertex3f(i, 0, Z_MAX); 
 	} 
 	for(i=X_MIN;i<X_MAX;i+=gap) { 
 		glVertex3f(X_MIN, 0, i); 
 		glVertex3f(X_MAX, 0, i); 
 	} 
 	glEnd(); 
}
 
void mobil() { 
	//depan
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.812f, 0.09f, 0.267f);
	glVertex3f(-10.0f, 4.0f, 2.0f);
	glVertex3f(-10.0f, 0.0f, 2.0f);
	glVertex3f(0.0f, 0.0f, 2.0f);
	glVertex3f(0.0f, 4.0f, 2.0f);
	glEnd();
	glPopMatrix();
	
	//belakang
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.812f, 0.09f, 0.267f);
	glVertex3f(-10.0f, 4.0f, -2.0f);
	glVertex3f(-10.0f, 0.0f, -2.0f);
	glVertex3f(0.0f, 0.0f, -2.0f);
	glVertex3f(0.0f, 4.0f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//kiri
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.812f, 0.09f, 0.267f);
	glVertex3f(-10.0f, 4.0f, 2.0f);
	glVertex3f(-10.0f, 0.0f, 2.0f);
	glVertex3f(-10.0f, 0.0f, -2.0f);
	glVertex3f(-10.0f, 4.0f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//kanan
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.812f, 0.09f, 0.267f);
	glVertex3f(0.0f, 4.0f, 2.0f);
	glVertex3f(0.0f, 0.0f, 2.0f);
	glVertex3f(0.0f, 0.0f, -2.0f);
	glVertex3f(0.0f, 4.0f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//atas
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.812f, 0.09f, 0.267f);
	glVertex3f(-10.0f, 4.0f, 2.0f);
	glVertex3f(0.0f, 4.0f, 2.0f);
	glVertex3f(0.0f, 4.0f, -2.0f);
	glVertex3f(-10.0f, 4.0f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//bawah
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.812f, 0.09f, 0.267f);
	glVertex3f(-10.0f, 0.0f, 2.0f);
	glVertex3f(0.0f, 0.0f, 2.0f);
	glVertex3f(0.0f, 0.0f, -2.0f);
	glVertex3f(-10.0f, 0.0f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//kaca samping kiri 1
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-9.5f, 3.5f, 2.1f);
	glVertex3f(-9.5f, 2.5f, 2.1f);
	glVertex3f(-7.5f, 2.5f, 2.1f);
	glVertex3f(-7.5f, 3.5f, 2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca samping kiri 2
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-7.0f, 3.5f, 2.1f);
	glVertex3f(-7.0f, 2.5f, 2.1f);
	glVertex3f(-5.0f, 2.5f, 2.1f);
	glVertex3f(-5.0f, 3.5f, 2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca samping kiri 3
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-4.5f, 3.5f, 2.1f);
	glVertex3f(-4.5f, 2.5f, 2.1f);
	glVertex3f(-3.0f, 2.5f, 2.1f);
	glVertex3f(-3.0f, 3.5f, 2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca pintu
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-2.5f, 3.5f, 2.1f);
	glVertex3f(-2.5f, 2.5f, 2.1f);
	glVertex3f(-0.5f, 2.5f, 2.1f);
	glVertex3f(-0.5f, 3.5f, 2.1f);
	glEnd();
	glPopMatrix();
	
	//pintu
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.45f, 0.38f, 0.34f);
	glVertex3f(-2.5f, 3.5f, 2.1f);
	glVertex3f(-2.5f, 1.0f, 2.1f);
	glVertex3f(-0.5f, 1.0f, 2.1f);
	glVertex3f(-0.5f, 3.5f, 2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca depan
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(0.01f, 3.5f, 2.0f);
	glVertex3f(0.01f, 2.5f, 2.0f);
	glVertex3f(0.01f, 2.5f, -2.0f);
	glVertex3f(0.01f, 3.5f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//kaca  samping kanan 1
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-9.5f, 3.5f, -2.1f);
	glVertex3f(-9.5f, 2.5f, -2.1f);
	glVertex3f(-7.5f, 2.5f, -2.1f);
	glVertex3f(-7.5f, 3.5f, -2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca samping kanan 2
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-7.0f, 3.5f, -2.1f);
	glVertex3f(-7.0f, 2.5f, -2.1f);
	glVertex3f(-5.0f, 2.5f, -2.1f);
	glVertex3f(-5.0f, 3.5f, -2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca samping kanan 3
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-4.5f, 3.5f, -2.1f);
	glVertex3f(-4.5f, 2.5f, -2.1f);
	glVertex3f(-3.0f, 2.5f, -2.1f);
	glVertex3f(-3.0f, 3.5f, -2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca pintu
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-2.5f, 3.5f, -2.1f);
	glVertex3f(-2.5f, 2.5f, -2.1f);
	glVertex3f(-0.5f, 2.5f, -2.1f);
	glVertex3f(-0.5f, 3.5f, -2.1f);
	glEnd();
	glPopMatrix();
	
	//pintu kanan
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.45f, 0.38f, 0.34f);
	glVertex3f(-2.5f, 3.5f, -2.1f);
	glVertex3f(-2.5f, 1.0f, -2.1f);
	glVertex3f(-0.5f, 1.0f, -2.1f);
	glVertex3f(-0.5f, 3.5f, -2.1f);
	glEnd();
	glPopMatrix();
	
	//kaca belakang
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(-10.01f, 3.3f, 2.0f);
	glVertex3f(-10.01f, 2.0f, 2.0f);
	glVertex3f(-10.01f, 2.0f, -2.0f);
	glVertex3f(-10.01f, 3.3f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//kaca depan
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0.596f, 0.882f, 0.929f);
	glVertex3f(0.01f, 3.5f, 2.0f);
	glVertex3f(0.01f, 2.5f, 2.0f);
	glVertex3f(0.01f, 2.5f, -2.0f);
	glVertex3f(0.01f, 3.5f, -2.0f);
	glEnd();
	glPopMatrix();
	
	//ban belakang kiri
	glPushMatrix();
	glColor3f(0.14f, 0.14f, 0.14f);
	glTranslatef(-8.0, 0.1, 2);
	glRotatef(angle, 0, 1, 0);
	glutSolidTorus(0.25, 0.6, 10, 20);
	//velg
	glColor3f(0.67f, 0.67f, 0.67f);
	glTranslatef(0, 0, 0.03);
	glutSolidTorus(0.36, 0.0, 10, 20);
	glPopMatrix();
	
	//ban depan kiri
	glPushMatrix();
	glColor3f(0.14f, 0.14f, 0.14f);
	glTranslatef(-2.0, 0.1, -2);
	glRotatef(angle, 0, 1, 0);
	glutSolidTorus(0.25, 0.6, 10, 20);
	//velg
	glColor3f(0.67f, 0.67f, 0.67f);
	glTranslatef(0, 0, 0.03);
	glutSolidTorus(0.36, 0.0, 10, 20);
	glPopMatrix();
	
	//ban belakang kanan
	glPushMatrix();
	glColor3f(0.14f, 0.14f, 0.14f);
	glTranslatef(-8.0, 0.1, -2);
	glRotatef(angle, 0, 1, 0);
	glutSolidTorus(0.25, 0.6, 10, 20);
	//velg
	glColor3f(0.67f, 0.67f, 0.67f);
	glTranslatef(0, 0, 0.03);
	glutSolidTorus(0.36, 0.0, 10, 20);
	glPopMatrix();
	
	//ban depan kanan
	glPushMatrix();
	glColor3f(0.14f, 0.14f, 0.14f);
	glTranslatef(-2.0, 0.1, 2);
	glRotatef(angle, 0, 1, 0);
	glutSolidTorus(0.25, 0.6, 10, 20);
	//velg
	glColor3f(0.67f, 0.67f, 0.67f);
	glTranslatef(0, 0, 0.03);
	glutSolidTorus(0.36, 0.0, 10, 20);
	glPopMatrix();
}
void display() { 
 	// Kalau move dan angle tidak nol, gerakkan kamera... 
 		if (deltaMove || deltaAngle || verticalMovement) {
			moveMeFlat(deltaMove, verticalMovement);
		}
		if (deltaAngle) { 
 			angle += deltaAngle; 
 			orientMe(angle); 
 		} 
 		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
 	// Gambar grid 
 		Grid(); 
 	// Gambar objek di sini... 
 		mobil(); 
 		glutSwapBuffers(); 
 		glFlush(); 
} 
void pressKey(int key, int x, int y) { 
 	switch (key) { 
 		case GLUT_KEY_LEFT : deltaAngle = -0.001f;
		 break; 
 		case GLUT_KEY_RIGHT : deltaAngle = 0.001f;
		 break; 
 		case GLUT_KEY_UP : deltaMove = 1;
		 break; 
 	 	case GLUT_KEY_DOWN : deltaMove = -1;
		  break; 
	 	case GLUT_KEY_PAGE_UP: verticalMovement = 1.0f; 
		 break; // Tombol Page Up untuk naik
	 	case GLUT_KEY_PAGE_DOWN: verticalMovement = -1.0f; 
		 break; // Tombol Page Down untuk turun
 	} 

} 
void releaseKey(int key, int x, int y) { 
 // Fungsi ini akan dijalankan saat tekanan tombol keyboard dilepas 
 // Saat tombol dilepas, variabel angle dan move diset nol =>
//kamera berhenti 
 	switch (key) { 
 	case GLUT_KEY_LEFT : 
	 if (deltaAngle < 0.0f) 
	 deltaAngle = 0.0f; 
	 	break; 
	 case GLUT_KEY_RIGHT : if (deltaAngle > 0.0f) 
	 deltaAngle = 0.0f; 
	 	break; 
	 case GLUT_KEY_UP : if (deltaMove > 0) 
	 deltaMove = 0; 
	 	break; 
	 case GLUT_KEY_DOWN : if (deltaMove < 0) 
	 deltaMove = 0; 
	 	break; 
	 case GLUT_KEY_PAGE_UP:
	 case GLUT_KEY_PAGE_DOWN:
	 verticalMovement = 0.0f; 
		break;
 	} 
} 
// Variable untuk pencahayaan
const GLfloat light_ambient[] = { 0.5f, 0.5f, 0.5f, 0.0f }; 
const GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f }; 
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f }; 
const GLfloat light_position[] = { 0.0f, 20.0f, 10.0f, 1.0f }; 
const GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f }; 
const GLfloat mat_diffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f }; 
const GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f }; 
const GLfloat high_shininess[] = { 100.0f }; 

void lighting(){ 
 // Fungsi mengaktifkan pencahayaan 
 glEnable(GL_DEPTH_TEST); 
 glDepthFunc(GL_LESS); 
 glEnable(GL_LIGHT0); 
 glEnable(GL_NORMALIZE); 
 glEnable(GL_COLOR_MATERIAL); 
 glEnable(GL_LIGHTING); 
 glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient); 
 glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse); 
 glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular); 
 glLightfv(GL_LIGHT0, GL_POSITION, light_position); 
 glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient); 
 glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse); 
 glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular); 
 glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess); 
} 
void init(void) { 
 	glEnable (GL_DEPTH_TEST); 
 	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); 
}
 
int main(int argc, char **argv) { 
 glutInit(&argc, argv); 
 glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA); 
 glutInitWindowPosition(100,100); 
 glutInitWindowSize(640,480); 
 glutCreateWindow("Mobil 3D"); 
 glutIgnoreKeyRepeat(1); // Mengabaikan key repeat (saat tombol keyboard dipencet terus) 
 glutSpecialFunc(pressKey);
 glutSpecialUpFunc(releaseKey); 
 glutDisplayFunc(display); 
 glutIdleFunc(display); // Fungsi display-nya dipanggil terusmenerus 
 glutReshapeFunc(Reshape); 
 glClearColor(0.51f, 0.57f, 0.79f, 0.0);
 lighting(); 
 init(); 
 glutMainLoop(); 
 return(0); 
}

