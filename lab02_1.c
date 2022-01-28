#include <stdio.h>
#include <stdlib.h>

int main()
{
    // character array(string) input
    char str[10];
    //gets(str);
    fgets(str,10,stdin); // file get string
    printf("str %s",str);
     
    /*
    // character input
    int c = getchar(); // only 1 char
    printf("=%c",c);
    */

}