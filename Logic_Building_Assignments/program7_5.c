//Q5.Write a program which returns difference between Even factorial and odd factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, ieFact = 1, ioFact = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt%2==0)
        {
            ieFact = ieFact * iCnt;
        }
        else
        {
            ioFact = ioFact *iCnt;
        }
    }
    return (ieFact-ioFact);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    
    printf("The Difference is %d",iRet);

    return 0;

}