// Q2.Write a program which accept one number and position from user and off that bit.Return modified number.

#include <stdio.h>

int off_bit(int num, int position) {
    
    int mask = ~(1 << (position - 1));
    
    
    return num & mask;
}

int main() {
    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the position: ");
    scanf("%d", &position);

    
    int modified_number = off_bit(number, position);

    printf("The modified number after turning off the bit at position %d is %d.\n", position, modified_number);

    return 0;
}