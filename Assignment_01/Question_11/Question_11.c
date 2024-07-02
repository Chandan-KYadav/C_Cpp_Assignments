// Write a program to take time as an input in below given format and convert the time format and display the result as given below.
// User Input date format - "HH:MM"
// Output Format - "HH hour and MM minute"

#include<stdio.h>

int main()
{
    int HH, MM ;
    printf("Enter date in HH:MM Format \n") ;

    scanf("%d", &HH) ;

    printf("%d:",HH) ;
    scanf("%d", &MM) ;

    printf("%d hour and %d minutes", HH, MM) ;
    return 0 ;
}