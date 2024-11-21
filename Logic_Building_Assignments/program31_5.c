#include<stdio.h>

void StrCap(char *str)
{
    int wfound = 0;
    while(*str != '\0')
    {
    if(*str != ' ')
    {
        if((wfound == 0) && (*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        wfound = 1;
        str++;
    }
    else if(*str == ' ')
    {
        wfound = 0;
        str++;
    }
    }
}
int main()
{
    char Arr[100] = "Marvellous infosystems by Piyush Khairnar";

    StrCap(Arr);

    printf("%s",Arr);

    return 0;
}