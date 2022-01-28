#include <stdio.h>

int j; // global variable initial = 0

int main()
{
    int i; // local -> trash initial value
    printf("i j : %d %d", i, j);

    while(i < 10) // repeat until condition is false
    {
        printf("i : %d\n", i);
        i++;
    }

    while(true) // infinite repeating
    {
        printf("i : %d\n", i);
        if(i == 51) break; // Break : stop repeating if meet the conditions
        i++;
    }
}