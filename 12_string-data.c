#include <stdio.h>

int main(void) {

    // char - %s
    char name[20];
    name[0] = 'A';
    name[1] = 'B';
    name[2] = 'U';
    printf("%s", name);

    char name1[20] = { 'N', 'E', 'S', 'A', 'R' };
    printf(" %s", name1);

    char name2[20] = "RINKON";
    printf(" %s\n", name2);

    printf("%c\n", name2[0]);
    printf("%c\n", name2[5]);

    char my_name[30];
    printf("Your name: ");
    scanf("%s", &my_name);
    printf("Your name: %s", my_name);

    return 0;
}