#include <stdio.h>

int main() {

    int score[] = {10, 20, 30, 40, 50, 60};
    printf("size of score array: %d\n", sizeof(score));
    printf("size of score array: %d\n", sizeof(score[0]));
    printf("length of array: %d\n", sizeof(score)/sizeof(score[0]));

    return 0;
}