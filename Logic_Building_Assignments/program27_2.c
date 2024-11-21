#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iFreq = 0;
    while(*str != '\0')
    {
        if (*str == ch)
        {
            iFreq = iFreq + 1; 
        }
        str++;
    }
    return iFreq;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is : %d\n",iRet);

    return 0;
}