#include <stdio.h>

/*
returntype name(all parameter)
{
    statement
    return // referred to return type
}
*/
int a = 10;

int add_a(int x)
{
    printf("x = %d", x);
    x += a; // a undefined. Take a's value from larger scope
    printf("added a : x = %d", x);
    return x;
}

int main()
{
    int x = 90;
    int y = add_a(x);
    printf("x,y : %d,%d", x, y); // value of x in main function does not change -> pass by value
}