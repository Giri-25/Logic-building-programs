#include<stdio.h>

void StrCpyX(char *src, char *dest)
{  
    int wfound = 0;
    char *strp = src;
    while(*src != '\0')
    {  
        if(*src != ' ')
        {
            if(wfound == 1)
            {
                *dest = ' ';
                dest++;
            }
            else
            {
                *dest = *src;
                src++;
                dest++;
            }
            wfound = 0;
            continue;
        }
        else
        {
            if(*strp == ' ')
            {
                wfound = 0;
                strp++;
                src++;
            }
            else
            {
                wfound = 1;
                src++;
            }
        }            
    }
    *dest = '\0';
}

int main()
{
    char Arr[100] = "Marvellous  Multi      OS";
    char Brr[100];

    StrCpyX(Arr,Brr);

    printf("Modified string : %s",Brr);

    return 0;
}