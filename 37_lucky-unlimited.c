#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {

    time_t t;
    srand((unsigned)time(&t));

    int choosen_number;
    int lucky_number = rand() % 10 + 1;

    while (true)
    {
        printf("guess the lucky number: ");
        scanf("%d", &choosen_number);

        if(lucky_number == choosen_number) {
            printf("congratulation! you win.\n");
            break;
        }
    }
    
    return 0;
}