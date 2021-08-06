#include <stdio.h>

int main(void) {

    int year;
    int is_leap_year = 0;

    printf("enter year: ");
    scanf("%d", &year);

    // if (year % 4 == 0) {
    //     if (year % 100 == 0) {
    //         if (year % 400 == 0) {
    //             is_leap_year = 1;
    //         } else {
    //             is_leap_year = 0;
    //         }
    //     } else {
    //         is_leap_year = 1;
    //     }
    // } else {
    //     is_leap_year = 0;
    // }

    if (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400)) {
        is_leap_year = 1;
    }
    

    if (is_leap_year) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not leap year.\n", year);
    }
    
    
    
    

    return 0;
}