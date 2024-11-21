#include<stdio.h>

void StrRevX(char *str)
{
    char *Start = str;
    char *End = str;
    char cTemp = '\0';
    char *Temp = &cTemp ;
    while(*End != '\0')
    {
        End++;
    }
    End--;
    while(Start < End)
    {
        Temp = *Start;
        *Start = *End;
        *End = Temp;
        Start++;
        End--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is : %s",arr);

    return 0;
}