#include <stdio.h>

int main() {

    unsigned char a = 12;
    unsigned char b = 25;

    unsigned char and = a & b;
    printf("and operation - %d\n", and);

    unsigned char or = a | b;
    printf("or operation - %d\n", or);

    unsigned char xor = a ^ b;
    printf("xor operation - %d\n", xor);

    unsigned char compliment = ~25;
    printf("xor operation - %d\n", compliment);

    unsigned char right_shift1 = 212 >> 1;
    printf("right shift 1 operation - %d\n", right_shift1);
    unsigned char right_shift2 = 212 >> 2;
    printf("right shift 2 operation - %d\n", right_shift2);

    unsigned char left_shift1 = 212 << 1;
    printf("right shift 1 operation - %d\n", left_shift1);
    unsigned char left_shift2 = 212 << 2;
    printf("right shift 2 operation - %d\n", left_shift2);

    return 0;
}



/*
    and operation
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    &  -> 0 0 0 0 1 0 0 0   8(10)

    or operation
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    |  -> 0 0 0 1 1 1 0 1   29(10)

    xor operation 
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    ^  -> 0 0 0 1 0 1 0 1   21(10)

    compliment operation 
    25 -> 0 0 0 1 1 0 0 1
    ~  -> 1 1 1 0 0 1 1 0   230(10)

    right shift
    212 -> 1 1 0 1 0 1 0 0
    >>1 -> 0 1 1 0 1 0 1 0  106(10)
    >>2 -> 0 0 1 1 0 1 0 1  53(10)

    left shift
    212 -> 1 1 0 1 0 1 0 0  
    <<1 -> 1 0 1 0 1 0 0 0  168(10)
    <<2 -> 0 1 0 1 0 0 0 0  80(10)
*/