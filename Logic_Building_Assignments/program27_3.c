#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iPos = -1, iCnt = 1;
    while(*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt; 
            break;     
        }
        iCnt++;
        str++;
    }
    return iPos;
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

    iRet = FirstChar(arr,cValue);

    printf("Character location is : %d\n",iRet);

    return 0;
}