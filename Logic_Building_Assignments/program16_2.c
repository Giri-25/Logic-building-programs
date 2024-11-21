// Q2.Accept number of rows and number of columns from user and display below pattern.

// Input :     iRow = 4        iCol = 4
// Output :        
//                 *   *   *   *
//                 *   *   *   #
//                 *   *   #   #   
//                 *   #   #   #

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Number of rows and columns should be same!!");
        return;
    }
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++)
        {
           if(i+j>=iRow+2)
           {
            printf("#\t");
           }
           else
           {
            printf("*\t");
           }
        }
        printf("\n");
    }
}
//girija
void pattern(int iRow, int iCol)
{
    int iCnt1 = 1;
    int i,j = 0;
    
    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1; j <= iCol; j++)
        {
           if(i+j <= iRow+1)
           {
            cout<<"*\t";
           }
           else
           {
            cout<<"#\t";
           }           
        }
        cout<<"\n";
    }      
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}