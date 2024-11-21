// Q4.Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF.

#include <stdio.h>

void check_bits(int num, int pos1, int pos2) {
    
    int mask_pos1 = 1 << (pos1 - 1); 
    int mask_pos2 = 1 << (pos2 - 1); 

    
    if (num & mask_pos1) {
        printf("The bit at position %d is ON.\n", pos1);
    } else {
        printf("The bit at position %d is OFF.\n", pos1);
    }

    
    if (num & mask_pos2) {
        printf("The bit at position %d is ON.\n", pos2);
    } else {
        printf("The bit at position %d is OFF.\n", pos2);
    }
}

int main() {
    int number, position1, position2;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the first position: ");
    scanf("%d", &position1);

    printf("Enter the second position: ");
    scanf("%d", &position2);

    check_bits(number, position1, position2);

    return 0;
}