#include<stdio.h>

void Display(char ch)
{   
    char v = '\0';
    if ((ch >= 65) && (ch <= 90))
    {
        v = ch + 32;
    }
    else if ((ch >= 97) && (ch <= 122))
    {
        v = ch - 32;
    }
    else
    {
        v = ch;
    }
    printf("The value is : %c",v);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}