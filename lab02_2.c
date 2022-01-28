#include <stdio.h>

int main()
{
    char x_str[10],y_str[10],z_str[10]; // ระบุความยาว string 
    fgets(x_str,10,stdin); // ไม่ควรใส่ขนาดเกินบรรทัดด้านบน
    fgets(y_str,10,stdin);
    fgets(z_str,10,stdin);
    int x = atoi(x_str); // convert to int
    float y = atof(y_str); // to float
    long z = atol(z_str); // to long
    printf("%d - %lf - %ld",x,y,z); 
}