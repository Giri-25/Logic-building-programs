//Q2.Accept amount in US dollar and return its corresponding value in Indian Currency.Consider 1$ as 70 Rupees.

#include<stdio.h>
int DollarToINR(int iNo)
{
    return (iNo*70);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return 0;
}