#include <stdio.h> // for in/output
#define M_PI 3.1415 // สามารถใช้ตัวแปรแทนค่าที่กำหนดได้เลย

int a = 10;
double b = 10.5; // aka float
unsigned int c = 2000; // positive int
char d = 'A'; // ascii = 65
char name[] = "Hi World";

int main()
{
    /*
    a += d;
    int ch = 'A' + 10;
    //printf("Hello World!");
    printf("a = %05d , b = %lf\n",a,b);
    printf("c = %-10u , d = %c\n",c,d);
    printf("ch = %c",ch);
    */

    /*
    int x=1/2;
    float y=1.0/2;
    printf("x y : %d %f",x,y);
    */

    /*
    int i=9%5;
    printf("i %d",i);
    */

    printf("n %s",name);
}

/*
complie ด้วย gcc file_name.c => ได้ a.exe
gcc file_name.c -o lab1 ได้ lab1.exe
run ด้วย ./filename
*/