#include<stdio.h>

void Display(char ch)
{   
    printf("Decimal : %d\nOctal : %o\nHexadecimal : %X\n",ch,ch,ch);    
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}