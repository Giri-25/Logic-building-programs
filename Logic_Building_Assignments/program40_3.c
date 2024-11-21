// Q3.Write a program which accept one number and position from user and on that bit.Return modified number.

#include <stdio.h>

int on_bit(int num, int position) {
    
    int mask = 1 << (position - 1);
    
    the specified position using the bitwise OR operation
    return num | mask;
}

int main() {
    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the position: ");
    scanf("%d", &position);

    
    int modified_number = on_bit(number, position);

    printf("The modified number after turning on the bit at position %d is %d.\n", position, modified_number);

    return 0;
}