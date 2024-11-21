//Q2. Write a program which accept number from user and return the count of odd digits.

#include<stdio.h>
int CountOdd(int iNo)
{
    int iDigit = 0, iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("The count of odd numbers is %d",iRet);

    return 0;
}