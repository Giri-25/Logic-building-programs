// Q2.Accept number of rows and number of columns from user and dsiplay below pattern.

// Input :     iRow = 4        iCol = 4
// Output :        
//             *   *   *   *
//             *   *   *
//             *   *
//             *

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Number of rows and columns should be same!!");
        return;
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= i; j--)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}