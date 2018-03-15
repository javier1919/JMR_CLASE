//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Moran RIvas Javier         ******//
//*************			Visual Studio 2015				******//
//*************	r- pulgar, t-dedo4, h-dedo3, y-dedo2, u-dedo1, i-mano, o-mu�eca, p-brazo, l-hombro, k-bisep, j-codo ******//
//************************************************************//
#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
float angleX = 0.0f;
float angleY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
//angulos
float angcodo= 0.0f;
float angbisep = 0.0f;
float anghombro = 0.0f;
float angbrazo = 0.0f;
float angmu�eca = 0.0f;
float angmano = 0.0f;

float angdedo1 = 0.0f;
float angdedo2 = 0.0f;
float angdedo3 = 0.0f;
float angdedo4 = 0.0f;
float angpulgar = 0.0f;


GLfloat Position[]= { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

void InitGL ( void )     // Inicializamos parametros
{

	glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing

	//Configuracion luz
	glLightfv(GL_LIGHT0, GL_POSITION, Position);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);


	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX, 0.0f, transZ);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
		//Poner C�digo Aqu�.
	//hombro	
	glRotatef(angcodo, 0.0, 0.0, 0.1);
	glPushMatrix();
	
	   glScalef(1,2,2);
	   glColor3f(1,1,1);
	   
	   prisma();
	glPopMatrix(); 
	//bicep
	glRotatef(angbisep, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(2,0,0);
	   glScalef(3,2,2);
	   glColor3f(1,0,1);
	   prisma();
	glPopMatrix(); 

		//codo
	glRotatef(anghombro, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(3.75,0,0);
	   glScalef(.5,2,2);
	   glColor3f(1,0,0);
	   prisma();
	glPopMatrix();

	//brazo
	glRotatef(angbrazo, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(6,0,0);
	   glScalef(4,2,2);
	   glColor3f(1,1,1);
	   prisma();
	glPopMatrix();

	//Mu�eca
	glRotatef(angmu�eca, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(8.25,0,0);
	   glScalef(.5,2,2);
	   glColor3f(1,1,0);
	   prisma();
	glPopMatrix();

	//Mano
	glRotatef(angmano, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(9.5,0,0);
	   glScalef(2,2,2);
	   glColor3f(1,1,1);
	   prisma();
	glPopMatrix();
	///ded01
		//dedo1,1
	glRotatef(angdedo1, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(10.75,.75,.8);
	   glScalef(.5,.4,.4);
	   glColor3f(1,0,1);
	   prisma();
	glPopMatrix();
	glRotatef(-angdedo1, 0.0, 0.0, 0.1);
	//dedo1,2
	glRotatef(2*angdedo1, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.25,.75,0.8);
	   glScalef(.5,.4,.4);
	   glColor3f(0,0,1);
	   prisma();
	glPopMatrix();
     glRotatef(-2*angdedo1, 0.0, 0.0, 0.1);
	//dedo1,3
	glRotatef(3*angdedo1, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.75,.75,0.8);
	   glScalef(.5,.4,.4);
	   glColor3f(1,1,0);
	   prisma();
	glPopMatrix();
	glRotatef(-3*angdedo1, 0.0, 0.0, 0.1);
  	///ded02
		//dedo2,1
	glRotatef(angdedo2, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(10.75,.75,.2);
	   glScalef(.5,.4,.4);
	   glColor3f(0,0,1);
	   prisma();
	glPopMatrix();
	glRotatef(-angdedo2, 0.0, 0.0, 0.1);
	//dedo2,2
	glRotatef(2*angdedo2, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.25,.75,0.2);
	   glScalef(.5,.4,.4);
	   glColor3f(0,1,0);
	   prisma();
	glPopMatrix();
	glRotatef(-2 * angdedo2, 0.0, 0.0, 0.1);
	//dedo2,3
	glRotatef(3*angdedo2, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.75,.75,0.2);
	   glScalef(.5,.4,.4);
	   glColor3f(0,0,1);
	   prisma();
	glPopMatrix();		
	glRotatef(-3 * angdedo2, 0.0, 0.0, 0.1);
	///ded03
		//dedo3,1
	glRotatef(angdedo3, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(10.75,.75,-0.3);
	   glScalef(.5,.4,.4);
	   glColor3f(1,0,1);
	   prisma();
	glPopMatrix();
	glRotatef(-angdedo3, 0.0, 0.0, 0.1);
	//dedo3,2
	glRotatef(2*angdedo3, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.25,0.75,-0.3);
	   glScalef(.5,.4,.4);
	   glColor3f(0,0,1);
	   prisma();
	glPopMatrix();
	glRotatef(-2*angdedo3, 0.0, 0.0, 0.1);
	//dedo3,3
	glRotatef(3*angdedo3, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.75,0.75,-0.3);
	   glScalef(.5,.4,.4);
	   glColor3f(1,1,0);
	   prisma();
	glPopMatrix();
	glRotatef(-3*angdedo3, 0.0, 0.0, 0.1);
  	///ded04
		//dedo4,1
	glRotatef(angdedo4, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(10.75,0.75,-0.8);
	   glScalef(.5,.4,.4);
	   glColor3f(0,0,1);
	   prisma();
	glPopMatrix();
	glRotatef(-angdedo4, 0.0, 0.0, 0.1);
	//dedo4,2
	glRotatef(2*angdedo4, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.25,0.75,-0.8);
	   glScalef(.5,.4,.4);
	   glColor3f(0,1,0);
	   prisma();
	glPopMatrix();
	glRotatef(-2*angdedo4, 0.0, 0.0, 0.1);
	//dedo4,3
	glRotatef(3*angdedo4, 0.0, 0.0, 0.1);
	glPushMatrix();
    glTranslatef(11.75,0.75,-0.8);
	   glScalef(.5,.4,.4);
	   glColor3f(0,0,1);
	   prisma();
	glPopMatrix();	
	glRotatef(-3*angdedo4, 0.0, 0.0, 0.1);
	//pulgar 1
	glRotatef(angpulgar, 0.0, 0.1, 0.0);
	glPushMatrix();
    glTranslatef(10.25,1.25,.75);
	   glScalef(.4,.5,.4);
	   glColor3f(0,0,1);
	   prisma();
	glPopMatrix();	
	glRotatef(-angpulgar,0.0, 0.1, 0.0);
	//pulgar 2
	glRotatef(2*angpulgar,0.0, 0.1, 0.0);
	glPushMatrix();
	glTranslatef(10.25, 1.75, .75);
	glScalef(.4, .5, .4);
	glColor3f(1, 0, 1);
	prisma();
	glPopMatrix();
	glRotatef(-2*angpulgar,0.0, 0.1, 0.0);
	glutSwapBuffers ( );
  // Swap The Buffers
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
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();									
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.2f;
			break;
		case 's':
		case 'S':
			transZ -=0.2f;
			break;
		case 'a':
		case 'A':
			transX +=0.2f;
			break;
		case 'd':
		case 'D':
			transX -=0.2f;
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        

		case 'j':        // Cuando Esc es presionado...
			if(angcodo <=80)
			angcodo+=1;   // Salimos del programa
			
			printf("%f \n",angcodo);// Salimos del programa
		break;     

		case 'J':        // Cuando Esc es presionado...
			if(angcodo >=-80)
			angcodo= angcodo-1;
		    
			printf("%f \n",angcodo);// Salimos del programa
		break; 

		case 'k':        // Cuando Esc es presionado...
			if (angbisep <= 15)
				angbisep += 1;   // Salimos del programa

			printf("%f \n", angbisep);// Salimos del programa
			break;

		case 'K':        // Cuando Esc es presionado...
			if (angbisep >= -15)
				angbisep = angbisep - 1;

			printf("%f \n", angbisep);// Salimos del programa
			break;

		case 'l':        // Cuando Esc es presionado...
			if (anghombro <= 2)
				anghombro += 1;   // Salimos del programa

			printf("%f \n", anghombro);// Salimos del programa
			break;

		case 'L':        // Cuando Esc es presionado...
			if (anghombro >= -2)
				anghombro = anghombro - 1;

			printf("%f \n", anghombro);// Salimos del programa
			break;

		case 'p':        // Cuando Esc es presionado...
			if (angbrazo <= 2)
				angbrazo += 1;   // Salimos del programa

			printf("%f \n", angbrazo);// Salimos del programa
			break;

		case 'P':        // Cuando Esc es presionado...
			if (angbrazo >= -2)
				angbrazo = angbrazo - 1;

			printf("%f \n", angbrazo);// Salimos del programa
			break;

		case 'o':        // Cuando Esc es presionado...
			if (angmu�eca <= 2)
				angmu�eca += 1;   // Salimos del programa

			printf("%f \n", angmu�eca);// Salimos del programa
			break;

		case 'O':        // Cuando Esc es presionado...
			if (angmu�eca >= -2)
				angmu�eca = angmu�eca - 1;

			printf("%f \n", angmu�eca);// Salimos del programa
			break;

		case 'i':        // Cuando Esc es presionado...
			if (angmano <= 2)
				angmano += 1;   // Salimos del programa

			printf("%f \n", angmano);// Salimos del programa
			break;

		case 'I':        // Cuando Esc es presionado...
			if (angmano >= -2)
				angmano = angmano - 1;

			printf("%f \n", angmano);// Salimos del programa
			break;

		case 'U':        // Cuando Esc es presionado...
			if (angdedo1 <= 1)
				angdedo1 += 1;   // Salimos del programa

			printf("%f \n", angdedo1);// Salimos del programa
			break;

		case 'u':        // Cuando Esc es presionado...
			if (angdedo1 >= -1)
				angdedo1 = angdedo1 - 1;

			printf("%f \n", angdedo1);// Salimos del programa
			break;

		case 'Y':        // Cuando Esc es presionado...
			if (angdedo2 <= 1)
				angdedo2 += 1;   // Salimos del programa

			printf("%f \n", angdedo2);// Salimos del programa
			break;

		case 'y':        // Cuando Esc es presionado...
			if (angdedo2 >= -1)
				angdedo2 = angdedo2 - 1;

			printf("%f \n", angdedo2);// Salimos del programa
			break;
		case 'H':        // Cuando Esc es presionado...
			if (angdedo3 <= 1)
				angdedo3 += 1;   // Salimos del programa

			printf("%f \n", angdedo3);// Salimos del programa
			break;

		case 'h':        // Cuando Esc es presionado...
			if (angdedo3 >= -1)
				angdedo3 = angdedo3 - 1;

			printf("%f \n", angdedo3);// Salimos del programa
			break;

		case 'T':        // Cuando Esc es presionado...
			if (angdedo4 <= 1)
				angdedo4 += 1;   // Salimos del programa

			printf("%f \n", angdedo4);// Salimos del programa
			break;

		case 't':        // Cuando Esc es presionado...
			if (angdedo4 >= -1)
				angdedo4 = angdedo4 - 1;

			printf("%f \n", angdedo4);// Salimos del programa
			break;

		case 'R':        // Cuando Esc es presionado...
			if (angpulgar <= 1)
				angpulgar += 1;   // Salimos del programa

			printf("%f \n", angpulgar);// Salimos del programa
			break;

		case 'r':        // Cuando Esc es presionado...
			if (angpulgar >= -1)
				angpulgar = angpulgar - 1;

			printf("%f \n", angpulgar);// Salimos del programa
			break;
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angleX +=2.0f;
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -=2.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY +=2.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -=2.0f;
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
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 5"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut funci�n de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



