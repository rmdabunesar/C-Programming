#include <stdio.h>

int main(void) {

    int a, b;
    int ch = 'c';
 

    while (ch != 'q')
    {
        printf("enter two number: ");
        scanf("%d %d", &a, &b);
        printf("result: %d\n", a + b);

        printf("type c to run again and type q to quit: ");
        scanf(" %c", &ch);
    }
    

    return 0;
}