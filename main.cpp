#include <iostream>
#include <windows.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <mmsystem.h>
#include <windowsx.h>

using namespace std;

class halamandepan
{
public:

    void truk(int xp, int yp, int sc)
{
    float x[100],y[100];
    x[0]=0;y[0]=1;
    x[1]=3;y[1]=1;
    x[2]=3;y[2]=10;
    x[3]=0;y[3]=10;
    x[4]=2.9;y[4]=1;
    x[5]=2.9;y[5]=10;
    x[6]=0;y[6]=1.1;
    x[7]=2.9;y[7]=1.1;
    x[8]=0;y[8]=9.9;
    x[9]=2.9;y[9]=9.9;
    x[10]=0.9;y[10]=1;
    x[11]=0.9;y[11]=0.8;
    x[12]=1.1;y[12]=0.8;
    x[13]=1.1;y[13]=1;
    x[14]=0.8;y[14]=10;
    x[15]=0.8;y[15]=10.5;
    x[16]=1.2;y[16]=10.5;
    x[17]=1.2;y[17]=10;
    x[18]=2;y[18]=1;
    x[19]=2.1;y[19]=0.9;
    x[20]=2.4;y[20]=0.9;
    x[21]=2.5;y[21]=1;
    x[22]=2.6;y[22]=0.9;
    x[23]=2.9;y[23]=0.9;
    x[24]=3;y[24]=1;

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    for(int i=0;i<3;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=0;i<3;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
    floodfill(1.5*sc+xp,3*sc+yp,WHITE);
    floodfill(1.5*sc+xp,6*sc+yp,WHITE);
    floodfill(1.5*sc+xp,9*sc+yp,WHITE);

        for(int i=4;i<5;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=4;i<5;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=6;i<7;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=6;i<7;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=8;i<9;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=8;i<9;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=10;i<13;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=10;i<13;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=14;i<17;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=14;i<17;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=18;i<24;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=18;i<24;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }

    x[25]=0;y[25]=10.5;
    x[26]=2.7;y[26]=10.5;
    x[27]=2.7;y[27]=10.5;
    x[28]=2.7;y[28]=12;
    x[29]=2.5;y[29]=11.5;
    x[30]=2.5;y[30]=10.9;
    x[31]=0;y[31]=10.9;
    x[32]=2.7;y[32]=12;
    x[33]=2.7;y[33]=13;
    x[34]=0;y[34]=13;
    x[35]=2.7;y[35]=12;
    x[36]=2.9;y[36]=12;

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,DARKGRAY);
        for(int i=25;i<26;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=25;i<26;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=27;i<31;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=27;i<31;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=32;i<34;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=32;i<34;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=35;i<36;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=35;i<36;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
    floodfill(1.5*sc+xp,11.25*sc+yp,WHITE);

    x[37]=0;y[37]=11.8;
    x[38]=1.9;y[38]=11.8;
    x[39]=2.3;y[39]=12.5;
    x[40]=0;y[40]=12.5;

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,WHITE);
        for(int i=37;i<40;i++)
        {
            line(x[i]*sc+xp,y[i]*sc+yp,x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
        for(int i=37;i<40;i++)
        {
            line(-x[i]*sc+xp,y[i]*sc+yp,-x[i+1]*sc+xp,y[i+1]*sc+yp);
        }
    floodfill(1*sc+xp,12.2*sc+yp,YELLOW);

}

    void rintangan(int xrin, int yrin, int sr)
{
    float xr[40],yr[40];
    xr[0]=0;yr[0]=3;
    xr[1]=2;yr[1]=3;
    xr[2]=2;yr[2]=4;
    xr[3]=0;yr[3]=4;
    xr[4]=1;yr[4]=3;
    xr[5]=1;yr[5]=2.5;
    xr[6]=1.5;yr[6]=2.5;
    xr[7]=1.5;yr[7]=3;
    xr[8]=1;yr[8]=4;
    xr[9]=1;yr[9]=7;
    xr[10]=1.5;yr[10]=7;
    xr[11]=1.5;yr[11]=4;
    xr[12]=0;yr[12]=3;
    xr[13]=1;yr[13]=4;
    xr[14]=0.5;yr[14]=3;
    xr[15]=1.5;yr[15]=4;
    xr[16]=1;yr[16]=3;
    xr[17]=2;yr[17]=4;

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BLUE);
    for(int j=0;j<3;j++)
        {
            line(xr[j]*sr+xrin,yr[j]*sr+yrin,xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=0;j<3;j++)
        {
            line(-xr[j]*sr+xrin,yr[j]*sr+yrin,-xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
    floodfill(0.25*sr+xrin,3.75*sr+yrin,WHITE);

    setfillstyle(SOLID_FILL,BROWN);
        for(int j=4;j<7;j++)
        {
            line(xr[j]*sr+xrin,yr[j]*sr+yrin,xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=4;j<7;j++)
        {
            line(-xr[j]*sr+xrin,yr[j]*sr+yrin,-xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=8;j<11;j++)
        {
            line(xr[j]*sr+xrin,yr[j]*sr+yrin,xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=8;j<11;j++)
        {
            line(-xr[j]*sr+xrin,yr[j]*sr+yrin,-xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
    floodfill(1.25*sr+xrin,2.75*sr+yrin,WHITE);
    floodfill(1.25*sr+xrin,5*sr+yrin,WHITE);
    floodfill(1.25*sr+xrin,6*sr+yrin,WHITE);
    floodfill(-1.25*sr+xrin,2.75*sr+yrin,WHITE);
    floodfill(-1.25*sr+xrin,5*sr+yrin,WHITE);
    floodfill(-1.25*sr+xrin,6*sr+yrin,WHITE);

        for(int j=12;j<13;j++)
        {
            line(xr[j]*sr+xrin,yr[j]*sr+yrin,xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
         for(int j=12;j<13;j++)
        {
            line(-xr[j]*sr+xrin,yr[j]*sr+yrin,-xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=14;j<15;j++)
        {
            line(xr[j]*sr+xrin,yr[j]*sr+yrin,xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=14;j<15;j++)
        {
            line(-xr[j]*sr+xrin,yr[j]*sr+yrin,-xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=16;j<17;j++)
        {
            line(xr[j]*sr+xrin,yr[j]*sr+yrin,xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
        for(int j=16;j<17;j++)
        {
            line(-xr[j]*sr+xrin,yr[j]*sr+yrin,-xr[j+1]*sr+xrin,yr[j+1]*sr+yrin);
        }
}

    void gas(int xgas, int ygas, int sgas)
{
    float xb[40],yb[40];
    xb[0]=0;yb[0]=0.5;
    xb[1]=0;yb[1]=2.5;
    xb[2]=0.5;yb[2]=3;
    xb[3]=2;yb[3]=3;
    xb[4]=2.5;yb[4]=2.5;
    xb[5]=2.5;yb[5]=1;
    xb[6]=1.5;yb[6]=0;
    xb[7]=0.5;yb[7]=0;
    xb[8]=0;yb[8]=0.5;
    xb[9]=0.5;yb[9]=1;
    xb[10]=2;yb[10]=2.5;
    xb[11]=2;yb[11]=1;
    xb[12]=0.5;yb[12]=2.5;
    xb[13]=1.9;yb[13]=0.4;
    xb[14]=2.1;yb[14]=0.2;
    xb[15]=2.3;yb[15]=0.4;
    xb[16]=2.1;yb[16]=0.6;

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    for(int i=0;i<8;i++)
        {
            line(xb[i]*sgas+xgas,yb[i]*sgas+ygas,xb[i+1]*sgas+xgas,yb[i+1]*sgas+ygas);
        }
        for(int i=9;i<10;i++)
        {
            line(xb[i]*sgas+xgas,yb[i]*sgas+ygas,xb[i+1]*sgas+xgas,yb[i+1]*sgas+ygas);
        }
        for(int i=11;i<12;i++)
        {
            line(xb[i]*sgas+xgas,yb[i]*sgas+ygas,xb[i+1]*sgas+xgas,yb[i+1]*sgas+ygas);
        }
        for(int i=13;i<16;i++)
        {
            line(xb[i]*sgas+xgas,yb[i]*sgas+ygas,xb[i+1]*sgas+xgas,yb[i+1]*sgas+ygas);
        }
        floodfill(1*sgas+xgas,0.5*sgas+ygas,WHITE);
        floodfill(0.5*sgas+xgas,1.5*sgas+ygas,WHITE);
        floodfill(2*sgas+xgas,1.5*sgas+ygas,WHITE);
        floodfill(1*sgas+xgas,2.5*sgas+ygas,WHITE);
        floodfill(2.1*sgas+xgas,0.4*sgas+ygas,WHITE);
}

    void nyawa(int xhp, int yhp, int shp)
{
    float xn[40],yn[40];
    xn[0]=2;yn[0]=0;
    xn[1]=4;yn[1]=0;
    xn[2]=5;yn[2]=1;
    xn[3]=6;yn[3]=0;
    xn[4]=8;yn[4]=0;
    xn[5]=10;yn[5]=2;
    xn[6]=10;yn[6]=4;
    xn[7]=9;yn[7]=5;
    xn[8]=5;yn[8]=9;
    xn[9]=1;yn[9]=5;
    xn[10]=0;yn[10]=4;
    xn[11]=0;yn[11]=2;
    xn[12]=2;yn[12]=0;

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    for(int i=0;i<12;i++)
        {
            line(xn[i]*shp+xhp,yn[i]*shp+yhp,xn[i+1]*shp+xhp,yn[i+1]*shp+yhp);
        }
    floodfill(5*shp+xhp,4*shp+yhp,WHITE);
}

    void loading()
{
    sndPlaySound("loading.wav", SND_ASYNC | SND_LOOP);
    while(1)
    {
        settextstyle(8,0,1);
        rectangle(300,300,350+350,350);
        for(int i=0;i<399;i++)
        {
            setcolor(LIGHTCYAN);
            rectangle(301,301,301+i,349);
            if(i<398)
            {
                outtextxy(300,400,"loading");
            }
            if(i==398)
            {
                outtextxy(300,400,"complete");
            }
            delay(5);
        }
        cleardevice();
        mainmenu();
        break;
    }
}

    void mainmenu()
{
    int gx, gy;
    PlaySound(TEXT("mainmenu.wav"), NULL, SND_FILENAME | SND_ASYNC);
    while(1)
    {
        gx=mousex();
        gy=mousey();

        setcolor(LIGHTCYAN);
        settextstyle(8,0,5);
        int tdx = textwidth("Truck Driver");
        int tdy = textheight("Truck Driver");
        outtextxy((1000-tdx)/2,(100-tdy)/2,"Truck Driver");

        settextstyle(8,0,1);
        int mx = textwidth("Main");
        int my = textheight("Main");
        outtextxy((1000-mx)/2,(300-my)/2,"Main");

        int px = textwidth("Panduan");
        int py = textheight("Panduan");
        outtextxy((1000-px)/2,(500-py)/2,"Panduan");

        int cx = textwidth("Pembuat");
        int cy = textheight("Pembuat");
        outtextxy((1000-cx)/2,(700-cy)/2,"Pembuat");

        int kx = textwidth("Keluar");
        int ky = textheight("Keluar");
        outtextxy((1000-kx)/2,(900-ky)/2,"Keluar");

        rectangle(400,120,600,180);
        rectangle(400,220,600,280);
        rectangle(400,320,600,380);
        rectangle(400,420,600,480);

        if((gy>120)&&(gy<180)&&(gx>400)&&(gx<600))
        {
            setfillstyle(SOLID_FILL,WHITE);
            if(ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                cleardevice();
                game();
                break;
            }
            floodfill(500,150,LIGHTCYAN);
        }
        if((gy>220)&&(gy<280)&&(gx>400)&&(gx<600))
        {
            setfillstyle(SOLID_FILL,WHITE);
            if(ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                cleardevice();
                panduan();
                break;
            }
            floodfill(500,250,LIGHTCYAN);
        }
        if((gy>320)&&(gy<380)&&(gx>400)&&(gx<600))
        {
            setfillstyle(SOLID_FILL,WHITE);
            if(ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                cleardevice();
                kredit();
                break;
            }
            floodfill(500,350,LIGHTCYAN);
        }
        if((gy>420)&&(gy<480)&&(gx>400)&&(gx<600))
        {
            setfillstyle(SOLID_FILL,WHITE);
            if(ismouseclick(WM_LBUTTONDOWN))
            {
                clearmouseclick(WM_LBUTTONDOWN);
                closegraph();
                exit(0);
                break;
            }
            floodfill(500,450,LIGHTCYAN);
        }
    }
}

    void panduan()
{
    cleardevice();
    while(1)
    {
        rintangan(200,205,13);
        truk(400,220,7);
        gas(586,250,10);
        nyawa(785,251,3);

        rectangle(150,200,250,330);
        rectangle(350,200,450,330);
        rectangle(550,200,650,330);
        rectangle(750,200,850,330);

        settextstyle(8,0,1);
        outtextxy(151,359,"Rintangan");
        outtextxy(378,359,"Truk");
        outtextxy(568,359,"Bensin");
        outtextxy(775,359,"Nyawa");

        setcolor(LIGHTCYAN);
        settextstyle(8,0,1);
        outtextxy(150,50, "Tekan S untuk bergerak ke bawah, Tekan A untuk bergerak ke kiri");
        outtextxy(150,70, "Tekan W untuk bergerak ke atas, Tekan D untuk bergerak ke kanan");
        outtextxy(150,90, "Dapatkan item bensin agar bensin kembali, penuh Hindari rintan-");
        outtextxy(150,110,"gan agar nyawa tidak berkurang, Dapatkan item nyawa agar nyawa ");
        outtextxy(150,130,"kembali penuh");

        outtextxy(150,500,"Tekan esc untuk kembali ke main menu");
        if(GetAsyncKeyState(27)<0)
        {
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return mainmenu();
        }
    }
}

    void game()
{
    int xp,yp,sc,sr,sgas,bn,xhp,yhp,shp;
    int xrin[10],yrin[10],dy[10],xgas,ygas;
    int x=0,y=0;
    int page=0;

    //deklarasi untuk score berdasarkan waktu
    int a1=0;
    char skr[999];
    double time_spent=0.0;

    //deklarasi bensin(kuantitas)
    int a2=300;
    char bsn[999];

    //deklarasi game over
    char go[999];

    //deklarasi nyawa
    int a3=100;
    char hp[999];

    //random tempat muncul rintangan dan kecepatannya
    for(int i=0;i<10;i++)
    {
        xrin[i]=rand()%1000;
        yrin[i]=600;
        dy[i]=rand()%5+1;
    }

    xp=500; yp=100;
    xgas=300; ygas=300;
    xhp=700; yhp=500;

    initwindow(1000,600);
    halamandepan mulai;
    clock_t begin=clock();
    PlaySound(TEXT("gamejalan.wav"), NULL, SND_FILENAME | SND_ASYNC);

    while(1)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        //perulangan bergeraknya rintangan dan kecepatannya
        for (int i=0;i<10;i++)
            {
                yrin[i]=yrin[i]-dy[i];
                if(yrin[i]==0)
                    {
                        yrin[i]=600;
                        xrin[i]=rand()%1000;
                    }
                rintangan(xrin[i],yrin[i],15);
            }

        nyawa(xhp,yhp,3);
        yhp=yhp-1;
        if(yhp<=0)
        {
            yhp=610;
            xhp=rand()%1000;
        }

        gas(xgas,ygas,10);
        ygas=ygas-1;
        if(ygas<=0)
        {
            ygas=610;
            xgas=rand()%1000;
        }

        truk(xp,yp,10);

        //WASD
        if( GetAsyncKeyState(68) < 0 )
        {
            xp=xp+5;
        }
        if( GetAsyncKeyState(65) < 0 )
        {
            xp=xp-5;
        }
        if( GetAsyncKeyState(83) < 0 )
        {
            yp=yp+5;
        }
        if( GetAsyncKeyState(87) < 0 )
        {
            yp=yp-5;
        }

        //batas
        if(xp<0)
        {
            xp=1000;
        }
        if(xp>1000)
        {
            xp=0;
        }
        if(yp<0)
        {
            yp=600;
        }
        if(yp>600)
        {
            yp=0;
        }

        clock_t end=clock();
        if((a2>0)&&(a3>0))
        {
            time_spent +=(double)(end-begin)/CLOCKS_PER_SEC;
        }

        //skor
        a1=time_spent*0.005;
        sprintf(skr,"Skor = %d", a1);
        setcolor(LIGHTCYAN);
        settextstyle(8,0,1);
        outtextxy(10,10, skr);

        //bensin
        a2=a2-time_spent*0.00000000005;
        sprintf(bsn,"Bensin = %d", a2);
        setcolor(LIGHTCYAN);
        settextstyle(8,0,1);
        outtextxy(120,10, bsn);

        //nyawa
        sprintf(hp,"Nyawa = %d", a3);
        setcolor(LIGHTCYAN);
        settextstyle(8,0,1);
        outtextxy(270,10, hp);

        //item nyawa hilang bila kena truk
        if((xhp>-3*10+xp)&&(xhp<3*10+xp)&&(yhp>0.8*10+yp)&&(yhp<13*10+yp))
        {
            yhp=0;
            a3=100;
        }

        //bensin hilang bila kena truk + bensin bertambah
        if((xgas>-3*10+xp)&&(xgas<3*10+xp)&&(ygas>0.8*10+yp)&&(ygas<13*10+yp))
        {
            ygas=0;
            a2=300;
        }

        //truk kena rintangan
        for(int i=0;i<10;i++)
        {
            if((xrin[i]>-3*10+xp)&&(xrin[i]<3*10+xp)&&(yrin[i]>0.8*10+yp)&&(yrin[i]<13*10+yp))
            {
                a3=a3-1;
            }
        }

        //menang
        if(a1>=100)
        {
            cleardevice();
            menang(&a1);
        }

        //game over
            //bensin
        if(a2<=0)
        {
            cleardevice();
            kalah(&a1);
        }

            //nyawa
        if(a3<=0)
        {
            cleardevice();
            kalah(&a1);
        }

        delay(10);
        page=1-page;
        }
    }

    void menang(int *a1)
{
    cleardevice();
    char skr[999];
    int page=0;
    setactivepage(page);
    setvisualpage(page);
    sndPlaySound("menang.wav",SND_ASYNC);
    while(1)
    {
        setcolor(LIGHTCYAN);
        settextstyle(8,0,5);
        outtextxy(395,300,"You Win");
        settextstyle(8,0,1);
        outtextxy(295,425,"Tekan esc untuk kembali ke main menu");
        sprintf(skr,"Skor = %d", *a1);
        settextstyle(8,0,3);
        outtextxy(425,400, skr);

            if(GetAsyncKeyState(27)<0)
            {
                cleardevice();
                mainmenu();
                break;
            }
            page=1-page;
    }
}

    void kalah(int *a1)
{
    cleardevice();
    char skr[999];
    int page=0;
    setactivepage(page);
    setvisualpage(page);
    sndPlaySound("kalah.wav",SND_ASYNC);
    while(1)
    {
        setcolor(LIGHTCYAN);
        settextstyle(8,0,5);
        outtextxy(375,300,"Game Over");
        settextstyle(8,0,1);
        outtextxy(300,425,"Tekan esc untuk kembali ke main menu");
        sprintf(skr,"Skor = %d", *a1);
        settextstyle(8,0,3);
        outtextxy(425,400, skr);

            if(GetAsyncKeyState(27)<0)
            {

                cleardevice();
                mainmenu();
                break;
            }
            page=1-page;
    }
}

    void kredit()
{
    cleardevice();
    while(1)
    {
        setcolor(LIGHTCYAN);
        settextstyle(8,0,3);
        int nmx = textwidth("Gilang Maulana");
        int nmy = textheight("Gilang Maulana");
        outtextxy((1000-nmx)/2,(50-nmy)/2,"Gilang Maulana");

        int nrpx = textwidth("5024201034");
        int nrpy = textheight("5024201034");
        outtextxy((1000-nrpx)/2,(100-nrpy)/2,"5024201034");

        readimagefile("logo.jpg",0,0,1000,600);
        outtextxy(250,550,"Tekan esc untuk kembali ke main menu");

        if(GetAsyncKeyState(27)<0)
        {
            cleardevice();
            clearmouseclick(WM_LBUTTONDOWN);
            return mainmenu();
        }
    }
}

};

int main()
{
    initwindow(1000,600);

    halamandepan mulai;
    mulai.loading();
    return 0;
}
