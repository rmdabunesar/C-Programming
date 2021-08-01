#include <stdio.h>

int main(void) {

    //signed short int - %hi or %hd - 2 bytes [−32,767 ~ +32,767] 
    short a = 32767;
    printf("short - %hi\n", a);
    //unsigned short int - %hu - 2 bytes [0 ~ 65,535]
    unsigned short A = 65535;
    printf("unsigned short - %hu\n", A);


    //signed int - %i or %d - 2 bytes [−32,767 ~ +32,767]
    int b = 32767;
    printf("int - %d\n", b);
    //unsigned int - %u - 2 bytes [0 ~ 65,535]
    unsigned int B = 65535;
    printf("unsigned int - %u\n", B);


    //signed long int - %li or %ld - 4 bytes [−2,147,483,647 ~ +2,147,483,647]
    long c = 2147483647;
    printf("long - %ld\n", c);
    //unsigned long int - %lu - 4 bytes [0 ~ 4,294,967,295] 
    unsigned long C = 4294967295;
    printf("unsigned long - %lu\n", C);


    // signed long long int - %lli or %lld - 8 bytes [−9,223,372,036,854,775,807 ~ +9,223,372,036,854,775,807]
    long long d = 9223372036854775807;
    printf("long long - %lld\n", d);
    // unsigned long long int - %llu - 8 bytes  [0 ~ +18,446,744,073,709,551,615]
    unsigned long long D = 18446744073709551615;
    printf("unsigned long long - %llu\n", D);


    //octal int - %o - '0' must be used before octal number.
    int o = 0777;
    printf("octal - %o\n", o);
    printf("decimal of octal - %d\n", o);


    //hexadecimal int - %x - '0X' must be used before hexadecimal number.
    int h = 0XFFF;
    printf("hexadecimal - %x\n", h);
    printf("decimal of hexadecimal - %d\n", h);
    

    // unsigned short nagetive number (binary 2's complement)
    unsigned short negetive_number = -2;
    printf("unsigned short nagetive number = %hu\n", negetive_number);

    return 0;
}