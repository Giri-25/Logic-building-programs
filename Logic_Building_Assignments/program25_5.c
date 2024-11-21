#include<stdio.h>
#include<stdbool.h>
void Reverse(char *str)
{   
    while(*str != '\0')
    { 
        str++;
    }
    str--;
    while(*str != '\0')
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}