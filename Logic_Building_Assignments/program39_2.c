//Q2.Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

#include <stdio.h>

void display_common_on_bits(int num1, int num2) {
    int position = 1; 
    int common_bits = num1 & num2; 
    
    printf("Common ON bit positions: ");
    while (common_bits) {
        if (common_bits & 1) {
            printf("%d ", position);
        }
        common_bits >>= 1;
        position++;
    }
    printf("\n");
}

int main() {
    int number1, number2;
    
    printf("Enter the first number: ");
    scanf("%d", &number1);
    
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    display_common_on_bits(number1, number2);
    
    return 0;
}