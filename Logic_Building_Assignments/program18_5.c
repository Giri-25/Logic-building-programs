// Q5.Accept number of rows and numbner of columns from user and display below pattern.

// Input :     iRow = 5    iCol = 5
// Output : 
//                 1   2   3   4   5
//                 1   2           5
//                 1       3       5 
//                 1           4   5
//                 1   2   3   4   5   

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Number of rows and number of columns should be same!!");
        return;
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i==j)  || ((i==iRow)&&(j<=iCol)) || ((j==1)   &&(i<=iRow)) || ((i==1)&&(j<=iCol)) || ((j==iCol)&&(i<=iRow)))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Entre numbner of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}