//Q1.Write a program which accept one numbr from user and count number of ON(1) bits in it without using % and / operator.

#include <stdio.h>

int count_on_bits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int on_bits = count_on_bits(number);
    printf("The number of ON (1) bits in %d is %d.\n", number, on_bits);
    
    return 0;
}