//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f; 
float transY = 0.0f;
float transZ = -5.0f;


void InitGL ( )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);				// Blanco de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	//glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glPushMatrix();
		
	//glPointSize(10.0);
	glLineWidth(5.0);
	//glBegin(GL_POINTS);
	//glBegin(GL_LINE_STRIP);

	///////////////////////////////////////////////////////////////////////////////// 
	//////////////////// PRINCIPAL 
	//Bota Izquierda 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(1, 0.84, 0.13);

	glVertex3f(239, 886, -0.2);

	glVertex3f(236, 896, -0.2);

	glVertex3f(234, 909, -0.2);

	glVertex3f(235, 922, -0.2);

	glVertex3f(234, 941, -0.2);

	glVertex3f(233, 954, -0.2);

	glVertex3f(236, 973, -0.2);

	glVertex3f(241, 988, -0.2);

	glVertex3f(249, 999, -0.2);

	glVertex3f(262, 985, -0.2);

	glVertex3f(271, 968, -0.2);

	glVertex3f(279, 950, -0.2);

	glVertex3f(285, 931, -0.2);

	glVertex3f(287, 915, -0.2);

	glVertex3f(290, 896, -0.2);

	glVertex3f(276, 896, -0.2);

	glVertex3f(263, 895, -0.2);

	glVertex3f(252, 891, -0.2);

	glVertex3f(245, 887, -0.2);





	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(1, 0.84, 0.13);



	glVertex3f(238, 885, -0.2);

	glVertex3f(229, 878, -0.2);

	glVertex3f(223, 873, -0.2);

	glVertex3f(214, 865, -0.2);

	glVertex3f(207, 856, -0.2);

	glVertex3f(202, 845, -0.2);

	glVertex3f(200, 829, -0.2);

	glVertex3f(195, 816, -0.2);

	glVertex3f(196, 803, -0.2);

	glVertex3f(197, 786, -0.2);

	glVertex3f(196, 775, -0.2);

	glVertex3f(197, 761, -0.2);

	glVertex3f(202, 749, -0.2);

	glVertex3f(201, 736, -0.2);

	glVertex3f(201, 725, -0.2);

	glVertex3f(198, 708, -0.2);

	glVertex3f(199, 685, -0.2);

	glVertex3f(200, 664, -0.2);

	glVertex3f(199, 645, -0.2);

	glVertex3f(194, 628, -0.2);

	glVertex3f(181, 624, -0.2);

	glVertex3f(156, 615, -0.2);

	glVertex3f(139, 607, -0.2);

	glVertex3f(124, 599, -0.2);

	glVertex3f(109, 591, -0.2);

	glVertex3f(94, 580, -0.2);

	glVertex3f(78, 571, -0.2);

	glVertex3f(62, 561, -0.2);

	glVertex3f(51, 552, -0.2);

	glVertex3f(41, 544, -0.2);

	glVertex3f(27, 541, -0.2);

	glVertex3f(28, 526, -0.2);

	glVertex3f(14, 524, -0.2);

	glVertex3f(18, 514, -0.2);

	glVertex3f(24, 507, -0.2);

	glVertex3f(13, 498, -0.2);

	glVertex3f(25, 490, -0.2);

	glVertex3f(21, 479, -0.2);

	glVertex3f(42, 477, -0.2);

	glVertex3f(41, 466, -0.2);

	glVertex3f(60, 471, -0.2);

	glVertex3f(79, 469, -0.2);

	glVertex3f(99, 467, -0.2);

	glVertex3f(144, 470, -0.2);

	glVertex3f(125, 471, -0.2);

	glVertex3f(129, 449, -0.2);

	glVertex3f(127, 425, -0.2);

	glVertex3f(124, 404, -0.2);

	glVertex3f(122, 381, -0.2);

	glVertex3f(122, 354, -0.2);

	glVertex3f(123, 342, -0.2);

	glVertex3f(128, 330, -0.2);

	glVertex3f(120, 304, -0.2);

	glVertex3f(116, 271, -0.2);

	glVertex3f(113, 247, -0.2);

	glVertex3f(113, 210, -0.2);

	glVertex3f(117, 179, -0.2);

	glVertex3f(119, 163, -0.2);

	glVertex3f(130, 149, -0.2);

	glVertex3f(148, 129, -0.2);

	glVertex3f(163, 114, -0.2);

	glVertex3f(179, 103, -0.2);

	glVertex3f(188, 97, -0.2);

	glVertex3f(196, 98, -0.2);

	glVertex3f(197, 120, -0.2);

	glVertex3f(197, 138, -0.2);

	glVertex3f(195, 162, -0.2);

	glVertex3f(195, 177, -0.2);

	glVertex3f(193, 193, -0.2);

	glVertex3f(189, 218, -0.2);

	glVertex3f(185, 234, -0.2);

	glVertex3f(180, 256, -0.2);

	glVertex3f(177, 266, -0.2);

	glVertex3f(194, 258, -0.2);

	glVertex3f(214, 249, -0.2);

	glVertex3f(244, 237, -0.2);

	glVertex3f(271, 230, -0.2);

	glVertex3f(297, 231, -0.2);

	glVertex3f(320, 234, -0.2);

	glVertex3f(340, 240, -0.2);

	glVertex3f(264, 230, -0.2);

	glVertex3f(391, 225, -0.2);

	glVertex3f(423, 218, -0.2);

	glVertex3f(460, 216, -0.2);

	glVertex3f(284, 216, -0.2);

	glVertex3f(514, 220, -0.2);

	glVertex3f(548, 226, -0.2);

	glVertex3f(569, 228, -0.2);

	glVertex3f(587, 233, -0.2);

	glVertex3f(581, 246, -0.2);

	glVertex3f(563, 266, -0.2);

	glVertex3f(545, 277, -0.2);

	glVertex3f(529, 285, -0.2);

	glVertex3f(514, 294, -0.2);

	glVertex3f(495, 293, -0.2);

	glVertex3f(473, 291, -0.2);

	glVertex3f(450, 288, -0.2);

	glVertex3f(432, 286, -0.2);

	glVertex3f(415, 284, -0.2);

	glVertex3f(410, 282, -0.2);

	glVertex3f(419, 295, -0.2);

	glVertex3f(425, 315, -0.2);

	glVertex3f(429, 339, -0.2);

	glVertex3f(432, 361, -0.2);

	glVertex3f(439, 375, -0.2);

	glVertex3f(448, 395, -0.2);

	glVertex3f(453, 406, -0.2);

	glVertex3f(472, 395, -0.2);

	glVertex3f(490, 382, -0.2);

	glVertex3f(513, 372, -0.2);

	glVertex3f(523, 365, -0.2);

	glVertex3f(534, 353, -0.2);

	glVertex3f(543, 364, -0.2);

	glVertex3f(560, 352, -0.2);

	glVertex3f(560, 361, -0.2);

	glVertex3f(572, 361, -0.2);

	glVertex3f(573, 373, -0.2);

	glVertex3f(581, 373, -0.2);

	glVertex3f(578, 387, -0.2);

	glVertex3f(589, 396, -0.2);

	glVertex3f(580, 404, -0.2);

	glVertex3f(570, 409, -0.2);

	glVertex3f(562, 436, -0.2);

	glVertex3f(550, 457, -0.2);

	glVertex3f(539, 478, -0.2);

	glVertex3f(525, 501, -0.2);

	glVertex3f(511, 521, -0.2);

	glVertex3f(498, 541, -0.2);

	glVertex3f(488, 553, -0.2);

	glVertex3f(497, 573, -0.2);

	glVertex3f(510, 596, -0.2);

	glVertex3f(523, 628, -0.2);

	glVertex3f(528, 647, -0.2);

	glVertex3f(537, 679, -0.2);

	glVertex3f(538, 698, -0.2);

	glVertex3f(537, 722, -0.2);

	glVertex3f(528, 743, -0.2);

	glVertex3f(520, 757, -0.2);

	glVertex3f(510, 771, -0.2);

	glVertex3f(490, 787, -0.2);

	glVertex3f(463, 801, -0.2);

	glVertex3f(441, 810, -0.2);

	glVertex3f(441, 822, -0.2);

	glVertex3f(397, 833, -0.2);

	glVertex3f(380, 849, -0.2);

	glVertex3f(363, 862, -0.2);

	glVertex3f(345, 874, -0.2);

	glVertex3f(321, 887, -0.2);

	glVertex3f(296, 894, -0.2);

	glVertex3f(280, 897, -0.2);

	glVertex3f(265, 893, -0.2);

	glVertex3f(253, 890, -0.2);







	glEnd();

	//cola 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(1, 0.84, 0.13);

	glVertex3f(515, 767, -0.2);

	glVertex3f(535, 770, -0.2);

	glVertex3f(551, 773, -0.2);

	glVertex3f(559, 749, -0.2);

	glVertex3f(601, 680, -0.2);



	glVertex3f(666, 689, -0.2);

	glVertex3f(678, 595, -0.2);

	glVertex3f(922, 565, -0.2);

	glVertex3f(984, 379, -0.2);

	glVertex3f(873, 404, -0.2);



	glVertex3f(758, 441, -0.2);

	glVertex3f(681, 473, -0.2);

	glVertex3f(627, 504, -0.2);

	glVertex3f(622, 596, -0.2);

	glVertex3f(616, 647, -0.2);



	glVertex3f(565, 643, -0.2);

	glVertex3f(561, 699, -0.2);

	glVertex3f(537, 691, -0.2);

	glVertex3f(538, 721, -0.2);

	glVertex3f(528, 743, -0.2);



	glVertex3f(523, 753, -0.2);







	glEnd();

	//oreja izq 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);



	glVertex3f(196, 97, -0.2);

	glVertex3f(198, 75, -0.2);

	glVertex3f(198, 47, -0.2);

	glVertex3f(193, 15, -0.2);

	glVertex3f(186, 1, -0.2);



	glVertex3f(174, 3, -0.2);

	glVertex3f(162, 22, -0.2);

	glVertex3f(153, 39, -0.2);

	glVertex3f(144, 59, -0.2);

	glVertex3f(133, 93, -0.2);



	glVertex3f(125, 114, -0.2);

	glVertex3f(121, 132, -0.2);

	glVertex3f(118, 159, -0.2);

	glVertex3f(129, 150, -0.2);

	glVertex3f(143, 130, -0.2);



	glVertex3f(162, 113, -0.2);

	glVertex3f(179, 102, -0.2);





	glEnd();

	//oreja der 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);







	glVertex3f(589, 232, -0.2);

	glVertex3f(578, 249, -0.2);

	glVertex3f(563, 262, -0.2);

	glVertex3f(544, 276, -0.2);

	glVertex3f(531, 284, -0.2);



	glVertex3f(511, 295, -0.2);

	glVertex3f(547, 297, -0.2);

	glVertex3f(585, 296, -0.2);

	glVertex3f(604, 297, -0.2);

	glVertex3f(639, 292, -0.2);



	glVertex3f(675, 282, -0.2);

	glVertex3f(680, 275, -0.2);

	glVertex3f(655, 256, -0.2);

	glVertex3f(627, 243, -0.2);

	glVertex3f(604, 235, -0.2);





	glEnd();

	//mejilla der 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0.995, 0.184, 0.074);





	glVertex3f(446, 395, -0.2);

	glVertex3f(433, 393, -0.2);

	glVertex3f(422, 400, -0.2);

	glVertex3f(414, 411, -0.2);

	glVertex3f(410, 426, -0.2);

	glVertex3f(408, 441, -0.2);

	glVertex3f(408, 456, -0.2);

	glVertex3f(413, 472, -0.2);

	glVertex3f(423, 482, -0.2);

	glVertex3f(439, 485, -0.2);

	glVertex3f(448, 471, -0.2);

	glVertex3f(453, 455, -0.2);

	glVertex3f(456, 440, -0.2);

	glVertex3f(456, 426, -0.2);

	glVertex3f(452, 409, -0.2);











	glEnd();

	//mejilla der 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0.996, 0.184, 0.074);







	glVertex3f(155, 528, -0.2);

	glVertex3f(165, 520, -0.2);

	glVertex3f(167, 502, -0.2);

	glVertex3f(164, 483, -0.2);

	glVertex3f(156, 467, -0.2);

	glVertex3f(142, 455, -0.2);

	glVertex3f(129, 451, -0.2);

	glVertex3f(128, 466, -0.2);

	glVertex3f(125, 473, -0.2);

	glVertex3f(125, 481, -0.2);

	glVertex3f(129, 496, -0.2);

	glVertex3f(137, 507, -0.2);

	glVertex3f(145, 519, -0.2);

	glVertex3f(151, 524, -0.2);









	glEnd();
	//boca 1 relleno 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0.439, 0.0313, 0.0274);



	glVertex3f(238, 450, -0.2);

	glVertex3f(257, 487, -0.2);

	glVertex3f(266, 472, -0.2);

	glVertex3f(278, 463, -0.2);

	glVertex3f(288, 458, -0.2);

	glVertex3f(302, 454, -0.2);

	glVertex3f(318, 454, -0.2);

	glVertex3f(329, 455, -0.2);

	glVertex3f(339, 460, -0.2);

	glVertex3f(339, 442, -0.2);

	glVertex3f(334, 428, -0.2);

	glVertex3f(321, 433, -0.2);

	glVertex3f(277, 429, -0.2);

	glVertex3f(254, 443, -0.2);



	glEnd();
	//boca 2 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(.941, 0.329, 0.376);



	glVertex3f(258, 490, -0.2);

	glVertex3f(268, 504, -0.2);

	glVertex3f(289, 532, -0.2);

	glVertex3f(299, 542, -0.2);

	glVertex3f(309, 548, -0.2);

	glVertex3f(320, 544, -0.2);

	glVertex3f(335, 519, -0.2);

	glVertex3f(334, 507, -0.2);

	glVertex3f(340, 484, -0.2);

	glVertex3f(339, 458, -0.2);

	glVertex3f(323, 454, -0.2);

	glVertex3f(305, 453, -0.2);

	glVertex3f(287, 457, -0.2);

	glVertex3f(271, 467, -0.2);

	glVertex3f(265, 475, -0.2);









	glEnd();
	//ojo der 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);



	glVertex3f(355, 331, -0.2);

	glVertex3f(346, 341, -0.2);

	glVertex3f(338, 352, -0.2);

	glVertex3f(337, 361, -0.2);

	glVertex3f(341, 371, -0.2);

	glVertex3f(348, 384, -0.2);

	glVertex3f(359, 390, -0.2);

	glVertex3f(371, 391, -0.2);

	glVertex3f(384, 383, -0.2);

	glVertex3f(392, 370, -0.2);

	glVertex3f(392, 354, -0.2);

	glVertex3f(384, 341, -0.2);

	glVertex3f(372, 333, -0.2);

	glVertex3f(361, 331, -0.2);







	glEnd();



	//ojo izq 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);



	glVertex3f(176, 369, -0.2);

	glVertex3f(168, 375, -0.2);

	glVertex3f(159, 385, -0.2);

	glVertex3f(154, 393, -0.2);

	glVertex3f(153, 404, -0.2);

	glVertex3f(158, 416, -0.2);

	glVertex3f(170, 427, -0.2);

	glVertex3f(182, 429, -0.2);

	glVertex3f(193, 428, -0.2);

	glVertex3f(202, 419, -0.2);

	glVertex3f(210, 404, -0.2);

	glVertex3f(209, 390, -0.2);

	glVertex3f(205, 381, -0.2);

	glVertex3f(195, 373, -0.2);

	glVertex3f(185, 371, -0.2);





	glEnd();
	//ojito der 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);



	glVertex3f(348, 349, -0.2);

	glVertex3f(354, 361, -0.2);

	glVertex3f(366, 363, -0.2);

	glVertex3f(371, 352, -0.2);

	glVertex3f(364, 341, -0.2);

	glVertex3f(355, 340, -0.2);





	glEnd();

	//ojito izq 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(1, 1, 1);

	glVertex3f(179, 377, -0.2);

	glVertex3f(175, 386, -0.2);

	glVertex3f(174, 395, -0.2);

	glVertex3f(186, 401, -0.2);

	glVertex3f(197, 394, -0.2);

	glVertex3f(197, 378, -0.2);

	glVertex3f(187, 377, -0.2);



	glEnd();
	////////////////////////////////////////////////////////////////////////////// 
	////////////////// SOMBRAS Y FONDO 

	//sombra pie 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);

	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(236, 888, -0.2);

	glVertex3f(241, 903, -0.2);

	glVertex3f(244, 915, -0.2);

	glVertex3f(247, 926, -0.2);

	glVertex3f(249, 936, -0.2);

	glVertex3f(254, 947, -0.2);

	glVertex3f(259, 959, -0.2);

	glVertex3f(267, 966, -0.2);

	glVertex3f(270, 970, -0.2);

	glVertex3f(274, 960, -0.2);

	glVertex3f(277, 951, -0.2);

	glVertex3f(281, 934, -0.2);

	glVertex3f(285, 921, -0.2);

	glVertex3f(287, 910, -0.2);

	glVertex3f(287, 907, -0.2);

	glVertex3f(289, 898, -0.2);

	glVertex3f(277, 899, -0.2);

	glVertex3f(267, 898, -0.2);

	glVertex3f(257, 895, -0.2);

	glVertex3f(249, 893, -0.2);

	





	glEnd();

