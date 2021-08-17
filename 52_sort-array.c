// sort array in ascending order.
#include <stdio.h>

int main(void) {
    int my_array[100];
    int n, i, j, tmp;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++) {

        printf("my_array[%d] : ",i);
        scanf("%d",&my_array[i]);

    }

    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {

            if(my_array[j] < my_array[i]) {
                tmp = my_array[i];
                my_array[i] = my_array[j];
                my_array[j] = tmp;
            }

        }
    }
    
    printf("\narray in sorted ascending order:\n");
    for(i=0; i<n; i++) {
        printf("%d  ", my_array[i]);
    }

    return 0;
}