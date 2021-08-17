#include <stdio.h>

int main(void) {

    int i, j, row = 5;
    int star = 1, space = row -1;

    for(i = 1; i < row * 2; i++)
    {
        for(j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(j = 1; j<star*2; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i < row)
        {
            space--;
            star++;
        } else
        {
            space++;
            star--;
        }
        
        
    }

    return 0;
}