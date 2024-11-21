#include<stdio.h>

void Pattern(char *str)
{
    int iCount = 0;
    int i = 0, j = 0;
    char *strp = str;

    while(*strp != '\0')
    {
        iCount++;
        strp++;
    }
    for(i = 1; i <= iCount; i++)
    {
        printf("\n");
        strp = str;

        for( j = 0; j < i ; j++)
        {
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