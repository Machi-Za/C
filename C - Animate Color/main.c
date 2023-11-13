#include <windows.h>
#include <stdio.h>
int i,x,y,z;
char el[50]=" ||         Hello           ||";
char nm[50]=" || My Name is Machi Zahrya ||";
char ni[50]=" || Nice to meet you ^_^    ||";
char gr[50]=" =============================";
char a[50];
char d[50]="";

void textcolor( unsigned short color)
{
    HANDLE hcon = GetStdHandle (STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute (hcon,color);
}

void gotoxy(int x,int y)
{
    COORD ps = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ps);
}

void animate1(int x,int y,int z)
{
    for (i=x;i<=y; i++)
    {
        textcolor(100+i);
        gotoxy(i,z);
        printf("%s",a);
        Sleep(100);
        gotoxy(i,z);
        printf(" ");
    }
    return (x);
}

void animate2(int x,int y,int z)
{
        for (i=x;i>=y; i--)
    {
        textcolor(100+i);
        gotoxy(i,z);
        printf("%s ",a);
        Sleep(100);
        gotoxy(i,z);
        printf(" ");
    }
    return (x);
}

void animate3()
{
    strcpy(a,gr);animate1(13,24,3);
    strcpy(a,el);animate2(27,24,4);
    strcpy(a,gr);animate1(13,24,5);
    strcpy(a,nm);animate2(27,24,6);
    strcpy(a,ni);animate1(13,24,7);
    strcpy(a,gr);animate2(27,24,8);
    system("color 7f");
}

int main()
{
    animate3();
      for(z=0; z<=10; z++)
      {
        system("color 7f");
        Sleep(500);
        gotoxy(24,3);strcpy(a,gr);
        gotoxy(24,4);strcpy(a,el);
        gotoxy(24,5);strcpy(a,gr);
        gotoxy(24,6);strcpy(a,nm);
        gotoxy(24,7);strcpy(a,ni);
        gotoxy(24,8);strcpy(a,gr);
        system("color ff");
        Sleep(500);
      }
}
