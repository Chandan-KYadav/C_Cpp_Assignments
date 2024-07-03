// Write a program to print unit digit of given number.

#include<stdio.h>

int main()
{
    int givenNum = 470 , unitDigit ;
    unitDigit = givenNum % 10 ;

    printf("Given number is %d and its Unit digit is %d.", givenNum, unitDigit) ;

    return 0 ;
}