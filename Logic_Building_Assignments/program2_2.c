#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    while( iNo >= iCnt)
    {
        printf("*\t");
        iNo--;
    }

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}