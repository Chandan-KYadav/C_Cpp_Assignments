// Write a program to print a given number without its last digit.

#include<stdio.h>

int main()
{
    int givenNum = 123 , result ;
    result = givenNum / 10 ;

    printf("Given number is %d and the number without last digit is %d.", givenNum, result) ;
    
    return 0 ;
}