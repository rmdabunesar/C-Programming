#include <stdio.h>

int main() {

    float num1, num2, result;
    printf("Please enter two number: ");
    scanf("%f %f", &num1, &num2);

    result = num1 + num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    result = num1 - num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    result = num1 * num2;
    printf("%.2f* %.2f = %.2f\n", num1, num2, result);
    result = num1 / num2;
    printf("%.2f / %.2f = %.2f\n", num1, num2, result);

    return 0;
}