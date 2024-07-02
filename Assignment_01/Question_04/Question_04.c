// Write a program to find the area of circle. Take radius of circle from user as input and print the result in below given format.

// Expected output format - "Area of circle is A having the radius R". Replace area with A and R with radius.

#include<stdio.h>

int main()
{
    float radius_of_cicle, area_of_circle ;

    printf("Enter radius of circle to find area of cicle ") ;
    scanf("%f",&radius_of_cicle) ;

    area_of_circle = 3.14 * (radius_of_cicle * radius_of_cicle) ;
    printf("Area of circle is %.2f having the radius %.2f.", area_of_circle, radius_of_cicle) ;

    return 0 ;
}