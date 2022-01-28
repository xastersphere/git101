#include <stdio.h>

int main()
{
    int i=5;
    // for( (1):initial variable value เริ่มต้น check ครั้งเดียว ; (2):contidion ; (3):updating value check ทุกครั้งที่จบการทำงาน)
    // all argument optional
    // no (1) = real value of variable

    for(i = 0;i < 100;i++)
    {
        printf("i : %d\n", i);
        //break : cancel
        //continue : start next loop
    }

    /*
    for(;;i++)
    {
        printf("i : %d\n",i)
        if(i==10) break;
    }
    */
}