#include <stdio.h>
#include <time.h>

int main(void) {

    int picked_number, given_number;
    time_t t;

    srand((unsigned)time(&t));
    picked_number = rand() % 10 + 1;

    printf("enter your choosen number: ");
    scanf("%d", &given_number);

    if (given_number == picked_number)
    {
        printf("you will!!!");
    } else
    {
        printf("you lose!!! picked number is %d", picked_number);
    }
    
    return 0;
}