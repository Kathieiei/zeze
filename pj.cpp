#include <string.h>
#include <graphics.h>
#include <windows.h>
#include <iostream>
#include<dos.h>
#include<conio.h>
#include <string>
#include <cstdio>
void moon()
{
    int y=520;
   for (int i=0;i<5000;i++)
   {

       if (GetAsyncKeyState(VK_UP))
       {
        setfillstyle(SOLID_FILL,14);
       circle(180,y-=i,40);
       floodfill(180,y-=i,15);

       }
       if (GetAsyncKeyState(VK_DOWN))
       {
        setfillstyle(SOLID_FILL,14);
       circle(180,y+=i,40);
      floodfill(180,y+=i,15);
       }
       if (GetAsyncKeyState(VK_RIGHT))
       {
           break;
       }
       getch();
       cleardevice();
   }
}

void facebig()
{
    setcolor(15);
       setfillstyle(SOLID_FILL,14);
	 circle(320,250,180);
	 circle(250,200,30);
	 circle(385,200,30);
       floodfill(320,250,15);
       setcolor(4);
     arc(320,350,350,190,80);
    delay(1000);
    cleardevice();
}

void sadface()
{
    setcolor(15);
       setfillstyle(SOLID_FILL,14);
	 circle(320,150,80);

	 circle(280,120,15);

	 circle(360,120,15);

    floodfill(320,150,15);
    setcolor(4);
     arc(320,200,350,190,30);
}
void smface()
{
    setcolor(15);
       setfillstyle(SOLID_FILL,14);
	 circle(320,150,80);

	 circle(280,120,15);

	 circle(360,120,15);
	 setcolor(4);
       floodfill(320,150,15);
        setcolor(4);
    arc(320,130,210,-30,65);
}
void cry()
{
    for (int i=0;i<300;i++)
    {
    setcolor(1);
    line(280,150+i,280,130+i);
    line(360,150+i,360,130+i);
    delay(10);


    }

}
int main()
{
    int gd = DETECT, gm,midx, midy,y = 520,a,b,p=15;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    POINT cursorPosition;
    midx = getmaxx()/2;
    midy = getmaxy()/2;
    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);

    setbkcolor(  3 );
    cleardevice();
   setcolor(15);
   settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx, midy, "Hi...");
   delay(2000);
   cleardevice();


   smface();
   setcolor(15);
   rectangle(midx-300,midy+50,midx+300,midy+200);
   setcolor(15);
   settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx, midy+100, "My Name is...");
   outtextxy(midx, midy+150, "Zeze");
   delay(2000);
   cleardevice();

   smface();
   setcolor(15);
   rectangle(midx-300,midy+50,midx+300,midy+200);
   setcolor(15);
   settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx, midy+140, "I'm Help Bot for you...");
   delay(2000);
   cleardevice();


   smface();
   setcolor(15);
   rectangle(midx-300,midy+50,midx+300,midy+200);
   setcolor(15);
   settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx, midy+140, "Can I help you? ");
   delay(2000);
   cleardevice();

   sadface();
   setcolor(15);
   rectangle(midx-300,midy+50,midx+300,midy+200);
   setcolor(15);
   settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx, midy+140, "I have no function to understand you...");
   delay(2000);
   cleardevice();

   sadface();
   setcolor(15);
   rectangle(midx-300,midy+50,midx+300,midy+200);
   setcolor(1);
   setcolor(15);
   settextstyle(GOTHIC_FONT, HORIZ_DIR, 1);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx, midy+100, "oh...");
   outtextxy(midx, midy+140, "I'm not smart enough.");
   setcolor(1);
   cry();
   for(int i=0;i<290;i++)
      {
      setcolor(1);
      line(800,450-i,-350,450-i);
      delay(10);
      }
    outtextxy(midx, midy+100, "I think...");
    outtextxy(midx, midy+140, "I'm cried so much.");
    delay(2000);
    cleardevice();
    sadface();
    outtextxy(midx, midy+120, "I'm a mistake...");
    delay(2000);
    cleardevice();
    sadface();
    outtextxy(midx, midy+100, "In another life.");
    outtextxy(midx, midy+140, "I wish to be a star in the sky.");
    delay(2000);
    cleardevice();
    sadface();
    outtextxy(midx, midy+120, "Or...");
    delay(2000);
    cleardevice();
    sadface();
    outtextxy(midx, midy+100, "Be a good bot.");
    outtextxy(midx, midy+140, "And make you happy.");
    delay(2000);
    cleardevice();
    sadface();
    outtextxy(midx, midy+120, "Don't be a mistake like this..");
    delay(3000);
    cleardevice();

    facebig();
   delay(2000);
    cleardevice();

    setbkcolor(14);
    cleardevice();
    delay(200);
    setbkcolor(4);
    cleardevice();
    delay(200);
    setbkcolor(1);
    cleardevice();
    delay(200);
    setbkcolor(14);
    cleardevice();
    delay(200);
    setbkcolor(4);
    cleardevice();
    delay(200);
    setbkcolor(1);
    cleardevice();
    delay(200);
    setbkcolor(0);
    cleardevice();
    delay(7000);

    while(!kbhit())
    {
        setbkcolor(0);
         outtextxy(midx, midy+120, "Press any button to read the next page.");
      putpixel(rand()%630,rand()%530,15);
      delay(10);
      }
      getch();
      putpixel(325,200,14);
      getch();

       while(GetAsyncKeyState(VK_LBUTTON))
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+120, "Hey!");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }

      cleardevice();



        while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+100, "I'm here.");
        outtextxy(midx, midy+140, "(Drag mouse to create Stars)");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }
        getch();
        cleardevice();

         while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+120, "Don't you see me");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }
        getch();
        cleardevice();

        while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+100, "It is only with the heart that one can see rightly.");
        outtextxy(midx, midy+140, "What is essential is invisible to the eye.");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }
        getch();
        cleardevice();

        while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        line(335,190,400,150);
        line(335,190,350,170);
        line(335,190,350,190);
        outtextxy(midx, midy+120, "Now ,I'm yellow star in the sky.");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }
        getch();
        cleardevice();

        while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+100, "But");
        outtextxy(midx, midy+140, "Does not matter what I am.");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }
        getch();
        cleardevice();

        while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+120, "The important is Who am i.");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }
        getch();
        cleardevice();

        while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+100, "I am who I am and I have the need to be.");
        outtextxy(midx, midy+140, "You too");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
        }
        getch();
        cleardevice();


        while(!kbhit())
        {
        putpixel(325,200,14);
        setcolor(15);
        outtextxy(midx, midy+100, "You can do everythig");
        outtextxy(midx, midy+140, "Even make the moon to the sky.");
        GetCursorPos(&cursorPosition);
        setcolor(rand()%16);
        putpixel(cursorPosition.x,cursorPosition.y,15);
        delay(100);
         moon();
        }
        getch();
        cleardevice();




   while(1)
     {
         GetCursorPos(&cursorPosition);
         a=cursorPosition.x;
         b=cursorPosition.y;

         settextstyle(2, HORIZ_DIR,8);
        setcolor(15);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        outtextxy(midx,midy,"THANKYOU");
         if(GetAsyncKeyState(VK_LBUTTON))
            for ( int i =1; i<=15 ; i++)
    {
        setcolor(rand()%16);
        circle(a=cursorPosition.x,cursorPosition.y,p);delay(70);
        p=p+5;
    }
    cleardevice();
    delay(100);
    p=15;
     }











}

