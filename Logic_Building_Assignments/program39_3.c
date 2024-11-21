//Q3.Write a program which accept one number from user and check whether 9th or 12th bit is on or off.

#include <stdio.h>

void check_bits(int num) {
    
    int mask_9th_bit = 1 << 8;   
    int mask_12th_bit = 1 << 11; 

    
    if (num & mask_9th_bit) {
        printf("The 9th bit is ON.\n");
    } else {
        printf("The 9th bit is OFF.\n");
    }

    
    if (num & mask_12th_bit) {
        printf("The 12th bit is ON.\n");
    } else {
        printf("The 12th bit is OFF.\n");
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    check_bits(number);

    return 0;
}