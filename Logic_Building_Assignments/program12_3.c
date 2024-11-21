//Q3.Accept number from user and display pattern.
//Input : 3
//Output : 1    *   2   *   3   *

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

