//Q3.Write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit == 2)
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
    int iRet  = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("\nThe frequency of 2 is %d",iRet);

    return 0;

}