// Write a program to take date as an input in below given format and convert the date format and display the result as given below.
// User Input date format - "DD/MM/YYYY" (02/07/2024)
// Output format - "Day - DD, Month - MM, Year - YYYY"

#include<stdio.h>

int main()
{

    int DD, MM, YYYY ;

    printf("Enter Date in DD/MM/YYYY Format\n") ;
    // printf("Enter DD ") ;
    scanf("%d", &DD) ;

    printf("%d / ",DD) ;
    scanf("%d", &MM) ;

    printf("%d / %d / ",DD, MM) ;
    scanf("%d", &YYYY) ;

    printf("Day - %d, Month - %d, Year - %d", DD, MM, YYYY) ;

    return 0 ;
}