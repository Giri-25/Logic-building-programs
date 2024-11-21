//write a program which accepts one number from user and print even factors of number screen

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
     
    for(iCnt = 1; iCnt <= iNo-1; iCnt++)
    {
        if ( ((iNo % iCnt) == 0) && ((iCnt % 2) == 0) )
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}