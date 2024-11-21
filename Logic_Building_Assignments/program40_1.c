// Q1.Write a program which accept one number and position from user and check whether bit at that position i on or off. If bit is one return TRUE otherwise return FALSE. 

#include <stdio.h>


typedef enum { FALSE, TRUE } bool;

bool check_bit(int num, int position) {
    
    int mask = 1 << (position - 1);
    
    
    if (num & mask) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    int number, position;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the position: ");
    scanf("%d", &position);

    
    if (check_bit(number, position)) {
        printf("The bit at position %d is ON.\n", position);
    } else {
        printf("The bit at position %d is OFF.\n", position);
    }

    return 0;
}