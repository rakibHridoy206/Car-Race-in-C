#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void player();
void start();
void controls();
void credits();
void quit()
{                setbkcolor(7);
		 setcolor(RED);
		 settextstyle(1,0,4);
		 outtextxy(215,350,"QUITING THE GAME......");
		 delay(1000);
}

void first()
{
  int gdrive= DETECT,gmode,j;
  initgraph(&gdrive,&gmode,"c:\\turboc3\\BGI");
  setbkcolor(WHITE);
  setcolor(MAGENTA);
  floodfill(100,100,3);
  settextstyle(1,0,5);
  outtextxy(100,70,"CODE_BREAKERS");
  outtextxy(300,110,"PRESENTS");
  delay(500);
  for(j=1;j<=50;j=j+5)
  {
     settextstyle(1,0,6);
     if(j%2==0)
     {
	 setcolor(RED);
	 outtextxy(200,200,"CAR RACE");
	 delay(600);
     }
     else
     {
	 setcolor(5);
	 outtextxy(200,200,"CAR RACE");
	 delay(600);
     }

//Car pic
//CAR BODY
setcolor(CYAN);
line(50,370,90,370);
arc(110,370,0,180,20);
line(130,370,220,370);
arc(240,370,0,180,20);
line(260,370,300,370);
line(300,370,300,350);
line(300,350,240,330);
line(240,330,200,300);
line(200,300,110,300);
line(110,300,80,330);
line(80,330,50,340);
line(50,340,50,370);

//CAR Windows
setcolor(GREEN);
line(165,305,165,330);
line(165,330,230,330);
line(230,330,195,305);
line(195,305,165,305);

line(160,305,160,330);
line(160,330,95,330);
line(95,330,120,305);
line(120,305,160,305);

//Wheels
setcolor(RED);
circle(110,370,17);
floodfill(110,370,RED);
circle(240,370,17);
circle(110,370,9);
circle(240,370,9);
setcolor(RED);

line(0,390,639,390);  //ROAD
}

//Animation
for (int i=0;i<500;i++)
{
//Loading
setbkcolor(3);
setcolor(BLUE);
settextstyle(1,0,6);
outtextxy(150,150,"LOADING...");
{
//CAR BODY
setbkcolor(5);
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

//CAR Windows
setcolor(GREEN);
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

//Wheels
circle(110+i,370,17);
circle(240+i,370,17);
circle(110+i,370,9);
circle(240+i,370,9);
}
setcolor(RED);

delay(15);
cleardevice();

line(0,390,639,390);  //ROAD
}
setbkcolor(BLACK);
setcolor(WHITE);
settextstyle(8,0,3);
outtextxy(100,200,"PRESS ANY KEY TO CONTINUE...");
delay(300);

getch();
cleardevice();
player();
getch();
closegraph();
}

void player()
{
  int ch=0, i= 0,x=250,y=168,m,n,u;
  setbkcolor(11);
       setcolor(RED);
       settextstyle(7,0,6);
       outtextxy(90,40,"CAR RACE");
       settextstyle(8,0,3);
       outtextxy(270,150,"START");
       outtextxy(270,200,"CREDITS");
       outtextxy(270,250,"CONTROLS");
       outtextxy(270,300,"QUIT");
       circle(x,y,4);
       circle(x,y+50,4);
       circle(x,y+100,4);
       circle(x,y+150,4);
       while(1)
       {
	   if(ch==13 && y==168)
	   {
	       cleardevice();
	       start();
	       break;
	   }
	   if(ch==13 && y==218)
	   {
	       cleardevice();
	       credits();
	       break;
	   }
	   if(ch==13 && y==318)
	   {
	       cleardevice();
	       quit();
	       exit(0);
	   }
	   if(ch==13 && y==268)
	   {
	       controls();
	       break;
	   }
	   if(y==168 && y<=318)
	   {
		if(i==0)
		{
		 setfillstyle(1,12);
		 floodfill(x,y,RED);
		 i++;
		 n=y;
		}
	   }
	   if(kbhit())
	   {
		 ch=getch();
		 if(ch==72)
		 {
		      if(y>168)
		      {
			   y=y-50;
		      }
		 }
		 if(ch==80)
		 {
		      if(y<368)
		      {
			  y=y+50;
		      }
		 }
		 if(y>=168 && y<=368)
		 {
		      setfillstyle(1,12);
		      floodfill(x,y,RED);
		      if(y!=168 && y!=368)
		      {
		       setfillstyle(1,WHITE);
		       floodfill(x,n,RED);
		      }
		      n=y;
		 }
	    }
	    if(ch==27)
	     exit(0);
	 }
	  cleardevice();
	  closegraph();
}

