#include<stdio.h>

void Pattern(char *str)
{
    int iCount = 0;
    int i = 0;
    char *strp = str;

    while(*strp != '\0')
    {
        iCount++;
        strp++;
    }
    for(i = 0; i < iCount; i++)
    {
        printf("\n");
        strp = str;

        while(*strp != '\0')
        {
            if((*strp >= 'A') && (*strp <= 'Z'))
            {
                *strp = *strp + 32;
            }
            printf("%c ",*strp);
            strp++;
        }
    }
}

int main()
{
    char Arr[100] = "Marvellous";

    Pattern(Arr);

    return 0;
}