#include <stdio.h>

int main(void) {

    int i, j, h, w;
    printf("enter height and width( 10 5 ): ");
    scanf("%d %d", &h, &w);

    for ( i = 0; i <= h; i++)
    {
        for ( j = 0; j <= w; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    

    return 0;
}