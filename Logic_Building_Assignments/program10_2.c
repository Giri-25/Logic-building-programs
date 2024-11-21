//Q2.Write a program which accept a number from user and check whether it contains 0 in it or not.

#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo/10;
    }
    return false;
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("\nZero");
    }
    else
    {
        printf("\nNon Zero");
    }

    return 0;
    
}