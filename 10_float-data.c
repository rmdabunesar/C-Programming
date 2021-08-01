#include <stdio.h>

int main() {
    
    // float - %f - 4 bytes
    float a = 45.67F;
    printf("float - %f\n", a);

    // double - %lf - 8 bytes
    double b = 45.67;
    printf("double - %lf\n", b);

    // long double - %Lf - 12 bytes
    long double c = 1234.56789;
    printf("long double - %Lf\n", c);

    return 0;
}