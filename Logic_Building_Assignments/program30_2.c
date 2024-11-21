#include<stdio.h>
#include<stdbool.h>

bool StrCmpX(char *src, char *dest)
{ 
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
           break;
        }
        src++;
        dest++;
    }
    
    if((*src == '\0') && (*dest == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool bRet = false;
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Infosystems";

    bRet = StrCmpX(arr,brr);

    if(bRet == true)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }

    return 0;
}