void start()
{
    setbkcolor(9);
    char name[25];
    setcolor(10);
    outtextxy(245,200,"Player Name: ");
    gotoxy(50,21);
    gets(name);
    void main();
}
  
void credits()
{
     setbkcolor(10);
     setcolor(RED);
     settextstyle(2,0,6);
     outtextxy(250,259,"THIS GAME IS DESIGNED BY::::");
     setcolor(GREEN);
     outtextxy(250,289,"TEAM: CODE_BREAKERS");
     setcolor(BLUE);
     outtextxy(250,319,"RAKIB MAHMUD HRIDOY");
     outtextxy(250,339,"MAHFUZ EYAMIN");
     outtextxy(250,359,"SAMIRA BINTA HAMID");
     outtextxy(250,379,"MASUD RANA BASUNIA");
     delay(400);
     getch();
     cleardevice();
     player();
}

void controls()
{
    setbkcolor(11);
    setcolor(RED);
    cleardevice();
    settextstyle(1,0,4);
    outtextxy(250,60,"Controls");
    settextstyle(2,0,6);

    outtextxy(215,152,"1");
    rectangle(250,152,280,182);
    rectangle(248,150,282,184);
    rectangle(262,170,268,177);
    line(260,168,270,168);
    line(265,160,260,170);
    line(265,160,270,170);
    outtextxy(290,152,"FORWARD");

    outtextxy(215,212,"2");
    rectangle(250,212,280,242);
    rectangle(248,210,282,244);
    rectangle(262,217,268,225);
    line(260,228,270,228);
    line(265,236,260,227);
    line(265,236,270,227);
    outtextxy(290,212,"BACKWARD");

    outtextxy(215,272,"3");
    rectangle(250,272,280,302);
    rectangle(248,270,282,304);
    rectangle(267,283,276,290);
    line(265,281,265,291);
    line(266,281,256,286);
    line(256,286,266,291);
    outtextxy(290,272,"LEFT");
    
    outtextxy(215,332,"4");
    rectangle(250,332,280,362);
    rectangle(248,330,282,364);
    rectangle(255,343,265,350);
    line(267,341,267,351);
    line(266,341,276,346);
    line(276,346,266,351);
    outtextxy(290,332,"RIGHT");

    getch();
    cleardevice();
    player();
}



void enemycar(int x, int y)
{
   setcolor(LIGHTGREEN);
   // setfillstyle(3,RED);
   rectangle(x+1,y,x+35,y+40); //back

   // setfillstyle(1,BLUE);
   rectangle(x+3,y+40,x+32,y+50); //front

   // setfillstyle(1,BLACK);
   rectangle(x+1,y+43,x+2,y+48); //left tyre

   // setfillstyle(1,BLACK);
   rectangle(x+33,y+43,x+34,y+48); //right tyre
}

void mycar(int x, int y)
{
    setcolor(WHITE);
rectangle(x+3,y+60,x+37,y+120);
rectangle(x+5,y+62,x+35,y+118);
rectangle(x+5,y+70,x+35,y+110);
rectangle(x+9,y+81,x+31,y+99);
//front left
line(x+2,y+65,x+2,y+68);
line(x+1,y+65,x+1,y+68);
//Back left
line(x+2,y+105,x+2,y+108);
line(x+1,y+105,x+1,y+108);
//front right
line(x+38,y+65,x+38,y+68);
line(x+39,y+65,x+39,y+68);
//back right
line(x+38,y+105,x+38,y+108);
line(x+39,y+105,x+39,y+108);

line(x+5,y+70,x+9,y+81);
line(x+35,y+110,x+31,y+99);
line(x+5,y+110,x+9,y+99);
line(x+35,y+70,x+31,y+81);

line(x+5,y+90,x+9,y+90);
line(x+31,y+90,x+35,y+90);

}

