#include <stdio.h>

void ps(char *s)
{
    for(char *p = s; *p != '\0' ; p++)
        printf("[%p] = %c\n",p,*p);
}

void pa(int *b,int size)
{
    for(int *i = b; i < b+size ; i++) // i++ = +4 each (size of int)
        printf("%d ",*i);
    printf("\n");
}

void at(int *b,int size)
{
    for(int *i = b; i < b+size ; i++) // i++ = +4 each (size of int)
        *i += 10 // change value in that address
}

int main()
{
    char a[] = "Hello World";
    int b[5] = {10,20,30,40,50};
    
    //pass by reference -> address as parameter
    ps(&a[0])
    pa(b);

    for(int i=0;i<5;i++) printf("%d ",b[i]); // 10 20 30 40 50
    printf("\n");
    at(b);
    printf("Added:\n")
    for(int i=0;i<5;i++) printf("%d ",b[i]); // 20 30 40 50 60 
    printf("\n"); 

}