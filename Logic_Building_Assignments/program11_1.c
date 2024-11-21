//Q1.Write a program which accept number from user and return the count of even digits.

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("The Even count is %d",iRet);

    return 0;
}