#include<stdio.h>

int Difference(char *str)
{
    int iCntS = 0, iCntC;   
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
        iCntS++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
        iCntC++;
        }
        str++;
    }  
    return iCntS - iCntC;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference between frequemcy of small letters and capital letters is : %d\n",iRet);
    return 0;
}