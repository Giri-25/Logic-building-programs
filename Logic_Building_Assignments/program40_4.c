// Q4.Write a program which accept one number and position from user and toggle that bit.Return that number.

#include <stdio.h>

int toggle_bit(int num, int position) {
    
    int mask = 1 << (position - 1);
    
    
    return num ^ mask;
}

int main() {
    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the position: ");
    scanf("%d", &position);

   
    int modified_number = toggle_bit(number, position);

    printf("The modified number after toggling the bit at position %d is %d.\n", position, modified_number);

    return 0;
}