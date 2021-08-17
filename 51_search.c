#include <stdio.h>

int main(void) {

    int id[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(id) / sizeof(id[0]);
    int search_key, i;
    int is_found = 0;

    printf("enter search key: ");
    scanf("%d", &search_key);

    for (i = 0; i < length; i++) {

        if (id[i] == search_key) {
            is_found = 1;
            break;
        }
        
    }

    if (is_found == 1) {
        printf("id[%d] = %d", i, id[i]);
    } else {
        printf("Not found.");        
    }
    
    return 0;
}