#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int board(void);
int row0col0(int i, int j);
int row0col1(int i, int j);
int row0col2(int i, int j);
int row1col0(int i, int j);
int row1col1(int i, int j);
int row1col2(int i, int j);
int row2col0(int i, int j);
int row2col1(int i, int j);
int row2col2(int i, int j);

int s[4][4]= {0};
int main()
{
    /* request auto detection */
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver,&gmode,"d:\\tc\\bgi");

    int table=board();
    int x,y;
    printf("here\n");
    int i,j,k,z=3;
    for(i=1; i<=9; i++)
    {
        // Mouse click listener.
        while(!ismouseclick(WM_LBUTTONUP)) {}
        printf("Clicked\n");
        if(1)
        {
            getmouseclick(WM_LBUTTONUP,x,y);
            //finding the location of mouse click//

            if(x>=100&&x<=200&&y>=100&&y<200)
            {
                j=1;
            }
            else if(x>=200&&x<=300&&y>=100&&y<=200)
            {
                j=2;
            }
            else if(x>=300&&x<=400&&y>=100&&y<=200)
            {
                j=3;
            }
            else if(x>=100&&x<=200&&y>=200&&y<=300)
            {
                j=4;
            }
            else if(x>=200&&x<=300&&y>=200&&y<=300)
            {
                j=5;
            }
            else if(x>=300&&x<=400&&y>=200&&y<=300)
            {
                j=6;
            }
            else if(x>=100&&x<=200&&y>=300&&y<=400)
            {
                j=7;
            }
            else if(x>=200&&x<=300&&y>=300&&y<400)
            {
                j=8;
            }
            else if(x>=300&&x<=400&&y>=300&&y<400)
            {
                j=9;
            }
            //drawing the circle or cross//
            if(j==1)
            {
                if(s[0][0]==1 || s[0][0]==-1) i--;
                else
                int _1st_squar=row0col0(i,j);
            }
            if(j==2)
            {
                if(s[0][1]==1 || s[0][1]==-1) i--;
                else
                int _2nd_squar=row0col1(i,j);
            }
            if(j==3)
            {
                if(s[0][2]==1 || s[0][2]==-1) i--;
                else
                int _3rd_squar=row0col2(i,j);
            }
            if(j==4)
            {
                if(s[1][0]==1 || s[1][0]==-1) i--;
                else
                int _4th_squar=row1col0(i,j);
            }
            if(j==5)
            {
                if(s[1][1]==1 || s[1][1]==-1) i--;
                else
                int _5th_squar=row1col1( i, j);
            }
            if(j==6)
            {
                if(s[1][2]==1 || s[1][2]==-1) i--;
                else
                int _6th_squar=row1col2( i, j);
            }
            if(j==7)
            {
                if(s[2][0]==1 || s[2][0]==-1) i--;
                else
                int _7th_squar=row2col0( i, j);
            }
            if(j==8)
            {
                if(s[2][1]==1 || s[2][1]==-1) i--;
                else
                int _8th_squar=row2col1( i, j);
            }
            if(j==9)
            {
                if(s[2][2]==1 || s[2][2]==-1) i--;
                else
                int _9th_squar=row2col2( i, j);
            }

            int a,b,c=0,d=0,f=0,g=0;//to determine the result//
            f=s[0][0]+s[1][1]+s[2][2];
            g=s[0][2]+s[1][1]+s[2][0];
            for(a=0; a<3; a++)
            {
                c=0;
                d=0;
                for(b=0; b<3; b++)
                {
                    c=c+s[a][b];
                    d=d+s[b][a];
                }
                if(c==3 ||d==3 || f==3 || g==3)
                {
                    printf("Circle wins");
                    z=1;

                    setcolor(GREEN);//TO SHOW WIN//
                    circle(250,450,25);
                    line(290,425,290,475);
                    line(290,475,320,425);
                    line(320,425,350,475);
                    line(350,475,350,425);
                    line(350,475,350,425);
                    line(360,425,360,475);
                    line(355,425,365,425);
                    line(355,475,365,475);
                    line(370,425,370,475);
                    line(370,425,400,475);
                    line(400,475,400,425);

                    if(s[0][0]+s[0][1]+s[0][2]==3)//to draw line of win in row if the winer is circle//
                    {
                        line(100,150,400,150);
                    }
                    if(s[1][0]+s[1][1]+s[1][2]==3)
                    {
                        line(100,250,400,250);
                    }
                    if(s[2][0]+s[2][1]+s[2][2]==3)
                    {
                        line(100,350,400,350);
                    }


                    if(s[0][0]+s[1][0]+s[2][0]==3)//to draw line of win in col if the winer is circle//
                    {
                        line(150,100,150,400);
                    }
                    if(s[0][1]+s[1][1]+s[2][1]==3)
                    {
                        line(250,100,250,400);
                    }
                    if(s[0][2]+s[1][2]+s[2][2]==3)
                    {
                        line(350,100,350,400);
                    }
                    if(s[0][0]+s[1][1]+s[2][2]==3)//to draw the line of win in diagonal if the winer is circle//
                    {
                    line(100,100,400,400);
                    }
                   if(s[0][2]+s[1][1]+s[2][0]==3)
                   {
                    line(100,400,400,100);
                   }
                    break;
                }

                if(c==-3 || d==-3 || f==-3 || g==-3)
                {
                    printf("Cross wins");
                    z=1;
                    setcolor(13);  //TO SHOW IN//
                    line(230,425,270,475);
                    line(230,475,270,425);

                    setcolor(GREEN);
                    line(290,425,290,475);
                    line(290,475,320,425);
                    line(320,425,350,475);
                    line(350,475,350,425);
                    line(350,475,350,425);
                    line(360,425,360,475);
                    line(355,425,365,425);
                    line(355,475,365,475);
                    line(370,425,370,475);
                    line(370,425,400,475);
                    line(400,475,400,425);

                    if(s[0][0]+s[0][1]+s[0][2]==-3)//to draw line of win in row if the winer is cross//
                    {
                        line(100,150,400,150);
                    }
                    if(s[1][0]+s[1][1]+s[1][2]==-3)
                    {
                        line(100,250,400,250);
                    }
                    if(s[2][0]+s[2][1]+s[2][2]==-3)
                    {
                        line(100,350,400,350);
                    }


                    if(s[0][0]+s[1][0]+s[2][0]==-3)//to draw line of win in col if the winer is cross//
                    {
                        line(150,100,150,400);
                    }
                    if(s[0][1]+s[1][1]+s[2][1]==-3)
                    {
                        line(250,100,250,400);
                    }
                    if(s[0][2]+s[1][2]+s[2][2]==-3)
                    {
                        line(350,100,350,400);
                    }
                   if(s[0][0]+s[1][1]+s[2][2]==-3)//to draw the line of win in diagonal if the winer is cross//
                   {
                    line(100,100,400,400);
                   }
                   if(s[0][2]+s[1][1]+s[2][0]==-3)
                   {
                    line(100,400,400,100);
                   }
                    break;
                }
                if(z==1) break;
            }

            if(z==1) break;
        }
    }
    if(z>1)
    {
        printf("No one wins");
        setcolor(YELLOW);     //TO SHOW DRAW//
        line(290,425,290,475);
        line(290,425,320,440);
        line(320,440,320,460);
        line(320,460,290,475);

        line(325,425,325,475);
        line(325,425,340,431);
        line(340,431,340,444);
        line(340,444,325,450);
        line(325,450,345,475);

        line(350,475,380,425);
        line(380,425,410,475);
        line(365,450,395,450);

        line(415,425,415,475);
        line(415,475,445,425);
        line(445,425,475,475);
        line(475,475,475,425);

        circle(530,450,25);
        circle(517,445,1);
        circle(543,445,1);
        line(517,460,540,460);
    }
    getch();
    return 0;
}
int board(void)
{
    setcolor(5);
    line(100,100,400,100);
    line(100,100,100,400);
    line(100,400,400,400);
    line(400,100,400,400);
    line(100,200,400,200);
    line(100,300,400,300);
    line(200,100,200,400);
    line(300,100,300,400);
}
int row0col0(int i,int j)
{
    if(i%2==1&&j==1)
    {
        setcolor(GREEN);
        circle(150,150,25);
        s[0][0]=1;//to determine circle location//
    }
    if(i%2==0&&j==1)
    {
        setcolor(13);
        line(130,125,170,175);
        line(130,175,170,125);
        s[0][0]=-1;//to determine cross location//
    }
    return s[0][0];
}
int row0col1(int i,int j)
{
    if(i%2==1&&j==2)
    {
        setcolor(GREEN);
        circle(250,150,25);
        s[0][1]=1;
    }
    if(i%2==0&&j==2)
    {
        setcolor(13);
        line(230,125,270,175);
        line(230,175,270,125);
        s[0][1]=-1;
    }
     return s[0][1];
}
int row0col2(int i,int j)
{
    if(i%2==1&&j==3)
    {
        setcolor(GREEN);
        circle(350,150,25);
        s[0][2]=1;
    }
    if(i%2==0&&j==3)
    {
        setcolor(13);
        line(330,125,370,175);
        line(330,175,370,125);
        s[0][2]=-1;
    }
     return s[0][2];
}
int row1col0(int i,int j)
{
    if(i%2==1&&j==4)
    {
        setcolor(GREEN);
        circle(150,250,25);
        s[1][0]=1;
    }
    if(i%2==0&&j==4)
    {
        setcolor(13);
        line(130,225,170,275);
        line(130,275,170,225);
        s[1][0]=-1;
    }
     return s[1][0];
}
int row1col1(int i,int j)
{
    if(i%2==1&&j==5)
    {
        setcolor(GREEN);
        circle(250,250,25);
        s[1][1]=1;
    }
    if(i%2==0&&j==5)
    {
        setcolor(13);
        line(230,225,270,275);
        line(230,275,270,225);
        s[1][1]=-1;
    }
     return s[1][1];
}
int row1col2(int i,int j)
{
    if(i%2==1&&j==6)
    {
        setcolor(GREEN);
        circle(350,250,25);
        s[1][2]=1;
    }
    if(i%2==0&&j==6)
    {
        setcolor(13);
        line(330,225,370,275);
        line(330,275,370,225);
        s[1][2]=-1;
    }
     return s[1][2];
}
int row2col0(int i,int j)
{
    if(i%2==1&&j==7)
    {
        setcolor(GREEN);
        circle(150,350,25);
        s[2][0]=1;
    }
    if(i%2==0&&j==7)
    {
        setcolor(13);
        line(130,325,170,375);
        line(130,375,170,325);
        s[2][0]=-1;
    }
     return s[2][0];
}
int row2col1(int i,int j)
{
    if(i%2==1&&j==8)
    {
        setcolor(GREEN);
        circle(250,350,25);
        s[2][1]=1;
    }
    if(i%2==0&&j==8)
    {
        setcolor(13);
        line(230,325,270,375);
        line(230,375,270,325);
        s[2][1]=-1;
    }
     return s[2][1];
}
int row2col2(int i,int j)
{
    if(i%2==1&&j==9)
    {
        setcolor(GREEN);
        circle(350,350,25);
        s[2][2]=1;
    }
    if(i%2==0&&j==9)
    {
        setcolor(13);
        line(330,325,370,375);
        line(330,375,370,325);
        s[2][2]=-1;
    }
     return s[2][2];
}





