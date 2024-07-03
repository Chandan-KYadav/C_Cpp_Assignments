// Write a program to swap a value of two int variable.

#include<stdio.h>

int main()
{
    int var1 = 11, var2 = 22, var = 0 ;
    printf("Two numbers is %d and %d.\n", var1, var2) ;

    var = var1 ;
    var1 = var2 ;
    var2 = var ;

    printf("Swap of two int variables %d and %d.", var1 , var2) ;
    return 0 ;

}