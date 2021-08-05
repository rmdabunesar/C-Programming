// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    // prev increment ++a, prev decrement --b
    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    // post increment a++, prev decrement b--
    printf("a++ = %d \n", a++);
    printf("b-- = %d \n", b--);
    printf("c++ = %f \n", c++);
    printf("d-- = %f \n", d--);

    int result1 = a + --a + a--; // a = 10; 10 + 9 + 9 = 28
    printf("result = %d\n", result1);


    return 0;
}