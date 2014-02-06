Maze-Game
=========

Maze Game in OpenGL

#include <windows.h>
#include <GL/glut.h> // glut32.lib glu32.lib opengl32.lib
#include <stdio.h>
GLint x1=142,y1=2,x2=158,y2=18,level=-1,u1,v1,u2,v2,a1,a2,b1,b2;

void cha(float x,float y,void *font,char *st)
{
		glColor3f(1,0.0,0.0);
	char *c;
	glRasterPos2f(x,y);
	for(c=st;*c!='\0';c++)
		glutBitmapCharacter(font,*c);
}

void text0()
{
	glColor3i(0.0,0.0,0.0);
	cha(80.0,115.0,GLUT_BITMAP_TIMES_ROMAN_24,"NEW GAME-1");
	glColor3i(0.0,0.0,0.0);
	cha(100.0,65.0,GLUT_BITMAP_TIMES_ROMAN_24,"QUIT-2");
	glFlush();
	glColor3i(0.0,1.0,0.0);
	cha(100.0,360.0,GLUT_BITMAP_TIMES_ROMAN_24,"INSTRUCTIONS");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,340.0,GLUT_BITMAP_TIMES_ROMAN_24,"*Guide the object through the MAZE to reach FINISH line.");
	glColor3i(0.0,0.0,0.0);
	cha(100.0,320.0,GLUT_BITMAP_TIMES_ROMAN_24,"*After finishing each level press '3' to go to next level.");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,300.0,GLUT_BITMAP_TIMES_ROMAN_24,"*If you go out of path you lose the game.");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,280.0,GLUT_BITMAP_TIMES_ROMAN_24,"*Press UP ARROW to move the object up.");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,260.0,GLUT_BITMAP_TIMES_ROMAN_24,"*Press DOWN ARROW to move the object down.");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,240.0,GLUT_BITMAP_TIMES_ROMAN_24,"*Press LEFT ARROW to move the object left.");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,220.0,GLUT_BITMAP_TIMES_ROMAN_24,"*Press RIGHT ARROW to move the object right.");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,200.0,GLUT_BITMAP_TIMES_ROMAN_24,"*Press '2' to quit the game anytime.");
	glColor3i(0.0,1.0,0.0);
	cha(100.0,180.0,GLUT_BITMAP_TIMES_ROMAN_24,"*Press '1' to start a new game aytime.");
	glFlush();
}




void text1()
{
	glColor3i(0.0,0.0,0.0);
	cha(80.0,115.0,GLUT_BITMAP_TIMES_ROMAN_24,"NEW GAME-1");
	glColor3i(0.0,0.0,0.0);
	cha(100.0,65.0,GLUT_BITMAP_TIMES_ROMAN_24,"QUIT-2");
}

void text2()
{
	glColor3i(0.0,0.0,0.0);
	cha(100.0,5.0,GLUT_BITMAP_TIMES_ROMAN_24,"START");
	glColor3i(0.0,0.0,0.0);
	cha(405.0,382.0,GLUT_BITMAP_TIMES_ROMAN_24,"FINISH");
}

void text3()
{
	glClearColor(1.0f, 0.5f, 0.5f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3i(0.0,0.0,0.0);
	cha(200.0,290.0,GLUT_BITMAP_TIMES_ROMAN_24,"YOU LOSE");
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,50);
		glVertex2i(250,50);
		glVertex2i(250,90);
		glVertex2i(50,90);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,100);
		glVertex2i(250,100);
		glVertex2i(250,140);
		glVertex2i(50,140);
	glEnd();
	text1();
	glFlush();	
}
void text4()
{
	glClearColor(1.0f, 0.5f, 0.5f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3i(0.0,0.0,0.0);
	cha(200.0,290.0,GLUT_BITMAP_TIMES_ROMAN_24,"YOU WIN");
	glColor3i(0.0,0.0,0.0);
	glFlush();
	cha(80.0,165.0,GLUT_BITMAP_TIMES_ROMAN_24,"NEXT LEVEL-3");
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,150);
		glVertex2i(250,150);
		glVertex2i(250,190);
		glVertex2i(50,190);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,50);
		glVertex2i(250,50);
		glVertex2i(250,90);
		glVertex2i(50,90);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,100);
		glVertex2i(250,100);
		glVertex2i(250,140);
		glVertex2i(50,140);
	glEnd();
	text1();
	glFlush();
}
void text5()
{
	glClearColor(1.0f, 0.5f, 0.5f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3i(0.0,0.0,0.0);
	cha(200.0,290.0,GLUT_BITMAP_TIMES_ROMAN_24,"MAZE MASTER");
	glColor3i(0.0,0.0,0.0);
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,50);
		glVertex2i(250,50);
		glVertex2i(250,90);
		glVertex2i(50,90);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,100);
		glVertex2i(250,100);
		glVertex2i(250,140);
		glVertex2i(50,140);
	glEnd();
	text1();
	glFlush();
}

