//Q2.Write a program which accept range from user and display all even numbers in between that range.

#include<stdio.h>
void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    int iCnt = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2==0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point number : ");
    scanf("%d",&iValue1);

    printf("Enter ending point number : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}