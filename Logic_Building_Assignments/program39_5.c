// Q5.Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

#include <stdio.h>

int toggle_bits(int num, int start, int end) {

    int mask = ((1 << (end - start + 1)) - 1) << (start - 1);
    
    return num ^ mask;
}

int main() {
    int number, start_pos, end_pos;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the start position: ");
    scanf("%d", &start_pos);

    printf("Enter the end position: ");
    scanf("%d", &end_pos);

    
    int result = toggle_bits(number, start_pos, end_pos);

    printf("The number after toggling bits from position %d to %d is %d.\n", start_pos, end_pos, result);

    return 0;
}