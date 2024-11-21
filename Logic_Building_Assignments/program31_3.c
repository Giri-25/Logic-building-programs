#include<stdio.h>

void StrWrdRev(char *str)
{  
    char *start = NULL, *end = NULL;
    char temp = '\0';
    while((*str != '\0'))
    {  
        start = str;
        end = str;
        
        while((*end != ' ') && (*end !='\0'))
        {
            end++;
        } 
        end--;
        while(start < end)
        {
            temp = *start;
            *start = *end;
            *end = temp;

            start++;
            end--;
            str += 2;
        }
        if(str == '\0')
        {
            break;
        }
        str++;              
    }
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";

    StrWrdRev(Arr);

    printf("Modified string : %s",Arr);

    return 0;
}