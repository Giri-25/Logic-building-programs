//Q5.Accept number of rows and number of columns from user and display below pattern.

// Input :     iRow = 3    iCol = 3
// Output :        1   2   3
//                 4   5   6
//                 7   8   9

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

        for(j = 1; j <= (iRow*iCol); j++)
        {
            printf("%d\t",j);
            if(j%iCol == 0)
            {
                printf("\n");
            }
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