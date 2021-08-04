#include <stdio.h>

int main(void) {

    short is_logged_in;
    printf("Do you want to login: ");
    scanf("%hd", &is_logged_in);

    if (is_logged_in)
    {
        printf("Yes, I want.\n");
    }else
    {
        printf("No, I don't want.\n");
    }
    
    

    return 0;
}