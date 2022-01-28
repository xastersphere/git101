#include <stdio.h>

int main()
{
    char x_str[10];
    fgets(x_str,10,stdin);
    int x = atoi(x_str);

    // logic -> && (and), || (or)
    
    // comparing -> > < >= <= == != 
    // Ralational return 1/0 -> true/false
    
    if (x > 400) { 
        printf("if");
    } else if (x <= 400 && x > 100) {
        printf("else if");
    } else {
        printf("else");
    }
}