//Q1.Write a program which accept number from user and display its multiplication of factors.

#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0,iPro = 1;
    for(iCnt=1; iCnt<=iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iPro = iPro * iCnt;
        }
    }
    return iPro;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("The product of factors of %d is %d",iValue,iRet);

    return 0;
}