#include<stdio.h>
#include<stdbool.h>

bool StrPalindrome(char *str)
{
    char *start,*last;
    start = str;
    last = str;
    bool bFlag = true;
    while(*last != '\0')
    {
        last++;
    }
    last--;
    while(start < last)
    {
        if((*start >= 'A') && (*start <= 'Z'))
        {
            *start = *start + 32;
        }
        else if((*start >= 'A') && (*start <= 'Z'))
        {
            *start = *start + 32;
        }
        if(*start != *last)
        {
            bFlag = false;
            break;
        }
        start++;
        last--;    
    }
}

int main()
{
    bool bRet = false;

    char arr[50] = "1abccBA1";

    bRet = StrPalindrome(arr);

    if(bRet == true)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}