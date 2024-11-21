#include<stdio.h>
//accept one number from user and print that number of * on screen
void Accept(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return 0;
}