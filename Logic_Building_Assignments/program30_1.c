#include<stdio.h>

void StrCatX(char *src, char *dest, int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }
    while((*dest != '\0') && (iCnt != 0))
    {
        *src = *dest;
        src++;
        dest++;
        iCnt--;
    }
    *src = '\0';
}

int main()
{
    char arr[30] = "Marvellous Infosystems ";
    char brr[30] = "Logic Building";

    StrCatX(arr,brr,5);

    printf("%s",arr);

    return 0;
}