//barbilla
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);


	glVertex3f(246, 578, -0.2);
	glVertex3f(270, 576, -0.2);
	glVertex3f(299, 570, -0.2);
	glVertex3f(370, 563, -0.2);
	glVertex3f(354, 558, -0.2);

	glVertex3f(368, 554, -0.2);
	glVertex3f(363, 574, -0.2);
	glVertex3f(352, 585, -0.2);
	glVertex3f(340, 594, -0.2);
	glVertex3f(328, 597, -0.2);

	glVertex3f(310, 599, -0.2);
	glVertex3f(293, 597, -0.2);
	glVertex3f(272, 591, -0.2);
	glVertex3f(256, 583, -0.2);


	glEnd();

	//sombra brazon izq
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(222, 633, -0.2);
	glVertex3f(207, 617, -0.2);
	glVertex3f(189, 608, -0.2);
	glVertex3f(161, 596, -0.2);
	glVertex3f(124, 577, -0.2);

	glVertex3f(90, 558, -0.2);
	glVertex3f(65, 543, -0.2);
	glVertex3f(50, 536, -0.2);
	glVertex3f(42, 538, -0.2);
	glVertex3f(52, 551, -0.2);

	glVertex3f(71, 566, -0.2);
	glVertex3f(90, 577, -0.2);
	glVertex3f(108, 588, -0.2);
	glVertex3f(136, 600, -0.2);
	glVertex3f(156, 611, -0.2);
	glVertex3f(180, 624, -0.2);
	glVertex3f(196, 626, -0.2);

	glEnd();

	//sombra brazon der
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(447, 584, -0.2);
	glVertex3f(485, 555, -0.2);
	glVertex3f(498, 537, -0.2);
	glVertex3f(511, 521, -0.2);
	glVertex3f(525, 498, -0.2);

	glVertex3f(537, 476, -0.2);
	glVertex3f(548, 455, -0.2);
	glVertex3f(561, 429, -0.2);
	glVertex3f(538, 458, -0.2);
	glVertex3f(515, 485, -0.2);

	glVertex3f(503, 498, -0.2);
	glVertex3f(482, 521, -0.2);
	glVertex3f(465, 540, -0.2);
	glVertex3f(456, 553, -0.2);
	glVertex3f(450, 571, -0.2);

	glEnd();

	//sombra oreja der
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(149, 288, -0.2);
	glVertex3f(176, 269, -0.2);
	glVertex3f(184, 239, -0.2);
	glVertex3f(191, 209, -0.2);
	glVertex3f(194, 180, -0.2);

	glVertex3f(196, 149, -0.2);
	glVertex3f(198, 115, -0.2);
	glVertex3f(196, 98, -0.2);
	glVertex3f(189, 109, -0.2);
	glVertex3f(186, 134, -0.2);

	glVertex3f(183, 150, -0.2);
	glVertex3f(179, 177, -0.2);
	glVertex3f(166, 221, -0.2);
	glVertex3f(156, 256, -0.2);
	glVertex3f(154, 269, -0.2);

	glEnd();

	//sombra oreja izq
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(387, 262, -0.2);
	glVertex3f(422, 266, -0.2);
	glVertex3f(470, 274, -0.2);
	glVertex3f(502, 279, -0.2);
	glVertex3f(530, 284, -0.2);

	glVertex3f(512, 295, -0.2);
	glVertex3f(467, 292, -0.2);
	glVertex3f(435, 285, -0.2);
	glVertex3f(407, 281, -0.2);
	glVertex3f(396, 270, -0.2);

	glEnd();

	//sombra cintura 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);
	

	glVertex3f(203, 838, -0.2);
	glVertex3f(235, 854, -0.2);
	glVertex3f(317, 886, -0.2);
	glVertex3f(290, 895, -0.2);
	glVertex3f(272, 892, -0.2);

	glVertex3f(256, 890, -0.2);
	glVertex3f(242, 884, -0.2);
	glVertex3f(226, 872, -0.2);
	glVertex3f(214, 859, -0.2);
	glVertex3f(208, 851, -0.2);
	glEnd();

	//sombra cintura 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(235, 854, -0.2);
	glVertex3f(261, 852, -0.2);
	glVertex3f(280, 843, -0.2);
	glVertex3f(304, 832, -0.2);
	glVertex3f(325, 821, -0.2);

	glVertex3f(354, 806, -0.2);
	glVertex3f(385, 787, -0.2);
	glVertex3f(406, 821, -0.2);
	glVertex3f(389, 839, -0.2);
	glVertex3f(364, 859, -0.2);
	glVertex3f(337, 877, - 0.2);
	glVertex3f(317, 886, -0.2);
	glEnd();

	//sombra cintura 3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(385, 787, -0.2);
	glVertex3f(392, 761, -0.2);
	glVertex3f(391, 738, -0.2);
	glVertex3f(391, 726, -0.2);
	glVertex3f(391, 715, -0.2);

	glVertex3f(387, 700, -0.2);
	glVertex3f(389, 694, -0.2);
	glVertex3f(401, 693, -0.2);
	glVertex3f(418, 704, -0.2);
	glVertex3f(430, 712, -0.2);
	glVertex3f(438, 718, -0.2);
	glVertex3f(452, 726, -0.2);
	glVertex3f(491, 784, -0.2);
	glVertex3f(463, 800, -0.2);
	glVertex3f(410, 820, -0.2);
	glVertex3f(406, 821, -0.2);
	glEnd();

	//sombra cintura 4
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(452, 726, -0.2);
	glVertex3f(444, 702, -0.2);
	glVertex3f(456, 690, -0.2);
	glVertex3f(470, 683, -0.2);
	glVertex3f(498, 684, -0.2);

	glVertex3f(515, 690, -0.2);
	glVertex3f(528, 697, -0.2);
	glVertex3f(534, 707, -0.2);
	glVertex3f(534, 725, -0.2);
	glVertex3f(528, 742, -0.2);
	glVertex3f(520, 756, -0.2);
	glVertex3f(512, 766, -0.2);
	glVertex3f(500, 777, -0.2);
	glVertex3f(491, 784, -0.2);
	glEnd();

	//sombra cola 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);


	glVertex3f(629, 506, -0.2);
	glVertex3f(655, 508, -0.2);
	glVertex3f(679, 512, -0.2);
	glVertex3f(704, 516, -0.2);
	glVertex3f(744, 523, -0.2);

	glVertex3f(789, 530, -0.2);
	glVertex3f(832, 538, -0.2);
	glVertex3f(870, 547, -0.2);
	glVertex3f(895, 551, -0.2);
	glVertex3f(920, 558, -0.2);
	glVertex3f(920, 563, -0.2);
	glVertex3f(885, 566, -0.2);
	glVertex3f(847, 570, -0.2);
	glVertex3f(811, 575, -0.2);
	glVertex3f(771, 579, -0.2);
	glVertex3f(743, 582, -0.2);
	glVertex3f(719, 586, -0.2);

	glVertex3f(698, 590, -0.2);
	glVertex3f(676, 594, -0.2);
	glVertex3f(624, 598, -0.2);
	glVertex3f(624, 580, -0.2);
	glVertex3f(625, 567, -0.2);
	glVertex3f(627, 542, -0.2);
	glVertex3f(628, 523, -0.2);
	glEnd();
	//sombra cola
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.509, 0.121, 0.004);

	glVertex3f(516, 766, -0.2);
	glVertex3f(533, 769, -0.2);
	glVertex3f(550, 731, -0.2);
	glVertex3f(599, 747, -0.2);
	glVertex3f(559, 695, -0.2);
	glVertex3f(592, 586, -0.2);
	glVertex3f(589, 696, -0.2);
	glVertex3f(579, 680, -0.2);

	glVertex3f(576, 690, -0.2);
	glVertex3f(570, 671, -0.2);
	glVertex3f(564, 677, -0.2);
	glVertex3f(562, 700, -0.2);
	glVertex3f(540, 693, -0.2);
	glVertex3f(538, 718, -0.2);
	glVertex3f(535, 734, -0.2);
	glVertex3f(528, 747, -0.2);
	glVertex3f(520, 760, -0.2);

	glEnd();
	//sombra cola 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.88, 0.59, 0.129);

	glVertex3f(676, 594, -0.2);
	glVertex3f(672, 614, -0.2);
	glVertex3f(669, 643, -0.2);
	glVertex3f(656, 666, -0.2);
	glVertex3f(664, 685, -0.2);
	glVertex3f(643, 681, -0.2);
	glVertex3f(624, 680, -0.2);
	glVertex3f(615, 749, -0.2);
	glVertex3f(599, 676, -0.2);
	glVertex3f(598, 694, -0.2);
	glVertex3f(592, 686, -0.2);
	glVertex3f(588, 697, -0.2);
	glVertex3f(580, 678, -0.2);
	glVertex3f(576, 691, -0.2);
	glVertex3f(571, 670, -0.2);
	glVertex3f(564, 677, -0.2);
	glVertex3f(565, 649, -0.2);
	glVertex3f(586, 649, -0.2);
	glVertex3f(617, 649, -0.2);
	glVertex3f(621, 618, -0.2);
	glVertex3f(624, 598, -0.2);
	glEnd();

	//sombra boca
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0.751, 0.1098, 0.1607);

	glVertex3f(269, 503, -0.2);
	glVertex3f(259, 488, -0.2);
	glVertex3f(265, 477, -0.2);
	glVertex3f(281, 466, -0.2);
	glVertex3f(297, 458, -0.2);
	glVertex3f(308, 455, -0.2);
	glVertex3f(319, 455, -0.2);
	glVertex3f(332, 457, -0.2);
	glVertex3f(338, 461, -0.2);
	glVertex3f(337, 482, -0.2);
	glVertex3f(326, 478, -0.2);
	glVertex3f(315, 477, -0.2);
	glVertex3f(304, 477, -0.2);
	glVertex3f(290, 481, -0.2);
	glVertex3f(280, 489, -0.2);

	glEnd();

	//correccion 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);

	glVertex3f(666, 700, -0.2);
	glVertex3f(923, 565, -0.2);
	glVertex3f(678, 596, -0.2);
	glEnd();

	//correccion 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);

	glVertex3f(563, 645, -0.2);
	glVertex3f(616, 647, -0.2);
	glVertex3f(628, 503, -0.2);
	glEnd();

	//correccion 3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);

	glVertex3f(599, 748, -0.2);
	glVertex3f(600, 679, -0.2);

	glVertex3f(664, 687, -0.2);
	glEnd();

	//correccion 4
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);

	glVertex3f(538, 690, -0.2);
	glVertex3f(560, 698, -0.2);
	glVertex3f(561, 696, -0.2);
	glEnd();

	//correccion 5
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);

	glVertex3f(539, 771, -0.2);
	glVertex3f(615, 690, -0.2);
	glVertex3f(666, 850, -0.2);
	glVertex3f(572, 838, -0.2);
	glEnd();

	//correccion brazo
	
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);


	glVertex3f(28, 543, -0.2);
	glVertex3f(41, 543, -0.2);
	glVertex3f(53, 553, -0.2);
	glVertex3f(71, 566, -0.2);
	glVertex3f(88, 576, -0.2);
	glVertex3f(103, 585, -0.2);
	glVertex3f(123, 597, -0.2);
	glVertex3f(148, 609, -0.2);

	glVertex3f(170, 620, -0.2);
	glVertex3f(185, 627, -0.2);
	glVertex3f(195, 628, -0.2);
	glVertex3f(201, 639, -0.2);
	glVertex3f(220, 663, -0.2);
	glVertex3f(200, 683, -0.2);
	glVertex3f(200, 710, -0.2);

	glVertex3f(202, 732, -0.2);
	glVertex3f(202, 750, -0.2);
	glVertex3f(196, 882, -0.2);
	glVertex3f(194, 812, -0.2);
	glVertex3f(202, 841, -0.2);
	glVertex3f(138, 878, -0.2);
	glEnd();

	//correccion cabeza brazo

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(533, 351, -0.2);
	glVertex3f(526, 362, -0.2);
	glVertex3f(514, 367, -0.2);
	glVertex3f(502, 372, -0.2);
	glVertex3f(495, 377, - 0.2);
	glVertex3f(482, 382, -0.2);
	glVertex3f(470, 392, -0.2);
	glVertex3f(452, 405, -0.2);

	glVertex3f(444, 389, -0.2);
	glVertex3f(439, 374, -0.2);
	glVertex3f(434, 357, -0.2);
	glVertex3f(429, 339, -0.2);
	glVertex3f(428, 320, -0.2);
	glVertex3f(425, 305, -0.2);
	glVertex3f(421, 297, -0.2);
	glVertex3f(412, 284, -0.2);
	glVertex3f(432, 288, -0.2);
	glVertex3f(450, 290, -0.2);
	glVertex3f(478, 295, -0.2);
	glVertex3f(505, 298, -0.2);
	glVertex3f(526, 296, -0.2);
	glVertex3f(542, 297, -0.2);
	glEnd();

	//correccion nariz

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);

	glVertex3f(266, 404, -0.2);
	glVertex3f(275, 402, -0.2);
	glVertex3f(273, 408, -0.2);
	glVertex3f(268, 409, -0.2);

	glEnd();
	///////////////////////////////////////////////////////////////////////////// 
	////////////////////// CONTORNOS  Y DELINEADOS 
	//boca 2 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(258, 490, -0.2);
	glVertex3f(268, 504, -0.2);
	glVertex3f(289, 532, -0.2);
	glVertex3f(299, 542, -0.2);
	glVertex3f(309, 548, -0.2);
	glVertex3f(320, 544, -0.2);
	glVertex3f(335, 519, -0.2);
	glVertex3f(334, 507, -0.2);
	glVertex3f(340, 484, -0.2);
	glVertex3f(339, 458, -0.2);
	glVertex3f(323, 454, -0.2);
	glVertex3f(305, 453, -0.2);
	glVertex3f(287, 457, -0.2);
	glVertex3f(271, 467, -0.2);
	glVertex3f(265, 475, -0.2);

	glEnd();
	//boca 1 
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(238, 450, -0.2);
	glVertex3f(257, 487, -0.2);
	glVertex3f(266, 472, -0.2);
	glVertex3f(278, 463, -0.2);
	glVertex3f(288, 458, -0.2);
	glVertex3f(302, 454, -0.2);
	glVertex3f(318, 454, -0.2);
	glVertex3f(329, 455, -0.2);
	glVertex3f(339, 460, -0.2);
	glVertex3f(339, 442, -0.2);
	glVertex3f(334, 428, -0.2);
	glVertex3f(321, 433, -0.2);
	glVertex3f(277, 429, -0.2);
	glVertex3f(254, 443, -0.2);

	glEnd();

	//mejilla IZQ 

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(155, 528, -0.2);
	glVertex3f(165, 520, -0.2);
	glVertex3f(167, 502, -0.2);
	glVertex3f(164, 483, -0.2);
	glVertex3f(156, 467, -0.2);
	glVertex3f(142, 455, -0.2);
	glVertex3f(129, 451, -0.2);
	glVertex3f(128, 466, -0.2);
	glVertex3f(125, 473, -0.2);
	glVertex3f(125, 481, -0.2);
	glVertex3f(129, 496, -0.2);
	glVertex3f(137, 507, -0.2);
	glVertex3f(145, 519, -0.2);
	glVertex3f(151, 524, -0.2);

	glEnd();

	//mejilla der 
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(446, 395, -0.2);
	glVertex3f(433, 393, -0.2);
	glVertex3f(422, 400, -0.2);
	glVertex3f(414, 411, -0.2);
	glVertex3f(410, 426, -0.2);
	glVertex3f(408, 441, -0.2);
	glVertex3f(408, 456, -0.2);
	glVertex3f(413, 472, -0.2);
	glVertex3f(423, 482, -0.2);
	glVertex3f(439, 485, -0.2);
	glVertex3f(448, 471, -0.2);
	glVertex3f(453, 455, -0.2);
	glVertex3f(456, 440, -0.2);
	glVertex3f(456, 426, -0.2);
	glVertex3f(452, 409, -0.2);

	glEnd();

	//cola linea 
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(515, 767, -0.2);
	glVertex3f(535, 770, -0.2);
	glVertex3f(551, 773, -0.2);
	glVertex3f(559, 749, -0.2);
	glVertex3f(601, 680, -0.2);
	glVertex3f(666, 689, -0.2);
	glVertex3f(678, 595, -0.2);
	glVertex3f(922, 565, -0.2);
	glVertex3f(984, 379, -0.2);
	glVertex3f(873, 404, -0.2);
	glVertex3f(758, 441, -0.2);
	glVertex3f(681, 473, -0.2);
	glVertex3f(627, 504, -0.2);
	glVertex3f(622, 596, -0.2);
	glVertex3f(616, 647, -0.2);
	glVertex3f(565, 643, -0.2);
	glVertex3f(561, 699, -0.2);
	glVertex3f(537, 691, -0.2);
	glVertex3f(538, 721, -0.2);
	glVertex3f(528, 743, -0.2);
	glVertex3f(523, 753, -0.2);

	glEnd();

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex3f(238, 885, -0.2);
	glVertex3f(229, 878, -0.2);
	glVertex3f(223, 873, -0.2);
	glVertex3f(214, 865, -0.2);
	glVertex3f(207, 856, -0.2);
	glVertex3f(202, 845, -0.2);
	glVertex3f(200, 829, -0.2);
	glVertex3f(195, 816, -0.2);
	glVertex3f(196, 803, -0.2);
	glVertex3f(197, 786, -0.2);
	glVertex3f(196, 775, -0.2);
	glVertex3f(197, 761, -0.2);
	glVertex3f(202, 749, -0.2);
	glVertex3f(201, 736, -0.2);
	glVertex3f(201, 725, -0.2);
	glVertex3f(198, 708, -0.2);
	glVertex3f(199, 685, -0.2);
	glVertex3f(200, 664, -0.2);
	glVertex3f(199, 645, -0.2);
	glVertex3f(194, 628, -0.2);
	glVertex3f(181, 624, -0.2);
	glVertex3f(156, 615, -0.2);
	glVertex3f(139, 607, -0.2);
	glVertex3f(124, 599, -0.2);
	glVertex3f(109, 591, -0.2);
	glVertex3f(94, 580, -0.2);
	glVertex3f(78, 571, -0.2);
	glVertex3f(62, 561, -0.2);
	glVertex3f(51, 552, -0.2);
	glVertex3f(41, 544, -0.2);
	glVertex3f(27, 541, -0.2);
	glVertex3f(28, 526, -0.2);
	glVertex3f(14, 524, -0.2);
	glVertex3f(18, 514, -0.2);
	glVertex3f(24, 507, -0.2);
	glVertex3f(13, 498, -0.2);
	glVertex3f(25, 490, -0.2);
	glVertex3f(21, 479, -0.2);
	glVertex3f(42, 477, -0.2);
	glVertex3f(41, 466, -0.2);
	glVertex3f(60, 471, -0.2);
	glVertex3f(79, 469, -0.2);
	glVertex3f(99, 467, -0.2);
	glVertex3f(144, 470, -0.2);
	glVertex3f(125, 471, -0.2);
	glVertex3f(129, 449, -0.2);
	glVertex3f(127, 425, -0.2);
	glVertex3f(124, 404, -0.2);
	glVertex3f(122, 381, -0.2);
	glVertex3f(122, 354, -0.2);
	glVertex3f(123, 342, -0.2);
	glVertex3f(128, 330, -0.2);
	glVertex3f(120, 304, -0.2);
	glVertex3f(116, 271, -0.2);
	glVertex3f(113, 247, -0.2);
	glVertex3f(113, 210, -0.2);
	glVertex3f(117, 179, -0.2);
	glVertex3f(119, 163, -0.2);
	glVertex3f(130, 149, -0.2);
	glVertex3f(148, 129, -0.2);
	glVertex3f(163, 114, -0.2);
	glVertex3f(179, 103, -0.2);
	glVertex3f(188, 97, -0.2);
	glVertex3f(196, 98, -0.2);
	glVertex3f(197, 120, -0.2);
	glVertex3f(197, 138, -0.2);
	glVertex3f(195, 162, -0.2);
	glVertex3f(195, 177, -0.2);
	glVertex3f(193, 193, -0.2);
	glVertex3f(189, 218, -0.2);
	glVertex3f(185, 234, -0.2);
	glVertex3f(180, 256, -0.2);
	glVertex3f(177, 266, -0.2);
	glVertex3f(194, 258, -0.2);
	glVertex3f(214, 249, -0.2);
	glVertex3f(244, 237, -0.2);
	glVertex3f(271, 230, -0.2);
	glVertex3f(297, 231, -0.2);
	glVertex3f(320, 234, -0.2);
	glVertex3f(340, 240, -0.2);
	glVertex3f(264, 230, -0.2);
	glVertex3f(391, 225, -0.2);
	glVertex3f(423, 218, -0.2);
	glVertex3f(460, 216, -0.2);
	glVertex3f(284, 216, -0.2);
	glVertex3f(514, 220, -0.2);
	glVertex3f(548, 226, -0.2);
	glVertex3f(569, 228, -0.2);
	glVertex3f(587, 233, -0.2);
	glVertex3f(581, 246, -0.2);
	glVertex3f(563, 266, -0.2);
	glVertex3f(545, 277, -0.2);
	glVertex3f(529, 285, -0.2);
	glVertex3f(514, 294, -0.2);
	glVertex3f(495, 293, -0.2);
	glVertex3f(473, 291, -0.2);
	glVertex3f(450, 288, -0.2);
	glVertex3f(432, 286, -0.2);
	glVertex3f(415, 284, -0.2);
	glVertex3f(410, 282, -0.2);
	glVertex3f(419, 295, -0.2);
	glVertex3f(425, 315, -0.2);
	glVertex3f(429, 339, -0.2);
	glVertex3f(432, 361, -0.2);
	glVertex3f(439, 375, -0.2);
	glVertex3f(448, 395, -0.2);
	glVertex3f(453, 406, -0.2);
	glVertex3f(472, 395, -0.2);
	glVertex3f(490, 382, -0.2);
	glVertex3f(513, 372, -0.2);
	glVertex3f(523, 365, -0.2);
	glVertex3f(534, 353, -0.2);
	glVertex3f(543, 364, -0.2);
	glVertex3f(560, 352, -0.2);
	glVertex3f(560, 361, -0.2);
	glVertex3f(572, 361, -0.2);
	glVertex3f(573, 373, -0.2);
	glVertex3f(581, 373, -0.2);
	glVertex3f(578, 387, -0.2);
	glVertex3f(589, 396, -0.2);
	glVertex3f(580, 404, -0.2);
	glVertex3f(570, 409, -0.2);
	glVertex3f(562, 436, -0.2);
	glVertex3f(550, 457, -0.2);
	glVertex3f(539, 478, -0.2);
	glVertex3f(525, 501, -0.2);
	glVertex3f(511, 521, -0.2);
	glVertex3f(498, 541, -0.2);
	glVertex3f(488, 553, -0.2);
	glVertex3f(497, 573, -0.2);
	glVertex3f(510, 596, -0.2);
	glVertex3f(523, 628, -0.2);
	glVertex3f(528, 647, -0.2);
	glVertex3f(537, 679, -0.2);
	glVertex3f(538, 698, -0.2);
	glVertex3f(537, 722, -0.2);
	glVertex3f(528, 743, -0.2);
	glVertex3f(520, 757, -0.2);
	glVertex3f(510, 771, -0.2);
	glVertex3f(490, 787, -0.2);
	glVertex3f(463, 801, -0.2);
	glVertex3f(441, 810, -0.2);
	glVertex3f(441, 822, -0.2);
	glVertex3f(397, 833, -0.2);
	glVertex3f(380, 849, -0.2);
	glVertex3f(363, 862, -0.2);
	glVertex3f(345, 874, -0.2);
	glVertex3f(321, 887, -0.2);
	glVertex3f(296, 894, -0.2);
	glVertex3f(280, 897, -0.2);
	glVertex3f(265, 893, -0.2);
	glVertex3f(253, 890, -0.2);

	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glLineWidth(2);
	glBegin(GL_POLYGON);
	glColor3f(0, 0.0, 0);
	glVertex3f(239, 886, -0.2);
	glVertex3f(236, 896, -0.2);
	glVertex3f(234, 909, -0.2);
	glVertex3f(235, 922, -0.2);
	glVertex3f(234, 941, -0.2);
	glVertex3f(233, 954, -0.2);
	glVertex3f(236, 973, -0.2);
	glVertex3f(241, 988, -0.2);
	glVertex3f(249, 999, -0.2);
	glVertex3f(262, 985, -0.2);
	glVertex3f(271, 968, -0.2);
	glVertex3f(279, 950, -0.2);
	glVertex3f(285, 931, -0.2);
	glVertex3f(287, 915, -0.2);
	glVertex3f(290, 896, -0.2);
	glVertex3f(276, 896, -0.2);
	glVertex3f(263, 895, -0.2);
	glVertex3f(252, 891, -0.2);
	glVertex3f(245, 887, -0.2);

	glEnd();
	//linea boca
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(156, 528, -0.2);
	glVertex3f(165, 536, -0.2);
	glVertex3f(180, 548, -0.2);
	glVertex3f(194, 555, -0.2);
	glVertex3f(210, 562, -0.2);
	glVertex3f(224, 570, -0.2);
	glVertex3f(241, 573, -0.2);

	glEnd();

	//linea boca 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(438, 486, - 0.2);
	glVertex3f(431, 499, -0.2);
	glVertex3f(420, 511, -0.2);
	glVertex3f(411, 524, -0.2);
	glVertex3f(401, 536, -0.2);


	glEnd();

	//linea boca 3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(336, 426, -0.2);
	glVertex3f(336, 419, -0.2);

	glEnd();

	//linea boca 4
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(237, 449, -0.2);
	glVertex3f(220, 447, -0.2);

	glEnd();

	//linea boca 5
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(130, 326, -0.2);

	glVertex3f(136, 313, -0.2);
	glVertex3f(141, 330, -0.2);

	glEnd();

	//linea PIE 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(409, 770, -0.2);
	glVertex3f(400, 761, -0.2);
	glVertex3f(393, 751, -0.2);
	glVertex3f(387, 741, -0.2);
	glVertex3f(381, 730, -0.2);

	glVertex3f(378, 719, -0.2);
	glVertex3f(375, 708, -0.2);
	glVertex3f(374, 697, -0.2);
	glVertex3f(376, 691, -0.2);
	glVertex3f(382, 699, -0.2);
	glVertex3f(387, 710, -0.2);
	glVertex3f(398, 720, -0.2);
	glVertex3f(407, 732, -0.2);
	glVertex3f(415, 740, -0.2);
	glVertex3f(421, 748, -0.2);
	glVertex3f(429, 756, -0.2);
	glVertex3f(439, 773, -0.2);
	glVertex3f(447, 789, -0.2);
	glVertex3f(457, 784, -0.2);
	glVertex3f(464, 775, -0.2);
	glVertex3f(467, 765, -0.2);
	glVertex3f(468, 755, -0.2);
	glVertex3f(465, 747, -0.2);
	glVertex3f(461, 738, -0.2);
	glVertex3f(456, 728, -0.2);

	glEnd();

	//linea PIE 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);


	glVertex3f(376, 691, -0.2);
	glVertex3f(371, 684, -0.2);
	glVertex3f(365, 673, -0.2);
	glVertex3f(362, 664, -0.2);
	glVertex3f(359, 659, -0.2);

	glVertex3f(358, 653, -0.2);
	glVertex3f(359, 648, -0.2);
	glVertex3f(363, 649, -0.2);
	glVertex3f(367, 657, -0.2);
	glVertex3f(372, 667, -0.2);
	glVertex3f(378, 676, -0.2);
		glVertex3f(390, 693, -0.2);
	glEnd();
	//linea dedo 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(363, 649, -0.2);
	glVertex3f(363, 649, -0.2);
	glVertex3f(362, 642, -0.2);
	glVertex3f(366, 638, -0.2);
	glVertex3f(372, 640, -0.2);
	glVertex3f(374, 647, -0.2);
	glVertex3f(378, 654, -0.2);
	glVertex3f(382, 659, -0.2);
	glVertex3f(388, 667, -0.2);
	glVertex3f(393, 674, -0.2);
	glVertex3f(396, 678, -0.2);
	glVertex3f(399, 682, -0.2);
	glEnd();

	//linea dedo 3
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(372, 642, -0.2);
	glVertex3f(376, 639, -0.2);
	glVertex3f(381, 642, -0.2);
	glVertex3f(384, 645, -0.2);
	glVertex3f(389, 648, -0.2);
	glVertex3f(398, 656, -0.2);
	glVertex3f(406, 662, -0.2);
	glVertex3f(413, 671, -0.2);
	glVertex3f(420, 677, -0.2);
	glVertex3f(430, 691, -0.2);
	glEnd();

	//linea dedo 4
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(387, 647, -0.2);
	glVertex3f(390, 642, -0.2);
	glVertex3f(395, 635, -0.2);
	glVertex3f(402, 629, -0.2);
	glVertex3f(407, 625, -0.2);
	glVertex3f(414, 621, -0.2);
	glVertex3f(421, 617, -0.2);
	glVertex3f(436, 615, -0.2);
	glVertex3f(446, 614, -0.2);
	glVertex3f(455, 616, -0.2);

	glVertex3f(465, 621, -0.2);
	glVertex3f(472, 626, -0.2);
	glVertex3f(478, 632, -0.2);
	glVertex3f(483, 640, -0.2);
	glEnd();

	//linea dedo izq 1
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(242, 984, -0.2);
	glVertex3f(243, 967, -0.2);
	glVertex3f(244, 956, -0.2);
	glVertex3f(246, 943, -0.2);
	glEnd();

	//linea dedo izq 2
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);

	glVertex3f(261, 951, -0.2);
	glVertex3f(261, 962, -0.2);
	glVertex3f(262, 970, -0.2);
	glVertex3f(262, 979, -0.2);
	glEnd();
	glPopMatrix();
	glutSwapBuffers ( );
  //glFlush();
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
	glOrtho(1000,0,1000,0,0.1,2);
	//glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();									
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (800, 800);	// Tamaño de la Ventana
  glutInitWindowPosition (500, 130);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 3"); // Nombre de la Ventana
  //glutFullScreen     ( );         // Full Screen
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  //glutSpecialFunc     ( arrow_keys );	//Otras
  //glutIdleFunc		  ( display );	//Hace animacíon
  glutMainLoop        ( );          // 

  return 0;
}



