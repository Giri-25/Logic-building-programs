// Q5.Write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number.(Nibble is a group of four bits).

#include <stdio.h>


int toggle_nibbles(int num) {
    
    int first_nibble_mask = 0xF;
    
    int last_nibble_mask = 0xF << 28;

    
    num ^= first_nibble_mask;
    
    num ^= last_nibble_mask;

    return num;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    int modified_number = toggle_nibbles(number);

    printf("The modified number after toggling the first and last nibbles is %d.\n", modified_number);

    return 0;
}