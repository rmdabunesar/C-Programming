#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {

    time_t t;
    srand((unsigned)time(&t));

    int choosen_number, chance = 3;
    bool is_loss = true;
    int lucky_number = rand() % 10 + 1;

    while (chance > 0)
    {
        printf("guess the lucky number (chance %d): ", chance);
        scanf("%d", &choosen_number);

        if(lucky_number == choosen_number) {
            printf("congratulation! you win.\n");
            is_loss = false;
            break;
        }

        chance--;

    }

    if (is_loss)
    {
        printf("you have lose! the lucky number was: %d\n", lucky_number);
    }
    
    
    return 0;
}