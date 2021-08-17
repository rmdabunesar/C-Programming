#include <stdio.h>

int main() {
    
    int score[3];

    int sum = 0, i;
    printf("enter three integer:\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d", &score[i]);
    }
    

    for ( i = 0; i < 3; i++)
    {
        sum += score[i];
    }
    printf("sum = %d\n", sum);
    printf("average sum = %d\n", sum/3);
    

    return 0;
}