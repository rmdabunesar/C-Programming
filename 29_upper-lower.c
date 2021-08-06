#include <stdio.h>

int main(void) {

    char letter;
    printf("enter your letter: ");
    scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'Z') {
        printf("lowercase of '%c' is '%c'\n", letter, letter + 32);
    } else if (letter >= 'a' && letter <= 'z') {
        printf("uppercase of '%c' is '%c'\n", letter, letter -32);
    } else {
        printf("invalid letter\n");
    }
    
    return 0;
}