// Write a program to calculate the length of string using printf function.
#include<stdio.h>

int main()
{
    char name[15] = "Learing C/C++." ;
    // char name = 'C' ;

    printf("%lu",sizeof(name)) ;

    return 0 ;
}