void display0(int u1,int v1,int u2,int v2)
{
	glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(140,40);
	glVertex2i(140,160);
	glVertex2i(340,160);
	glVertex2i(340,300);
	glVertex2i(80,300);
	glVertex2i(80,280);
	glVertex2i(240,280);
	glVertex2i(240,180);
	glVertex2i(100,180);
	glVertex2i(100,40);
	glVertex2i(80,40);
	glVertex2i(80,200);
	glVertex2i(220,200);
	glVertex2i(220,220);
	glVertex2i(20,220);
	glVertex2i(20,360);
	glVertex2i(140,360);
	glVertex2i(140,320);
	glVertex2i(280,320);
	glVertex2i(280,360);
	glVertex2i(420,360);
	glVertex2i(420,100);
	glVertex2i(160,100);
	glVertex2i(160,40);
	glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(160,120);
	glVertex2i(400,120);
	glVertex2i(400,340);
	glVertex2i(300,340);
	glVertex2i(300,320);
	glVertex2i(360,320);
	glVertex2i(360,140);
	glVertex2i(160,140);
	glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(220,240);
	glVertex2i(40,240);
	glVertex2i(40,340);
	glVertex2i(120,340);
	glVertex2i(120,320);
	glVertex2i(60,320);
	glVertex2i(60,260);
	glVertex2i(220,260);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(70,60);
	glVertex2i(110,60);
	glVertex2i(90,70);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(80,40);
	glVertex2i(100,40);
	glVertex2i(100,60);
	glVertex2i(80,60);
	glEnd();
	glFlush();
	glColor3i(0.0,0.0,0.0);
	cha(130.0,25.0,GLUT_BITMAP_TIMES_ROMAN_24,"START");
	glColor3i(0.0,0.0,0.0);
	cha(70.0,25.0,GLUT_BITMAP_TIMES_ROMAN_24,"FINISH");
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(u1,v1);
	glVertex2i(u2,v1);
	glVertex2i(u2,v2);
	glVertex2i(u1,v2);
	glEnd();
	glFlush();
	glColor3i(0.0,0.0,0.0);
	cha(220.0,360.0,GLUT_BITMAP_TIMES_ROMAN_24,"LEVEL 1");
	glFlush();
}
void display1(int x1,int y1,int x2,int y2)
{
	glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(140,0);
	glVertex2i(140,20);
	glVertex2i(20,20);
	glVertex2i(20,40);
	glVertex2i(60,40);
	glVertex2i(60,80);
	glVertex2i(120,80);
	glVertex2i(120,140);
	glVertex2i(80,140);
	glVertex2i(80,200);
	glVertex2i(120,200);
	glVertex2i(120,220);
	glVertex2i(20,220);
	glVertex2i(20,320);
	glVertex2i(180,320);
	glVertex2i(180,380);
	glVertex2i(380,380);
	glVertex2i(380,340);
	glVertex2i(420,340);
	glVertex2i(420,380);
	glVertex2i(440,380);
	glVertex2i(440,320);
	glVertex2i(360,320);
	glVertex2i(360,360);
	glVertex2i(200,360);
	glVertex2i(200,300);
	glVertex2i(40,300);
	glVertex2i(40,240);
	glVertex2i(140,240);
	glVertex2i(140,180);
	glVertex2i(100,180);
	glVertex2i(100,160);
	glVertex2i(140,160);
	glVertex2i(140,60);
	glVertex2i(80,60);
	glVertex2i(80,40);
	glVertex2i(180,40);
	glVertex2i(180,60);
	glVertex2i(160,60);
	glVertex2i(160,260);
	glVertex2i(60,260);
	glVertex2i(60,280);
	glVertex2i(220,280);
	glVertex2i(220,340);
	glVertex2i(320,340);
	glVertex2i(320,300);
	glVertex2i(440,300);
	glVertex2i(440,280);
	glVertex2i(320,280);
	glVertex2i(320,180);
	glVertex2i(200,180);
	glVertex2i(200,240);
	glVertex2i(280,240);
	glVertex2i(280,220);
	glVertex2i(220,220);
	glVertex2i(220,200);
	glVertex2i(300,200);
	glVertex2i(300,320);
	glVertex2i(260,320);
	glVertex2i(260,260);
	glVertex2i(180,260);
	glVertex2i(180,80);
	glVertex2i(220,80);
	glVertex2i(220,60);
	glVertex2i(300,60);
	glVertex2i(300,100);
	glVertex2i(260,100);
	glVertex2i(260,160);
	glVertex2i(360,160);
	glVertex2i(360,260);
	glVertex2i(440,260);
	glVertex2i(440,60);
	glVertex2i(380,60);
	glVertex2i(380,40);
	glVertex2i(360,40);
	glVertex2i(360,140);
	glVertex2i(280,140);
	glVertex2i(280,120);
	glVertex2i(320,120);
	glVertex2i(320,40);
	glVertex2i(220,40);
	glVertex2i(220,20);
	glVertex2i(160,20);
	glVertex2i(160,0);
	glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(380,240);
	glVertex2i(420,240);
	glVertex2i(420,80);
	glVertex2i(380,80);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(x1,y1);
	glVertex2i(x2,y1);
	glVertex2i(x2,y2);
	glVertex2i(x1,y2);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(410,380);
	glVertex2i(450,380);
	glVertex2i(430,390);
	glEnd();
	glFlush();
	text2();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(420,360);
	glVertex2i(440,360);
	glVertex2i(440,380);
	glVertex2i(420,380);
	glEnd();
	glFlush();
	glColor3i(0.0,0.0,0.0);
	cha(220.0,390.0,GLUT_BITMAP_TIMES_ROMAN_24,"LEVEL 2");
	glFlush();
}
void display2(int a1,int b1,int a2,int b2)
{
	glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(380,310);
	glVertex2i(330,310);
	glVertex2i(330,240);
	glVertex2i(260,240);
	glVertex2i(260,320);
	glVertex2i(240,320);
	glVertex2i(240,230);
	glVertex2i(380,230);
	glVertex2i(380,220);
	glVertex2i(340,220);
	glVertex2i(340,180);
	glVertex2i(250,180);
	glVertex2i(250,50);
	glVertex2i(370,50);
	glVertex2i(370,160);
	glVertex2i(270,160);
	glVertex2i(270,70);
	glVertex2i(320,70);
	glVertex2i(320,120);
	glVertex2i(280,120);
	glVertex2i(280,130);
	glVertex2i(330,130);
	glVertex2i(330,60);
	glVertex2i(260,60);
	glVertex2i(260,170);
	glVertex2i(380,170);
	glVertex2i(380,40);
	glVertex2i(260,40);
	glVertex2i(260,20);
	glVertex2i(110,20);
	glVertex2i(110,60);
	glVertex2i(80,60);
	glVertex2i(80,20);
	glVertex2i(50,20);
	glVertex2i(50,50);
	glVertex2i(20,50);
	glVertex2i(20,140);
	glVertex2i(70,140);
	glVertex2i(70,130);
	glVertex2i(130,130);
	glVertex2i(130,180);
	glVertex2i(150,180);
	glVertex2i(150,170);
	glVertex2i(140,170);
	glVertex2i(140,110);
	glVertex2i(150,110);
	glVertex2i(150,160);
	glVertex2i(190,160);
	glVertex2i(190,330);
	glVertex2i(200,330);
	glVertex2i(200,230);
	glVertex2i(210,230);
	glVertex2i(210,340);
	glVertex2i(180,340);
	glVertex2i(180,170);
	glVertex2i(160,170);
	glVertex2i(160,180);
	glVertex2i(170,180);
	glVertex2i(170,210);
	glVertex2i(160,210);
	glVertex2i(160,190);
	glVertex2i(50,190);
	glVertex2i(50,170);
	glVertex2i(100,170);
	glVertex2i(100,180);
	glVertex2i(110,180);
	glVertex2i(110,160);
	glVertex2i(40,160);
	glVertex2i(40,200);
	glVertex2i(150,200);
	glVertex2i(150,230);
	glVertex2i(110,230);
	glVertex2i(110,210);
	glVertex2i(30,210);
	glVertex2i(30,220);
	glVertex2i(100,220);
	glVertex2i(100,230);
	glVertex2i(30,230);
	glVertex2i(30,290);
	glVertex2i(70,290);
	glVertex2i(70,320);
	glVertex2i(60,320);
	glVertex2i(60,300);
	glVertex2i(50,300);
	glVertex2i(50,320);
	glVertex2i(40,320);
	glVertex2i(40,310);
	glVertex2i(30,310);
	glVertex2i(30,330);
	glVertex2i(50,330);
	glVertex2i(50,340);
	glVertex2i(60,340);
	glVertex2i(60,330);
	glVertex2i(80,330);
	glVertex2i(80,280);
	glVertex2i(40,280);
	glVertex2i(40,240);
	glVertex2i(60,240);
	glVertex2i(60,260);
	glVertex2i(150,260);
	glVertex2i(150,310);
	glVertex2i(90,310);
	glVertex2i(90,340);
	glVertex2i(140,340);
	glVertex2i(140,350);
	glVertex2i(150,350);
	glVertex2i(150,330);
	glVertex2i(100,330);
	glVertex2i(100,320);
	glVertex2i(170,320);
	glVertex2i(170,350);
	glVertex2i(220,350);
	glVertex2i(220,220);
	glVertex2i(200,220);
	glVertex2i(200,140);
	glVertex2i(160,140);
	glVertex2i(160,80);
	glVertex2i(190,80);
	glVertex2i(190,120);
	glVertex2i(180,120);
	glVertex2i(180,90);
	glVertex2i(170,90);
	glVertex2i(170,130);
	glVertex2i(200,130);
	glVertex2i(200,80);
	glVertex2i(240,80);
	glVertex2i(240,130);
	glVertex2i(220,130);
	glVertex2i(220,210);
	glVertex2i(280,210);
	glVertex2i(280,190);
	glVertex2i(330,190);
	glVertex2i(330,220);
	glVertex2i(230,220);
	glVertex2i(230,330);
	glVertex2i(260,330);
	glVertex2i(260,350);
	glVertex2i(270,350);
	glVertex2i(270,250);
	glVertex2i(320,250);
	glVertex2i(320,320);
	glVertex2i(380,320);
	glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(70,250);
	glVertex2i(160,250);
	glVertex2i(160,310);
	glVertex2i(170,310);
	glVertex2i(170,220);
	glVertex2i(160,220);
	glVertex2i(160,240);
	glVertex2i(70,240);
	glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(230,200);
	glVertex2i(270,200);
	glVertex2i(270,190);
	glVertex2i(240,190);
	glVertex2i(240,140);
	glVertex2i(230,140);
	glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(240,70);
	glVertex2i(240,40);
	glVertex2i(250,40);
	glVertex2i(250,30);
	glVertex2i(120,30);
	glVertex2i(120,70);
	glVertex2i(70,70);
	glVertex2i(70,30);
	glVertex2i(60,30);
	glVertex2i(60,60);
	glVertex2i(30,60);
	glVertex2i(30,80);
	glVertex2i(140,80);
	glVertex2i(140,90);
	glVertex2i(150,90);
	glVertex2i(150,70);
	glEnd();
	glFlush();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(60,130);
	glVertex2i(60,120);
	glVertex2i(130,120);
	glVertex2i(130,90);
	glVertex2i(30,90);
	glVertex2i(30,130);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(50,340);
	glVertex2i(60,340);
	glVertex2i(60,350);
	glVertex2i(50,350);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(45,350);
	glVertex2i(55,360);
	glVertex2i(65,350);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a1,b1);
	glVertex2i(a1,b2);
	glVertex2i(a2,b2);
	glVertex2i(a2,b1);
	glEnd();
	glFlush();
	glColor3i(0.0,0.0,0.0);
	cha(390.0,310.0,GLUT_BITMAP_TIMES_ROMAN_24,"START");
	glColor3i(0.0,0.0,0.0);
	cha(35.0,365.0,GLUT_BITMAP_TIMES_ROMAN_24,"FINISH");
	glFlush();
	glColor3i(0.0,0.0,0.0);
	cha(220.0,380.0,GLUT_BITMAP_TIMES_ROMAN_24,"LEVEL 3");
	glFlush();
}




