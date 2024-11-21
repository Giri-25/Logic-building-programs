#include<stdio.h>
#include<stdbool.h>

bool StrCmpX(char *src, char *dest,int iCnt)
{ 
    while((*src != '\0') && (*dest != '\0') && (iCnt != 0))
    {
        if(*src != *dest)
        {
           break;
        }
        src++;
        dest++;
        iCnt--;
    }
    
    if((*src == '\0') && (*dest == '\0') || (iCnt == 0))
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
    char brr[30] = "Marvellous Logic Building";

    bRet = StrCmpX(arr,brr,10);

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