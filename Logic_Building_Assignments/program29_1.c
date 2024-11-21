#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *srcp = src;
    while(*src != '\0')
    {
        src++;
    }
    src--;
    while(src >= srcp)
    {
        *dest = *src;      
        dest++;
        src--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}