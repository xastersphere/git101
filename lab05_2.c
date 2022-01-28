#include <stdio.h>

int main()
{
    int x = 5 , data[5] = {10, 20, 30, 40, 50};
    int *ptr = x; // ptr store &x
    int *arrptr = data; // arrptr store &data[0];

    printf("ptr\n");
    printf("ref = %p\n",ptr);
    printf("value = %d\n",*ptr); // dereferencing

    printf("arrptr\n");
    printf("ref = %p\n",arrptr);
    printf("value = %d\n",*arrptr); // = data[0]

    *ptr = 100;
    printf("x = %d",x); // x = 100
}