void myclear(int x, int y)
{
setcolor(8);
rectangle(x+3,y+60,x+37,y+120);
rectangle(x+5,y+62,x+35,y+118);
rectangle(x+5,y+70,x+35,y+110);
rectangle(x+9,y+81,x+31,y+99);
//front left
line(x+2,y+65,x+2,y+68);
line(x+1,y+65,x+1,y+68);
//Back left
line(x+2,y+105,x+2,y+108);
line(x+1,y+105,x+1,y+108);
//front right
line(x+38,y+65,x+38,y+68);
line(x+39,y+65,x+39,y+68);
//back right
line(x+38,y+105,x+38,y+108);
line(x+39,y+105,x+39,y+108);

line(x+5,y+70,x+9,y+81);
line(x+35,y+110,x+31,y+99);
line(x+5,y+110,x+9,y+99);
line(x+35,y+70,x+31,y+81);

line(x+5,y+90,x+9,y+90);
line(x+31,y+90,x+35,y+90);
}

void enemyclear(int x, int y)
{
   setcolor(8);
   // setfillstyle(3,RED);
   rectangle(x+1,y,x+35,y+40); //back

   // setfillstyle(1,BLUE);
   rectangle(x+3,y+40,x+32,y+50); //front

   // setfillstyle(1,BLACK);
   rectangle(x+1,y+43,x+2,y+48); //left tyre

   // setfillstyle(1,BLACK);
   rectangle(x+33,y+43,x+34,y+48); //right tyre
}

void road()
{
   char a[4];
   for(int i=4;i>=1;i--)
   {
     setcolor(YELLOW);
     setfillstyle(1,8);
     bar3d(235,1,500,getmaxy()+1,0,0);
     bar3d(292,1,294,getmaxy()+1,0,0);
     bar3d(342,1,344,getmaxy()+1,0,0);
     bar3d(392,1,394,getmaxy()+1,0,0);
     bar3d(442,1,444,getmaxy()+1,0,0);

     sprintf(a,"%d",i);
     outtextxy(300,200,a);
     delay(500);
   }
   if(a==0)
   setfillstyle(1,8);
     setcolor(YELLOW);
   bar3d(235,1,500,getmaxy()+1,0,0);
   bar3d(292,1,294,getmaxy()+1,0,0);
   bar3d(342,1,344,getmaxy()+1,0,0);
   bar3d(392,1,394,getmaxy()+1,0,0);
   bar3d(442,1,444,getmaxy()+1,0,0);
   settextstyle(1,0,5);
   outtextxy(300,200,"GO");
   delay(500);
setfillstyle(1,8);
setcolor(YELLOW);
bar3d(235,1,500,getmaxy()+1,0,0);
bar3d(292,1,294,getmaxy()+1,0,0);
bar3d(342,1,344,getmaxy()+1,0,0);
bar3d(392,1,394,getmaxy()+1,0,0);
bar3d(442,1,444,getmaxy()+1,0,0);
}

