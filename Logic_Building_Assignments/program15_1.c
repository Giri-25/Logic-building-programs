// Q1.Accept number of rows and number of columns from user and display below pattern.

// Input :     iRow = 4    iCol = 4
// Output :        1   2   3   4
//                 5   6   7   8
//                 9   1   2   3
//                 4   5   6   7

#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int j = 0, iCount = 0;

        for(j = 1,iCount = 1; j <= 9; j++,iCount++)
        {
            printf("%d\t",j);
            if(iCount%iCol==0)
            {
                printf("\n");
            }
            if(j==9)
            {
                j = 0;
            }
            if(iCount==iRow*iCol)
            {
                break;
            }
        }
        // printf("\n");
    
}
//Girija'code
void pattern(int iRow, int iCol)
{
    int iCnt = 1;
    int i,j = 0;
    
    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1; j <= iCol; j++, iCnt++)
        {
            if (iCnt <= 9)
            {
                cout<<iCnt<<"\t";
            }
            if(iCnt == 9)
            {
                iCnt = 0;
            }            
        } 
        cout<<"\n";
    }    
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue2,iValue1);

    return 0;
}