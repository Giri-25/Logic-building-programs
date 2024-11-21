#include<stdio.h>

void Display(char ch)
{   
    char v = '\0';
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for( v = ch; v <= 'Z'; v++)
        {
            printf("%c\t",v);
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for( v = ch; v >= 'a'; v--)
        {
            printf("%c\t",v);
        }
    }  
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}