void main()
{
   first();
   int gdriver = DETECT,gmode;
   initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

   int x=300,y=350,ch,life=3,score=0;
   char choice;
setbkcolor(9);
setcolor(RED);
   settextstyle(1,0,5);
   outtextxy(150,120,"LET THE RACE");
   outtextxy(190,160,"BEGIN....");

   delay(2000);
   for(int m=1;m<25;m++)
      for(int n=1;n<80;n++)
      {
	 gotoxy(n,m);
	 printf(" ");
      }
     setbkcolor(CYAN);
  setcolor(15);
  gotoxy(5,21);

  gotoxy(5,22);

  gotoxy(5,23);

  line(0,450,250,450);
  

//house1
{
  setcolor(MAGENTA);
  rectangle(10,400,60,445);
  rectangle(11,401,59,444);
  rectangle(12,402,58,443);
  rectangle(13,403,57,442);
  rectangle(14,404,56,441);
  rectangle(15,405,55,440);
  rectangle(16,406,54,439);
  rectangle(17,407,53,438);
  rectangle(18,408,52,437);
  rectangle(19,409,51,436);
  rectangle(20,410,50,435);
  rectangle(21,411,49,434);
  rectangle(22,412,48,433);
}
{
  setcolor(DARKGRAY);  
  line(10,400,35,380);
  line(11,400,35,381);
  line(12,400,35,382);


  line(35,380,60,400);
  line(35,381,59,400);
  line(35,382,58,400);
}
{
  setcolor(LIGHTGRAY);
  rectangle(27,415,42,430);
  rectangle(28,416,41,429);
}

//Tree
{
  setcolor(BROWN);
  rectangle(80,396,85,445);
  rectangle(81,397,84,444);
  rectangle(82,398,83,443);
}
{
  setcolor(GREEN);
  circle(83,386,10);
  circle(83,386,9);
  circle(83,386,8);
  circle(83,386,7);
  circle(83,386,6);
  circle(83,386,5);
  circle(83,386,4);
  circle(83,386,3);
  circle(83,386,2);
  circle(83,386,1);

  circle(70,400,10);
  circle(70,400,9);
  circle(70,400,8);
  circle(70,400,7);
  circle(70,400,6);
  circle(70,400,5);
  circle(70,400,4);
  circle(70,400,3);
  circle(70,400,2);
  circle(70,400,1);

  circle(95,400,10);
  circle(95,400,9);
  circle(95,400,8);
  circle(95,400,7);
  circle(95,400,6);
  circle(95,400,5);
  circle(95,400,4);
  circle(95,400,3);
  circle(95,400,2);
  circle(95,400,1);
}
{
  setcolor(BROWN);
  rectangle(160,396,165,445);
  rectangle(161,397,164,444);
  rectangle(162,398,163,443);
}
{
  setcolor(GREEN);
  circle(163,386,10);
  circle(163,386,9);
  circle(163,386,8);
  circle(163,386,7);
  circle(163,386,6);
  circle(163,386,5);
  circle(163,386,4);
  circle(163,386,3);
  circle(163,386,2);
  circle(163,386,1);

  circle(150,400,10);
  circle(150,400,9);
  circle(150,400,8);
  circle(150,400,7);
  circle(150,400,6);
  circle(150,400,5);
  circle(150,400,4);
  circle(150,400,3);
  circle(150,400,2);
  circle(150,400,1);

  circle(175,400,10);
  circle(175,400,9);
  circle(175,400,8);
  circle(175,400,7);
  circle(175,400,6);
  circle(175,400,5);
  circle(175,400,4);
  circle(175,400,3);
  circle(175,400,2);
  circle(175,400,1);
}

//house2
{
  setcolor(MAGENTA);
  rectangle(180,400,230,445);
  rectangle(181,401,229,444);
  rectangle(182,402,228,443);
  rectangle(183,403,227,442);
  rectangle(184,404,226,441);
  rectangle(185,405,225,440);
  rectangle(186,406,224,439);
  rectangle(187,407,223,438);
  rectangle(188,408,222,437);
  rectangle(189,409,221,436);
  rectangle(190,410,220,435);
  rectangle(191,411,219,434);
  rectangle(192,412,218,433);
}
{
  setcolor(DARKGRAY);
  line(180,400,205,380);
  line(181,400,205,381);
  line(182,400,205,382);

  line(205,380,230,400);
  line(205,381,229,400);
  line(205,382,228,400);

}
{
  setcolor(LIGHTGRAY);
  rectangle(197,415,212,430);
  rectangle(198,416,211,429);
}


//house3
{
  setcolor(MAGENTA);
  rectangle(15,215,65,265);
  rectangle(16,216,64,264);
  rectangle(17,217,63,263);
  rectangle(18,218,62,262);
  rectangle(19,219,61,261);
  rectangle(20,220,60,260);
  rectangle(21,221,59,259);
}
{
  setcolor(LIGHTGRAY);
  rectangle(27,225,36,234);
  rectangle(28,226,35,233);

  rectangle(44,225,53,234);
  rectangle(45,226,52,233);

  rectangle(27,235,36,244);
  rectangle(28,236,35,243);

  rectangle(44,235,53,244);
  rectangle(45,236,52,243);

  rectangle(27,245,36,254);
  rectangle(28,246,35,253);

  rectangle(44,245,53,254);
  rectangle(45,246,52,253);
}

//house4
{
  setcolor(MAGENTA);
  rectangle(90,215,140,265);
  rectangle(91,216,139,264);
  rectangle(92,217,138,263);
  rectangle(93,218,137,262);
  rectangle(94,219,136,261);
  rectangle(95,220,135,260);
  rectangle(96,221,134,259);
}
{
  setcolor(LIGHTGRAY);
  rectangle(102,225,111,234);
  rectangle(103,226,110,233);

  rectangle(119,225,128,234);
  rectangle(120,226,127,233);

  rectangle(102,235,111,244);
  rectangle(103,236,110,243);

  rectangle(119,235,128,244);
  rectangle(120,236,127,243);

  rectangle(102,245,111,254);
  rectangle(103,246,110,253);

  rectangle(119,245,128,254);
  rectangle(120,246,127,253);
}

//house5
{
  setcolor(MAGENTA);
  rectangle(170,215,220,265);
  rectangle(171,216,219,264);
  rectangle(172,217,218,263);
  rectangle(173,218,217,262);
  rectangle(174,219,216,261);
  rectangle(175,220,215,260);
  rectangle(176,221,214,259);
}
{
  setcolor(LIGHTGRAY);
  rectangle(182,225,191,234);
  rectangle(183,226,190,233);

  rectangle(199,225,208,234);
  rectangle(200,226,207,233);

  rectangle(182,235,191,244);
  rectangle(183,236,190,243);

  rectangle(199,235,208,244);
  rectangle(200,236,207,243);

  rectangle(182,245,191,254);
  rectangle(183,246,190,253);

  rectangle(199,245,208,254);
  rectangle(200,246,207,253);
}
{
  setcolor(LIGHTGRAY);
  line(0,370,249,370);
  line(0,369,249,369);
  rectangle(0,280,249,281);
}
{
  setcolor(WHITE);
  arc(25,140,40,140,32);
  arc(25,140,40,140,33);
  arc(25,140,40,140,34);
  arc(25,140,40,140,35);
  arc(25,140,40,140,36);
  arc(50,140,40,140,36);
  arc(50,140,40,140,35);
  arc(50,140,40,140,34);
  arc(50,140,40,140,33);
  arc(50,140,40,140,32);
  arc(80,140,40,140,36);
  arc(80,140,40,140,32);
  arc(80,140,40,140,33);
  arc(80,140,40,140,34);
  arc(80,140,40,140,35);
  arc(120,140,40,140,36);
  arc(120,140,40,140,32);
  arc(120,140,40,140,33);
  arc(120,140,40,140,34);
  arc(120,140,40,140,35);
  arc(150,140,40,140,36);
  arc(150,140,40,140,32);
  arc(150,140,40,140,33);
  arc(150,140,40,140,34);
  arc(150,140,40,140,35);
  arc(185,140,40,140,36);
  arc(185,140,40,140,32);
  arc(185,140,40,140,33);
  arc(185,140,40,140,34);
  arc(185,140,40,140,35);
  arc(220,140,40,140,36);
  arc(220,140,40,140,32);
  arc(220,140,40,140,33);
  arc(220,140,40,140,34);
  arc(220,140,40,140,35);
}

  road();
  setcolor(RED);
  gotoxy(5,15);

  for(int level=1; (level<=6) && (life>0);level++)
  {
     if(level==1)
     {
     gotoxy(5,5);
     printf("YOUR RACE STARTS NOW");
     gotoxy(5,7);

     delay(1300);
     gotoxy(5,5);
     printf("             ");
     printf("        ");
     }
     else
     {
       gotoxy(65,5);
       printf("NEXT LEVEL\n");
       gotoxy(65,9);
       printf("STARTS NOW\n");
       delay(2000);
       gotoxy(65,9);
       printf("          ");
       setbkcolor(BLUE);
	  if(level==3)
	  {
	    setbkcolor(BLACK);
	  }
	  if(level==4)
	  {
	    setbkcolor(LIGHTRED);
	  }
	  if(level==5)
	  {
	    setbkcolor(LIGHTCYAN);
	  }
	  if(level==6)
	  {
	    setbkcolor(LIGHTBLUE);
	  }
     }
for(int i=0;(i<15)&&(life>0);i++)
 {
    if((level==6)&&(i==14))
    {
       settextstyle(1,0,5);
       outtextxy(220,150,"YOU WIN");
       gotoxy(35,16);
       printf("CONTINUE Y/N");
       choice = getch();
       if((choice=='y')||(choice=='Y'))
       {
	  main();
       }
       else if((choice=='n')||(choice=='N'))
       {
	   cleardevice();
	   quit();
	   exit(0);
       }
    }
   setcolor(RED);
   gotoxy(65,10);
   printf("LEVEL : %d",level);
   gotoxy(65,18);
   printf("LIVES : %d",life);
   gotoxy(65,24);
   printf("SCORE : %d",score);
   int accident=0;
   int y1=1,x1=250+((rand()%5)*50);
   int y2=1,x2=250+((rand()%5)*50);
   int y3=1,x3=250+((rand()%5)*50);
   int y4=1,x4=250+((rand()%5)*50);
   score +=10;
   while(y1<getmaxy()+1)
   {
       enemyclear(x1,y1);
       enemyclear(x2,y2);
       enemyclear(x3,y3);
       enemyclear(x4,y4);
       y1++;
       y2++;
       y3++;
       y4++;
       if(accident==1)
	    break;
       enemycar(x1,y1);
       enemycar(x2,y2);
       enemycar(x3,y3);
       enemycar(x4,y4);
       mycar(x,y);

       delay(7-level);
       if(kbhit())
       {
	   mycar(x,y);
	   ch=getch();
	   switch (ch)
	   {
	     case 27 :myclear(x,y);
	       cleardevice();
	       player();
	       break;
	     case 75 :myclear(x,y);
		   if(x>250)
			x=x-50;
			if((x==x1)||(x==x2)||(x==x3)||(x==x4))
			    if((y+14==y1)||(y+14==y2)||(y+14==y3)||(y+14==y4))
			      {
				 accident=1;
				 x=x+50;
				 mycar(x,y);
				 goto Next1;
			      }
	     mycar(x,y);
	     break;
	     case 77: myclear(x,y);
		   if(x<450)
			x=x+50;
			if((x==x1)||(x==x2)||(x==x3)||(x==x4))
			    if((y+14==y1)||(y+14==y2)||(y+14==y3)||(y+14==y4))
			      {
				 accident=1;
				 x=x-50;
				 mycar(x,y);
				 goto Next1;
			      }
	     mycar(x,y);
	     break;
	     case 72: myclear(x,y);
		   if(y>0)
			y=y-5;
			if((x==x1)||(x==x2)||(x==x3)||(x==x4))
			    if((y+14==y1)||(y+14==y2)||(y+14==y3)||(y+14==y4))
			      {
				 accident=1;
				 x=x-50;
				 mycar(x,y);
				 goto Next1;
			      }
	     mycar(x,y);
	     break;
	     case 80:myclear(x,y);
		 if(y<getmaxy()-150)
		       y=y+5;
		 mycar(x,y);
	     break;
	     }
	 }
	 if((x==x1)||(x==x2)||(x==x3)||(x==x4))
	       if((y+14==y1)||(y+14==y2)||(y+14==y3)||(y+14==y4))

		     accident=1;
	 Next1:
	 if(accident==1)
	 {
	    life=life-1;
	    if(life==0)
	    {
	       settextstyle(1,0,5);
	       outtextxy(200,150,"GAME OVER");
	       gotoxy(35,16);
	       sleep(1);

		 printf("CONTINUE <Y/N>");
	    choice=getch();
	    if((choice=='y')||(choice=='Y'))
	    {
		  main();
	    }
	    else if((choice=='n')||(choice=='N'))
	    {
	     cleardevice();
	     quit();
	     exit(0);
	    }
	    }
	  gotoxy(5,5);
	  printf("LIFE IS GETTING LOW");
	  delay(500);
	  gotoxy(5,5);
	  printf("                   ");
	  }
	  }
}
 }
getch();
}