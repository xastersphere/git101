#include <stdio.h>

int main()
{
    int a = 100; // ฐาน10
    int b = 0123; // ฐาน8
    int c = 0x3a5d004; // ฐาน16
    int d = 0b1010100100001; // ฐาน2

    int x = 100;
    printf("x : \n", x);
    printf("value : %d\n",x);
    printf("ref : %p\n",&x); // & -> address
    // &x = ? ***can't change address***

    //Pointer = store address
    int arr[5] = {10, 20, 30, 40, 50}; 
    // arr = pointer (*int)
    // arr = &arr[0] (address of [0] in array)
    printf("arr[0] = %d\n",arr[0]);
    printf("arr = %p : &arr[0] = %p\n",arr,&arr[0]);

    //cons: acess and change value out of range index with no error
    printf("arr[100] = %d\n",arr[100]);
    printf("&arr[100] = %p\n",&arr[100]);
}