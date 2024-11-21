//Q5.Write a program which accept number fro user and return difference between summation of all its factors and non factors.

#include<stdio.h>
int FactDiff(int iNo)
{
    int iSum1 = 0, iSum2=0, iCnt = 0;
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt; 
        }
    }
    return (iSum1-iSum2);

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("The Difference is %d",iRet);
    return 0;
}