void key(unsigned char k,int x,int y)
{
	if(k=='1')
	{
		level=0;
		u1=142,u2=158,v1=42,v2=58;
		display0(u1,v1,u2,v2);
	}
	if(k=='2')
		exit(0);
	if(k=='3')
	{
		if(level==1)
		{
			x1=142,y1=2,x2=158,y2=18;
			display1(x1,y1,x2,y2);
		}
		else if(level==2)
		{
			a1=371,a2=379,b1=311,b2=319;
			display2(a1,b1,a2,b2);
		}
	}
}
void specialkey(int k,int x,int y)
{
	if(k==GLUT_KEY_UP)
	{
		if(level==0)
		{
				v1=v1+20;
				v2=v2+20;
				if (u1<20||u2>420||v1<40||v2>360||(u1>40&&u2<220&&v1>240&&v2<260)||(u1>40&&u2<60&&v1>260&&v2<340)||(u1>60&&u2<120&&v1>320&&v2<340)||(u1>80&&u2<340&&v1>280&&v2<300)||(u1>240&&u2<340&&v1>160&&v2<280)||(u1>100&&u2<240&&v1>160&&v2<180)||(u1>100&&u2<140&&v1>40&&v2<160)||(u1>160&&u2<400&&v1>120&&v2<140)||(u1>360&&u2<400&&v1>140&&v2<320)||(u1>300&&u2<400&&v1>320&&v2<340)||(u1>160&&u2<420&&v1>40&&v2<100)||(u1>20&&u2<220&&v1>200&&v2<220)||(u1>20&&u2<80&&v1>40&&v2<200)||(u1>140&&u2<280&&v1>320&&v2<360))
				{
					u1=-360,v1=-360,u2=-360,v2=-360;
					text3();
					glFlush();
				}
				else if(u1>80 && u2<100 && v1>40 && v2<60)
				{
					level=1;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}	
				else
				{
					display0(u1,v1,u2,v2);
				}
		}

		else if(level==1)
		{
				y1=y1+20;
				y2=y2+20;
				if (x1<20||x2>440||y1<0||y2>380||(x1>80 && x2<120 && y1>200 && y2<220)||(x1>80 && x2<180 && y1>40 && y2<60)||(x1>140 && x2<160 && y1>60 && y2<260)||(x1>100 && x2<140 && y1>160 && y2<180)||(x1>40 && x2<140 && y1>240 && y2<260)||(x1>40 && x2<60 && y1>260 && y2<300)||(x1>60 && x2<220 && y1>280 && y2<300)||(x1>200 && x2<220 && y1>300 && y2<360)||(x1>220 && x2<360 && y1>340 && y2<360)||(x1>320 && x2<360 && y1>300 && y2<360)||(x1>320 && x2<440 && y1>300 && y2<320)||(x1>320 && x2<440 && y1>260 && y2<280)||(x1>320 && x2<360 && y1>160 && y2<280)||(x1>180 && x2<360 && y1>160 && y2<180)||(x1>180 && x2<200 && y1>180 && y2<260)||(x1>200 && x2<300 && y1>240 && y2<260)||(x1>260 && x2<300 && y1>260 && y2<320)||(x1>280 && x2<300 && y1>200 && y2<240)||(x1>220 && x2<280 && y1>200 && y2<220)||(x1>180 && x2<260 && y1>80 && y2<160)||(x1>220 && x2<300 && y1>60 && y2<100)||(x1>380 && x2<420 && y1>80 && y2<240)||(x1>280 && x2<360 && y1>120 && y2<140)||(x1>320 && x2<360 && y1>40 && y2<120)||(x1>220 && x2<440 && y1>20 && y2<40)||(x1>380 && x2<440 && y1>40 && y2<60)||(x1>160 && x2<440 && y1>0 && y2<20)||(x1>20 && x2<140 && y1>0 && y2<20)||(x1>20 && x2<60 && y1>40 && y2<140)||(x1>60 && x2<120 && y1>80 && y2<140)||(x1>60 && x2<120 && y1>80 && y2<140)||(x1>20 && x2<80 && y1>140 && y2<220)||(x1>20 && x2<180 && y1>320 && y2<380)||(x1>380 && x2<420 && y1>340 && y2<380))
				{
					level=0;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text3();
					glFlush();
				}
				else if(x1>420 && x2<440 && y1>360 && y2<380)
				{
					level=2;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}	
				else
				{
					display1(x1,y1,x2,y2);
				}
		}
		else if(level==2)
		{
				b1=b1+10;
				b2=b2+10;
				if(a1<20||a2>380||b1<20||b2>350||(a1>120&&a2<250&&b1>30&&b2<40)||(a1>120&&a2<240&&b1>40&&b2<70)||(a1>140&&a2<150&&b1>70&&b2<90)||(a1>30&&a2<140&&b1>70&&b2<80)||(a1>30&&a2<70&&b1>60&&b2<80)||(a1>60&&a2<70&&b1>30&&b2<60)||(a1>30&&a2<130&&b1>90&&b2<120)||(a1>30&&a2<60&&b1>120&&b2<130)||(a1>20&&a2<50&&b1>20&&b2<50)||(a1>80&&a2<110&&b1>20&&b2<60)||(a1>260&&a2<380&&b1>20&&b2<40)||(a1>250&&a2<370&&b1>50&&b2<60)||(a1>330&&a2<370&&b1>60&&b2<160)||(a1>270&&a2<330&&b1>130&&b2<160)||(a1>270&&a2<280&&b1>70&&b2<130)||(a1>280&&a2<320&&b1>70&&b2<120)||(a1>250&&a2<260&&b1>60&&b2<180)||(a1>260&&a2<380&&b1>170&&b2<180)||(a1>340&&a2<380&&b1>180&&b2<220)||(a1>200&&a2<240&&b1>80&&b2<130)||(a1>200&&a2<220&&b1>130&&b2<220)||(a1>160&&a2<200&&b1>130&&b2<140)||(a1>160&&a2<190&&b1>80&&b2<90)||(a1>160&&a2<170&&b1>80&&b2<140)||(a1>180&&a2<190&&b1>90&&b2<120)||(a1>140&&a2<150&&b1>110&&b2<170)||(a1>150&&a2<190&&b1>160&&b2<170)||(a1>180&&a2<190&&b1>160&&b2<340)||(a1>190&&a2<210&&b1>330&&b2<340)||(a1>200&&a2<210&&b1>230&&b2<330)||(a1>20&&a2<130&&b1>140&&b2<160)||(a1>110&&a2<130&&b1>160&&b2<190)||(a1>50&&a2<100&&b1>170&&b2<190)||(a1>100&&a2<170&&b1>180&&b2<190)||(a1>160&&a2<170&&b1>180&&b2<210)||(a1>20&&a2<30&&b1>160&&b2<350)||(a1>30&&a2<40&&b1>160&&b2<210)||(a1>40&&a2<150&&b1>200&&b2<210)||(a1>110&&a2<150&&b1>200&&b2<230)||(a1>40&&a2<60&&b1>240&&b2<280)||(a1>40&&a2<150&&b1>260&&b2<280)||(a1>80&&a2<150&&b1>280&&b2<310)||(a1>80&&a2<90&&b1>310&&b2<340)||(a1>60&&a2<80&&b1>330&&b2<340)||(a1>60&&a2<140&&b1>340&&b2<350)||(a1>30&&a2<50&&b1>330&&b2<350)||(a1>100&&a2<170&&b1>320&&b2<330)||(a1>150&&a2<170&&b1>320&&b2<350)||(a1>280&&a2<330&&b1>190&&b2<220)||(a1>220&&a2<280&&b1>210&&b2<220)||(a1>220&&a2<230&&b1>220&&b2<350)||(a1>230&&a2<260&&b1>330&&b2<350)||(a1>270&&a2<320&&b1>250&&b2<350)||(a1>320&&a2<380&&b1>320&&b2<350)||(a1>330&&a2<380&&b1>230&&b2<310)||(a1>240&&a2<330&&b1>230&&b2<240)||(a1>240&&a2<260&&b1>240&&b2<320)||(a1>30&&a2<50&&b1>290&&b2<310)||(a1>50&&a2<70&&b1>290&&b2<300)||(a1>60&&a2<70&&b1>290&&b2<320)||(a1>40&&a2<50
&&b1>300&&b2<320)||(a1>230&&a2<240&&b1>140&&b2<200)||(a1>240&&a2<270&&b1>190&&b2<200)||(a1>150&&a2<160&&b1>160&&b2<190)||(a1>30&&a2<100&&b1>220&&b2<230)||(a1>70&&a2<160&&b1>240&&b2<250)||(a1>160&&a2<170&&b1>220&&b2<310))
				{
					level=0;
					a1=-360,b1=-360,a2=-360,b2=-360;
					text3();
					glFlush();
				}
				else if(a1>50 && a2<60 && b1>340 && b2<350)
				{
					a1=-360,b1=-360,a2=-360,b2=-360;
					text5();
					glFlush();
				}	
				else
				{
					display2(a1,b1,a2,b2);
				}
		}
	}

	if(k==GLUT_KEY_DOWN)
	{
		if(level==0)
		{
				v1=v1-20;
				v2=v2-20;
				if (u1<20||u2>420||v1<40||v2>360||(u1>40&&u2<220&&v1>240&&v2<260)||(u1>40&&u2<60&&v1>260&&v2<340)||(u1>60&&u2<120&&v1>320&&v2<340)||(u1>80&&u2<340&&v1>280&&v2<300)||(u1>240&&u2<340&&v1>160&&v2<280)||(u1>100&&u2<240&&v1>160&&v2<180)||(u1>100&&u2<140&&v1>40&&v2<160)||(u1>160&&u2<400&&v1>120&&v2<140)||(u1>360&&u2<400&&v1>140&&v2<320)||(u1>300&&u2<400&&v1>320&&v2<340)||(u1>160&&u2<420&&v1>40&&v2<100)||(u1>20&&u2<220&&v1>200&&v2<220)||(u1>20&&u2<80&&v1>40&&v2<200)||(u1>140&&u2<280&&v1>320&&v2<360))
				{
					u1=-360,v1=-360,u2=-360,v2=-360;
					text3();
					glFlush();
				}
				else if(u1>80 && u2<100 && v1>40 && v2<60)
				{
					level=1;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}	
				else
				{
					display0(u1,v1,u2,v2);
				}
		}
		else if(level==1)
		{
				y1=y1-20;
				y2=y2-20;
				if((x1<20||x2>440||y1<0||y2>380)||(x1>80 && x2<120 && y1>200 && y2<220)||(x1>80&&x2<180&&y1>40&&y2<60)||(x1>140&&x2<160&&y1>60&&y2<260)||(x1>100&&x2<140&&y1>160&&y2<180)||(x1>40&&x2<140&&y1>240&&y2<260)||(x1>40&&x2<60&&y1>260&&y2<300)||(x1>60&&x2<220&&y1>280&&y2<300)||(x1>200&&x2<220&&y1>300&&y2<360)||(x1>220&&x2<360&&y1>340&&y2<360)||(x1>320&&x2<360&&y1>300&&y2<360)||(x1>320&&x2<440&&y1>300&&y2<320)||(x1>320&&x2<440&&y1>260&&y2<280)||(x1>320&&x2<360&&y1>160&&y2<280)||(x1>180&&x2<360&&y1>160&&y2<180)||(x1>180&&x2<200&&y1>180&&y2<260)||(x1>200&&x2<300&&y1>240&&y2<260)||(x1>260&&x2<300&&y1>260&&y2<320)||(x1>280&&x2<300&&y1>200&&y2<240)||(x1>220&&x2<280&&y1>200&&y2<220)||(x1>180&&x2<260&&y1>80&&y2<160)||(x1>220&&x2<300&&y1>60&&y2<100)||(x1>380&&x2<420&&y1>80&&y2<240)||(x1>280&&x2<360&&y1>120&&y2<140)||(x1>320&&x2<360&&y1>40&&y2<120)||(x1>220&&x2<440&&y1>20&&y2<40)||(x1>380&&x2<440&&y1>40&&y2<60)||(x1>160&&x2<440&&y1>0&&y2<20)||(x1>20&&x2<140&&y1>0&&y2<20)||(x1>20&&x2<60&&y1>40&&y2<140)||(x1>60&&x2<120&&y1>80&&y2<140)||(x1>60&&x2<120&&y1>80&&y2<140)||(x1>20&&x2<80&&y1>140&&y2<220)||(x1>20&&x2<180&&y1>320&&y2<380)||(x1>380&&x2<420&&y1>340&&y2<380))
				{
					level=0;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text3();
					glFlush();
				}
				else if(x1>420 && x2<440 && y1>360 && y2<380)
				{
					level=2;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}
				else
				{
					display1(x1,y1,x2,y2);
				}
		}
		else if(level==2)
		{
				b1=b1-10;
				b2=b2-10;
				if(a1<20||a2>380||b1<20||b2>350||(a1>120&&a2<250&&b1>30&&b2<40)||(a1>120&&a2<240&&b1>40&&b2<70)||(a1>140&&a2<150&&b1>70&&b2<90)||(a1>30&&a2<140&&b1>70&&b2<80)||(a1>30&&a2<70&&b1>60&&b2<80)||(a1>60&&a2<70&&b1>30&&b2<60)||(a1>30&&a2<130&&b1>90&&b2<120)||(a1>30&&a2<60&&b1>120&&b2<130)||(a1>20&&a2<50&&b1>20&&b2<50)||(a1>80&&a2<110&&b1>20&&b2<60)||(a1>260&&a2<380&&b1>20&&b2<40)||(a1>250&&a2<370&&b1>50&&b2<60)||(a1>330&&a2<370&&b1>60&&b2<160)||(a1>270&&a2<330&&b1>130&&b2<160)||(a1>270&&a2<280&&b1>70&&b2<130)||(a1>280&&a2<320&&b1>70&&b2<120)||(a1>250&&a2<260&&b1>60&&b2<180)||(a1>260&&a2<380&&b1>170&&b2<180)||(a1>340&&a2<380&&b1>180&&b2<220)||(a1>200&&a2<240&&b1>80&&b2<130)||(a1>200&&a2<220&&b1>130&&b2<220)||(a1>160&&a2<200&&b1>130&&b2<140)||(a1>160&&a2<190&&b1>80&&b2<90)||(a1>160&&a2<170&&b1>80&&b2<140)||(a1>180&&a2<190&&b1>90&&b2<120)||(a1>140&&a2<150&&b1>110&&b2<170)||(a1>150&&a2<190&&b1>160&&b2<170)||(a1>180&&a2<190&&b1>160&&b2<340)||(a1>190&&a2<210&&b1>330&&b2<340)||(a1>200&&a2<210&&b1>230&&b2<330)||(a1>20&&a2<130&&b1>140&&b2<160)||(a1>110&&a2<130&&b1>160&&b2<190)||(a1>50&&a2<100&&b1>170&&b2<190)||(a1>100&&a2<170&&b1>180&&b2<190)||(a1>160&&a2<170&&b1>180&&b2<210)||(a1>20&&a2<30&&b1>160&&b2<350)||(a1>30&&a2<40&&b1>160&&b2<210)||(a1>40&&a2<150&&b1>200&&b2<210)||(a1>110&&a2<150&&b1>200&&b2<230)||(a1>40&&a2<60&&b1>240&&b2<280)||(a1>40&&a2<150&&b1>260&&b2<280)||(a1>80&&a2<150&&b1>280&&b2<310)||(a1>80&&a2<90&&b1>310&&b2<340)||(a1>60&&a2<80&&b1>330&&b2<340)||(a1>60&&a2<140&&b1>340&&b2<350)||(a1>30&&a2<50&&b1>330&&b2<350)||(a1>100&&a2<170&&b1>320&&b2<330)||(a1>150&&a2<170&&b1>320&&b2<350)||(a1>280&&a2<330&&b1>190&&b2<220)||(a1>220&&a2<280&&b1>210&&b2<220)||(a1>220&&a2<230&&b1>220&&b2<350)||(a1>230&&a2<260&&b1>330&&b2<350)||(a1>270&&a2<320&&b1>250&&b2<350)||(a1>320&&a2<380&&b1>320&&b2<350)||(a1>330&&a2<380&&b1>230&&b2<310)||(a1>240&&a2<330&&b1>230&&b2<240)||(a1>240&&a2<260&&b1>240&&b2<320)||(a1>30&&a2<50&&b1>290&&b2<310)||(a1>50&&a2<70&&b1>290&&b2<300)||(a1>60&&a2<70&&b1>290&&b2<320)||(a1>40&&a2<50
&&b1>300&&b2<320)||(a1>230&&a2<240&&b1>140&&b2<200)||(a1>240&&a2<270&&b1>190&&b2<200)||(a1>150&&a2<160&&b1>160&&b2<190)||(a1>30&&a2<100&&b1>220&&b2<230)||(a1>70&&a2<160&&b1>240&&b2<250)||(a1>160&&a2<170&&b1>220&&b2<310))
				{
					level=0;
					a1=-360,b1=-360,a2=-360,b2=-360;
					text3();
					glFlush();
				}
				else if(a1>50 && a2<60 && b1>340 && b2<350)
				{
					a1=-360,b1=-360,a2=-360,b2=-360;
					text5();
					glFlush();
				}	
				else
				{
					display2(a1,b1,a2,b2);
				}
		}
	}
	if(k==GLUT_KEY_LEFT)
	{
		if(level==0)
		{
				u1=u1-20;
				u2=u2-20;
				if (u1<20||u2>420||v1<40||v2>360||(u1>40&&u2<220&&v1>240&&v2<260)||(u1>40&&u2<60&&v1>260&&v2<340)||(u1>60&&u2<120&&v1>320&&v2<340)||(u1>80&&u2<340&&v1>280&&v2<300)||(u1>240&&u2<340&&v1>160&&v2<280)||(u1>100&&u2<240&&v1>160&&v2<180)||(u1>100&&u2<140&&v1>40&&v2<160)||(u1>160&&u2<400&&v1>120&&v2<140)||(u1>360&&u2<400&&v1>140&&v2<320)||(u1>300&&u2<400&&v1>320&&v2<340)||(u1>160&&u2<420&&v1>40&&v2<100)||(u1>20&&u2<220&&v1>200&&v2<220)||(u1>20&&u2<80&&v1>40&&v2<200)||(u1>140&&u2<280&&v1>320&&v2<360))
				{
					u1=-360,v1=-360,u2=-360,v2=-360;
					text3();
					glFlush();
				}
				else if(u1>80 && u2<100 && v1>40 && v2<60)
				{
					level=1;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}	
				else
				{
					display0(u1,v1,u2,v2);
				}
		}
		else if(level==1)
		{
				x1=x1-20;
				x2=x2-20;
				if(x1<20||x2>440||y1<0||y2>380||(x1>80 && x2<120 && y1>200 && y2<220)||(x1>80&&x2<180&&y1>40&&y2<60)||(x1>140&&x2<160&&y1>60&&y2<260)||(x1>100&&x2<140&&y1>160&&y2<180)||(x1>40&&x2<140&&y1>240&&y2<260)||(x1>40&&x2<60&&y1>260&&y2<300)||(x1>60&&x2<220&&y1>280&&y2<300)||(x1>200&&x2<220&&y1>300&&y2<360)||(x1>220&&x2<360&&y1>340&&y2<360)||(x1>320&&x2<360&&y1>300&&y2<360)||(x1>320&&x2<440&&y1>300&&y2<320)||(x1>320&&x2<440&&y1>260&&y2<280)||(x1>320&&x2<360&&y1>160&&y2<280)||(x1>180&&x2<360&&y1>160&&y2<180)||(x1>180&&x2<200&&y1>180&&y2<260)||(x1>200&&x2<300&&y1>240&&y2<260)||(x1>260&&x2<300&&y1>260&&y2<320)||(x1>280&&x2<300&&y1>200&&y2<240)||(x1>220&&x2<280&&y1>200&&y2<220)||(x1>180&&x2<260&&y1>80&&y2<160)||(x1>220&&x2<300&&y1>60&&y2<100)||(x1>380&&x2<420&&y1>80&&y2<240)||(x1>280&&x2<360&&y1>120&&y2<140)||(x1>320&&x2<360&&y1>40&&y2<120)||(x1>220&&x2<440&&y1>20&&y2<40)||(x1>380&&x2<440&&y1>40&&y2<60)||(x1>160&&x2<440&&y1>0&&y2<20)||(x1>20&&x2<140&&y1>0&&y2<20)||(x1>20&&x2<60&&y1>40&&y2<140)||(x1>60&&x2<120&&y1>80&&y2<140)||(x1>60&&x2<120&&y1>80&&y2<140)||(x1>20&&x2<80&&y1>140&&y2<220)||(x1>20&&x2<180&&y1>320&&y2<380)||(x1>380&&x2<420&&y1>340&&y2<380))
				{
					level=0;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text3();
					glFlush();
				}
				else if(x1>420 && x2<440 && y1>360 && y2<380)
				{
					level=2;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}
				else
				{
					display1(x1,y1,x2,y2);
				}
		}
		else if(level==2)
		{
				a1=a1-10;
				a2=a2-10;
				if(a1<20||a2>380||b1<20||b2>350||(a1>120&&a2<250&&b1>30&&b2<40)||(a1>120&&a2<240&&b1>40&&b2<70)||(a1>140&&a2<150&&b1>70&&b2<90)||(a1>30&&a2<140&&b1>70&&b2<80)||(a1>30&&a2<70&&b1>60&&b2<80)||(a1>60&&a2<70&&b1>30&&b2<60)||(a1>30&&a2<130&&b1>90&&b2<120)||(a1>30&&a2<60&&b1>120&&b2<130)||(a1>20&&a2<50&&b1>20&&b2<50)||(a1>80&&a2<110&&b1>20&&b2<60)||(a1>260&&a2<380&&b1>20&&b2<40)||(a1>250&&a2<370&&b1>50&&b2<60)||(a1>330&&a2<370&&b1>60&&b2<160)||(a1>270&&a2<330&&b1>130&&b2<160)||(a1>270&&a2<280&&b1>70&&b2<130)||(a1>280&&a2<320&&b1>70&&b2<120)||(a1>250&&a2<260&&b1>60&&b2<180)||(a1>260&&a2<380&&b1>170&&b2<180)||(a1>340&&a2<380&&b1>180&&b2<220)||(a1>200&&a2<240&&b1>80&&b2<130)||(a1>200&&a2<220&&b1>130&&b2<220)||(a1>160&&a2<200&&b1>130&&b2<140)||(a1>160&&a2<190&&b1>80&&b2<90)||(a1>160&&a2<170&&b1>80&&b2<140)||(a1>180&&a2<190&&b1>90&&b2<120)||(a1>140&&a2<150&&b1>110&&b2<170)||(a1>150&&a2<190&&b1>160&&b2<170)||(a1>180&&a2<190&&b1>160&&b2<340)||(a1>190&&a2<210&&b1>330&&b2<340)||(a1>200&&a2<210&&b1>230&&b2<330)||(a1>20&&a2<130&&b1>140&&b2<160)||(a1>110&&a2<130&&b1>160&&b2<190)||(a1>50&&a2<100&&b1>170&&b2<190)||(a1>100&&a2<170&&b1>180&&b2<190)||(a1>160&&a2<170&&b1>180&&b2<210)||(a1>20&&a2<30&&b1>160&&b2<350)||(a1>30&&a2<40&&b1>160&&b2<210)||(a1>40&&a2<150&&b1>200&&b2<210)||(a1>110&&a2<150&&b1>200&&b2<230)||(a1>40&&a2<60&&b1>240&&b2<280)||(a1>40&&a2<150&&b1>260&&b2<280)||(a1>80&&a2<150&&b1>280&&b2<310)||(a1>80&&a2<90&&b1>310&&b2<340)||(a1>60&&a2<80&&b1>330&&b2<340)||(a1>60&&a2<140&&b1>340&&b2<350)||(a1>30&&a2<50&&b1>330&&b2<350)||(a1>100&&a2<170&&b1>320&&b2<330)||(a1>150&&a2<170&&b1>320&&b2<350)||(a1>280&&a2<330&&b1>190&&b2<220)||(a1>220&&a2<280&&b1>210&&b2<220)||(a1>220&&a2<230&&b1>220&&b2<350)||(a1>230&&a2<260&&b1>330&&b2<350)||(a1>270&&a2<320&&b1>250&&b2<350)||(a1>320&&a2<380&&b1>320&&b2<350)||(a1>330&&a2<380&&b1>230&&b2<310)||(a1>240&&a2<330&&b1>230&&b2<240)||(a1>240&&a2<260&&b1>240&&b2<320)||(a1>30&&a2<50&&b1>290&&b2<310)||(a1>50&&a2<70&&b1>290&&b2<300)||(a1>60&&a2<70&&b1>290&&b2<320)||(a1>40&&a2<50
&&b1>300&&b2<320)||(a1>230&&a2<240&&b1>140&&b2<200)||(a1>240&&a2<270&&b1>190&&b2<200)||(a1>150&&a2<160&&b1>160&&b2<190)||(a1>30&&a2<100&&b1>220&&b2<230)||(a1>70&&a2<160&&b1>240&&b2<250)||(a1>160&&a2<170&&b1>220&&b2<310))
				{
					level=0;
					a1=-360,b1=-360,a2=-360,b2=-360;
					text3();
					glFlush();
				}
				else if(a1>50 && a2<60 && b1>340 && b2<350)
				{
					a1=-360,b1=-360,a2=-360,b2=-360;
					text5();
					glFlush();
				}	
				else
				{
					display2(a1,b1,a2,b2);
				}
		}
	}
	if(k==GLUT_KEY_RIGHT)
	{
		if(level==0)
		{
				u1=u1+20;
				u2=u2+20;
				if (u1<20||u2>420||v1<40||v2>360||(u1>40&&u2<220&&v1>240&&v2<260)||(u1>40&&u2<60&&v1>260&&v2<340)||(u1>60&&u2<120&&v1>320&&v2<340)||(u1>80&&u2<340&&v1>280&&v2<300)||(u1>240&&u2<340&&v1>160&&v2<280)||(u1>100&&u2<240&&v1>160&&v2<180)||(u1>100&&u2<140&&v1>40&&v2<160)||(u1>160&&u2<400&&v1>120&&v2<140)||(u1>360&&u2<400&&v1>140&&v2<320)||(u1>300&&u2<400&&v1>320&&v2<340)||(u1>160&&u2<420&&v1>40&&v2<100)||(u1>20&&u2<220&&v1>200&&v2<220)||(u1>20&&u2<80&&v1>40&&v2<200)||(u1>140&&u2<280&&v1>320&&v2<360))
				{
					u1=-360,v1=-360,u2=-360,v2=-360;
					text3();
					glFlush();
				}
				else if(u1>80 && u2<100 && v1>40 && v2<60)
				{
					level=1;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}	
				else
				{
					display0(u1,v1,u2,v2);
				}
		}
		else if(level==1)
		{
				x1=x1+20;
				x2=x2+20;
				if(x1<20||x2>440||y1<0||y2>380||(x1>80 && x2<120 && y1>200 && y2<220)||(x1>80 && x2<180 && y1>40&& y2<60)||(x1>140&&x2<160&&y1>60&&y2<260)||(x1>100&&x2<140&&y1>160&&y2<180)||(x1>40&&x2<140&&y1>240&&y2<260)||(x1>40&&x2<60&&y1>260&&y2<300)||(x1>60&&x2<220&&y1>280&&y2<300)||(x1>200&&x2<220&&y1>300&&y2<360)||(x1>220&&x2<360&&y1>340&&y2<360)||(x1>320&&x2<360&&y1>300&&y2<360)||(x1>320&&x2<440&&y1>300&&y2<320)||(x1>320&&x2<440&&y1>260&&y2<280)||(x1>320&&x2<360&&y1>160&&y2<280)||(x1>180&&x2<360&&y1>160&&y2<180)||(x1>180&&x2<200&&y1>180&&y2<260)||(x1>200&&x2<300&&y1>240&&y2<260)||(x1>260&&x2<300&&y1>260&&y2<320)||(x1>280&&x2<300&&y1>200&&y2<240)||(x1>220&&x2<280&&y1>200&&y2<220)||(x1>180&&x2<260&&y1>80&&y2<160)||(x1>220&&x2<300&&y1>60&&y2<100)||(x1>380&&x2<420&&y1>80&&y2<240)||(x1>280&&x2<360&&y1>120&&y2<140)||(x1>320&&x2<360&&y1>40&&y2<120)||(x1>220&&x2<440&&y1>20&&y2<40)||(x1>380&&x2<440&&y1>40&&y2<60)||(x1>160&&x2<440&&y1>0&&y2<20)||(x1>20&&x2<140&&y1>0&&y2<20)||(x1>20&&x2<60&&y1>40&&y2<140)||(x1>60&&x2<120&&y1>80&&y2<140)||(x1>60&&x2<120&&y1>80&&y2<140)||(x1>20&&x2<80&&y1>140&&y2<220)||(x1>20&&x2<180&&y1>320&&y2<380)||(x1>380&&x2<420&&y1>340&&y2<380))
				{
					level=0;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text3();
					glFlush();
				
				}	
				else if(x1>420 && x2<440 && y1>360 && y2<380)
				{
					level=2;
					x1=-360,y1=-360,x2=-360,y2=-360;
					text4();
					glFlush();
				}
				else
				{
					display1(x1,y1,x2,y2);
				}
		}
		else if(level==2)
		{
				a1=a1+10;
				a2=a2+10;
				if(a1<20||a2>380||b1<20||b2>350||(a1>120&&a2<250&&b1>30&&b2<40)||(a1>120&&a2<240&&b1>40&&b2<70)||(a1>140&&a2<150&&b1>70&&b2<90)||(a1>30&&a2<140&&b1>70&&b2<80)||(a1>30&&a2<70&&b1>60&&b2<80)||(a1>60&&a2<70&&b1>30&&b2<60)||(a1>30&&a2<130&&b1>90&&b2<120)||(a1>30&&a2<60&&b1>120&&b2<130)||(a1>20&&a2<50&&b1>20&&b2<50)||(a1>80&&a2<110&&b1>20&&b2<60)||(a1>260&&a2<380&&b1>20&&b2<40)||(a1>250&&a2<370&&b1>50&&b2<60)||(a1>330&&a2<370&&b1>60&&b2<160)||(a1>270&&a2<330&&b1>130&&b2<160)||(a1>270&&a2<280&&b1>70&&b2<130)||(a1>280&&a2<320&&b1>70&&b2<120)||(a1>250&&a2<260&&b1>60&&b2<180)||(a1>260&&a2<380&&b1>170&&b2<180)||(a1>340&&a2<380&&b1>180&&b2<220)||(a1>200&&a2<240&&b1>80&&b2<130)||(a1>200&&a2<220&&b1>130&&b2<220)||(a1>160&&a2<200&&b1>130&&b2<140)||(a1>160&&a2<190&&b1>80&&b2<90)||(a1>160&&a2<170&&b1>80&&b2<140)||(a1>180&&a2<190&&b1>90&&b2<120)||(a1>140&&a2<150&&b1>110&&b2<170)||(a1>150&&a2<190&&b1>160&&b2<170)||(a1>180&&a2<190&&b1>160&&b2<340)||(a1>190&&a2<210&&b1>330&&b2<340)||(a1>200&&a2<210&&b1>230&&b2<330)||(a1>20&&a2<130&&b1>140&&b2<160)||(a1>110&&a2<130&&b1>160&&b2<190)||(a1>50&&a2<100&&b1>170&&b2<190)||(a1>100&&a2<170&&b1>180&&b2<190)||(a1>160&&a2<170&&b1>180&&b2<210)||(a1>20&&a2<30&&b1>160&&b2<350)||(a1>30&&a2<40&&b1>160&&b2<210)||(a1>40&&a2<150&&b1>200&&b2<210)||(a1>110&&a2<150&&b1>200&&b2<230)||(a1>40&&a2<60&&b1>240&&b2<280)||(a1>40&&a2<150&&b1>260&&b2<280)||(a1>80&&a2<150&&b1>280&&b2<310)||(a1>80&&a2<90&&b1>310&&b2<340)||(a1>60&&a2<80&&b1>330&&b2<340)||(a1>60&&a2<140&&b1>340&&b2<350)||(a1>30&&a2<50&&b1>330&&b2<350)||(a1>100&&a2<170&&b1>320&&b2<330)||(a1>150&&a2<170&&b1>320&&b2<350)||(a1>280&&a2<330&&b1>190&&b2<220)||(a1>220&&a2<280&&b1>210&&b2<220)||(a1>220&&a2<230&&b1>220&&b2<350)||(a1>230&&a2<260&&b1>330&&b2<350)||(a1>270&&a2<320&&b1>250&&b2<350)||(a1>320&&a2<380&&b1>320&&b2<350)||(a1>330&&a2<380&&b1>230&&b2<310)||(a1>240&&a2<330&&b1>230&&b2<240)||(a1>240&&a2<260&&b1>240&&b2<320)||(a1>30&&a2<50&&b1>290&&b2<310)||(a1>50&&a2<70&&b1>290&&b2<300)||(a1>60&&a2<70&&b1>290&&b2<320)||(a1>40&&a2<50
&&b1>300&&b2<320)||(a1>230&&a2<240&&b1>140&&b2<200)||(a1>240&&a2<270&&b1>190&&b2<200)||(a1>150&&a2<160&&b1>160&&b2<190)||(a1>30&&a2<100&&b1>220&&b2<230)||(a1>70&&a2<160&&b1>240&&b2<250)||(a1>160&&a2<170&&b1>220&&b2<310))
				{
					level=0;
					a1=-360,b1=-360,a2=-360,b2=-360;
					text3();
					glFlush();
				}
				else if(a1>50 && a2<60 && b1>340 && b2<350)
				{
					a1=-360,b1=-360,a2=-360,b2=-360;
					text5();
					glFlush();
				}	
				else
				{
					display2(a1,b1,a2,b2);
				}
		}
	}
}



void display()
{	
	glClearColor(1.0f,0.5f, 0.5f, 1.0f);	
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,50);
		glVertex2i(250,50);
		glVertex2i(250,90);
		glVertex2i(50,90);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	    glVertex2i(50,100);
		glVertex2i(250,100);
		glVertex2i(250,140);
		glVertex2i(50,140);
	glEnd();
	text0();

	glFlush();
}
void init()
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(0.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,499.0,0.0,400.0);
}


void main(int argc, char **argv)
{
	glutInit(&argc,argv); // Initialize GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set Display mode
	glutInitWindowPosition(50,50);  // Set top left window position
	glutInitWindowSize(1000,1000); // Set Display window width and height
	glutCreateWindow("MAZE GAME"); // Create Display Window
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(key);
	glutSpecialFunc(specialkey);
	glutMainLoop();
}
