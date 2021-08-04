#include <stdbool.h>

int main(void) {

    char letter = 'A';
    printf("%c, %d, %x\n", letter, letter, letter);

    float a = 4.5f;
    float b = 5.3f;
    float c = 6.2f;

    int result = a + b + c;
    printf("Sum(no conv) = %d\n", result);

    int result1 = (int)a + (int)b + (int)c;
    printf("Sum(convertion) = %d\n", result1);

    return 0;
}