//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Moran Rivas Javier         ******//
//*************	Visual estudio 2015						******//
//*************											******//
//************************************************************//
#include "Main.h"


// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;


//Variables used to create movement

int sol=0.0;
int mercurio=0.0;
int venus=0.0;
int tierra=0.0;
int marte=0.0;
int jupiter=0.0;
int saturno=0.0;
int urano =0.0;
int neptuno=0.0;

int luna1=0;

float camaraZ = 0.0;
float camaraX = 0.0;

GLfloat SunDiffuse[]= { 1.0f, 1.0f, 1.0f, 1.0f };			// Diffuse Light Values
GLfloat SunSpecular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat SunPosition[]= { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position

GLfloat merDiffuse[]= { 0.93f,0.70f,0.30f, 1.0f };			// mercurio
GLfloat merSpecular[] = { 0.97,0.72,0.32, 1.0 };
GLfloat merShininess[] = { 50.0 };

GLfloat venusDiffuse[]= { 0.7f, 0.6f, 0.9f, 1.0f };			// venus
GLfloat venusSpecular[] = { 0.90, .90, 1.0, 1.0 };
GLfloat venusShininess[] = { 50.0 };

GLfloat EarthDiffuse[]= { 0.2f, 0.2f, 1.0f, 1.0f };			// Tierra
GLfloat EarthSpecular[] = { 0.8, 0.8, 0.8, 1.0 };
GLfloat EarthShininess[] = { 50.0 };

GLfloat MoonDiffuse[]= { 0.8f, 0.8f, 0.8f, 1.0f };			// Luna
GLfloat MoonSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat MoonShininess[] = { 50.0 };

GLfloat MarsDiffuse[]= { 0.8f, 0.4f, 0.1f, 1.0f };			// Marte
GLfloat MarsSpecular[] = { 1.0, 0.5, 0.0, 1.0 };
GLfloat MarsShininess[] = { 50.0 };

GLfloat jupDiffuse[]= { 1.0f,0.9f,0.9f,1.0f };			// jupiter
GLfloat jupSpecular[] = { 0.9, 0.4, 0.0, 1.0 };
GLfloat jupShininess[] = { 50.0 };

GLfloat satDiffuse[]= { 0.5f,0.7f,0.9f, 1.0f };			// saturno
GLfloat satSpecular[] = { 0.4, 0.85, 0.8, 1.0 };
GLfloat satShininess[] = { 50.0 };

GLfloat urDiffuse[]= { 0.1f,0.1f,0.5f, 1.0f };			// urano
GLfloat urSpecular[] = { 0.05, 0.05, 0.0, 1.0 };
GLfloat urShininess[] = { 50.0 };

GLfloat nepDiffuse[]= { 0.1,0.1,0.95, 1.0f };			// neptuno
GLfloat nepSpecular[] = { 0.1, 0.1, 0.85, 1.0 };
GLfloat nepShininess[] = { 50.0 };

void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT1);

	glLightfv(GL_LIGHT1,GL_DIFFUSE,SunDiffuse);
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX,0.0,-5.0+camaraZ);			//camara
		//sol
	glPushMatrix();
	glPushMatrix();
	glRotatef(sol,0.0,1.0,0.0);	//El Sol gira sobre su eje
	glColor3f( 1.0,1.0,0.0 );	//Sol amarillo
	glLightfv(GL_LIGHT1,GL_POSITION, SunPosition);
	glDisable(GL_LIGHTING);
	glutSolidSphere(1.9,20,20);  //Draw Sun (radio,H,V);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	
	//mercurio
	glPushMatrix();
	glRotated(mercurio,0,1,0); //traslacion mercurio
	glTranslated(5,0,0);
	glColor3f(0.97,0.72,0.32);
	glRotatef(mercurio,0,1,0); //rotacion de mercurio

	glMaterialfv(GL_FRONT,GL_DIFFUSE,merDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,merSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,merShininess);
	glutWireSphere(0.5,20,20);
	glPopMatrix();
	
	//venus
	glPushMatrix();
	glRotated(venus,0,1,0); //traslacion venus
	glTranslated(10,0,0);
	glColor3f(1,1,1);
	glRotatef(venus,0,1,0); //rotacion de venus

	glMaterialfv(GL_FRONT,GL_DIFFUSE,venusDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,venusSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,venusShininess);
	glutWireSphere(0.8,20,20);
	glPopMatrix();

	//tierra
	glPushMatrix();
	glRotated(tierra,0,1,0); //traslacion tierra
	glTranslated(15,0,0);
	glColor3f(0.0705,0.0392,0.560);
	glRotatef(tierra,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,EarthDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,EarthSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,EarthShininess);
	glutWireSphere(1,20,20);

	//luna de la tierra
	glPushMatrix();
	glRotated(luna1,0,1,0); //traslacion tierra
	glTranslated(2,0,0);
	glColor3f(1,1,1);
	glRotatef(luna1,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();

	glPopMatrix();

	//marte
	glPushMatrix();
	glRotated(marte,0,1,0); //traslacion tierra
	glTranslated(22,0,0);
	glColor3f(1,00,0);
	glRotatef(marte,0,1,0); //rotacion de tierra
	glMaterialfv(GL_FRONT,GL_DIFFUSE,MarsDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MarsSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MarsShininess);
	glutWireSphere(1.2,20,20);

	//luna marte1
	glPushMatrix();
	glRotated(marte,0,1,0); //traslacion tierra
	glTranslated(2,0,0);
	glColor3f(1,1,1);
	glRotatef(marte,0,1,0); //rotacion de tierra
	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	
	//luna marte2
	glPushMatrix();
	glRotated(marte,1,0,1); //traslacion tierra
	glTranslated(3,0,0);
	glColor3f(1,1,1);
	glRotatef(marte,1,0,1); //rotacion de tierra
	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	glPopMatrix();
	
	//jupiter
	glPushMatrix();
	glRotated(jupiter,0,1,0); //traslacion tierra
	glTranslated(30,0,0);
	glColor3f(1,0.9,0.9);
	glRotatef(jupiter,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,jupDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,jupSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,jupShininess);
	glutWireSphere(1.5,20,20);

	//luna jupiter
	glPushMatrix();
	glRotated(jupiter,0,1,0); //traslacion tierra
	glTranslated(2,0,0);
	glColor3f(1,1,1);
	glRotatef(jupiter,0,1,0); //rotacion de tierra
	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	
	//luna jupiter
	glPushMatrix();
	glRotated(jupiter,1,0,1); //traslacion tierra
	glTranslated(3,0,0);
	glColor3f(1,1,1);
	glRotatef(jupiter,1,0,1); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	glPopMatrix();

	//saturno
	glPushMatrix();
	glRotated(saturno,0,1,0); //traslacion tierra
	glTranslated(40,0,0);
	glColor3f(0.5,0.95,0.9);
	glRotatef(saturno,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,satDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,satSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,satShininess);
	glutWireSphere(1.5,20,20);

	//luna saturno
	glPushMatrix();
	glRotated(saturno,0,1,0); //traslacion tierra
	glTranslated(2,0,0);
	glColor3f(1,1,1);
	glRotatef(saturno,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	
	//luna saturno
	glPushMatrix();
	glRotated(saturno,1,0,1); //traslacion tierra
	glTranslated(3,0,0);
	glColor3f(1,1,1);
	glRotatef(saturno,1,0,1); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	//anilla saturno
	glPushMatrix();
	glRotated(saturno,1,0,1); //traslacion tierra
	glTranslated(0,0,0);
	glColor3f(1,1,1);
	glRotatef(saturno,1,0,1); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutSolidTorus(1.5, 1.7,20,20);
	glPopMatrix();
	glPopMatrix();
	//neptuno
	glPushMatrix();
	glRotated(neptuno,0,1,0); //traslacion tierra
	glTranslated(50,0,0);
	glColor3f(0.1,0.1,0.95);
	glRotatef(neptuno,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,nepDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,nepSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,nepShininess);
	glutWireSphere(1.2,20,20);

	//luna neptuno
	glPushMatrix();
	glRotated(neptuno,0,1,0); //traslacion tierra
	glTranslated(2,0,0);
	glColor3f(1,1,1);
	glRotatef(neptuno,0,1,0); //rotacion de tierra
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	
	//luna neptuno
	glPushMatrix();
	glRotated(neptuno,1,0,1); //traslacion tierra
	glTranslated(3,0,0);
	glColor3f(1,1,1);
	glRotatef(neptuno,1,0,1); //rotacion de tierra
	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	glPopMatrix();

	//urano
	glPushMatrix();
	glRotated(urano,0,1,0); //traslacion tierra
	glTranslated(60,0,0);
	glColor3f(0.1,0.1,0.5);
	glRotatef(urano,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,urDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,urSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,urShininess);
	glutWireSphere(1.5,20,20);

	//luna urano
	glPushMatrix();
	glRotated(urano,0,1,0); //traslacion tierra
	glTranslated(2,0,0);
	glColor3f(1,1,1);
	glRotatef(urano,0,1,0); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	
	//luna urano
	glPushMatrix();
	glRotated(urano,1,0,1); //traslacion tierra
	glTranslated(3,0,0);
	glColor3f(1,1,1);
	glRotatef(urano,1,0,1); //rotacion de tierra

	glMaterialfv(GL_FRONT,GL_DIFFUSE,MoonDiffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,MoonSpecular); 
	glMaterialfv(GL_FRONT,GL_SHININESS,MoonShininess);
	glutWireSphere(0.2,20,20);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();

	glutSwapBuffers ( );

}

void animacion()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if(dwElapsedTime >= 30)
	{
		sol = (sol - 5) % 360;

		mercurio= (mercurio -4) % 360;

		venus= (venus -3) % 360;

		tierra= (tierra -2) % 360;

		marte= (marte -2) % 360; 

		jupiter= (jupiter -3) %360;

		saturno= (saturno -4) % 360;

		urano= (urano -1) % 360;

		neptuno= (neptuno -1) % 360;

		luna1= (luna1 -2) % 360;
		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':   //Movimientos de camara
		case 'W':
			camaraZ +=0.5f;
			break;
		case 's':
		case 'S':
			camaraZ -=0.5f;
			break;
		case 'a':
		case 'A':
			camaraX -= 0.5f;
			break;
		case 'd':
		case 'D':
			camaraX += 0.5f;
			break;

		case 'i':		//Movimientos de Luz
		case 'I':
			
			break;
		case 'k':
		case 'K':
			
			break;

		case 'l':   //Activamos/desactivamos luz
		case 'L':
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
			break;        
		default:        // Cualquier otra
			break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		
		break;
    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		
		break;
	case GLUT_KEY_LEFT:
		
		break;
	case GLUT_KEY_RIGHT:
		
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (20, 60);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 6"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutIdleFunc		  ( animacion );
  glutMainLoop        ( );          // 

  return 0;
}