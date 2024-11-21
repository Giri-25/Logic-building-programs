//Q2.Write a program which accepts a number from user and display its factors in decreasing order.

#include<stdio.h>
void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt=iNo/2; iCnt>0; iCnt--)
    {
        if(iNo%iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}