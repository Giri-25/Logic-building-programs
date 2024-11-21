// Q5.Accept number of rows and columns from user and display below pattern.

// Input :     iRow = 4        iCol = 4
// Output :        
//                 1   2   3   4
//                 2   3   4   5
//                 3   4   5   6  
//                 4   5   6   7


#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i<=iRow; i++)
    {
        for(j = i; j<iCol+i; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

void pattern(int iRow, int iCol)
{
    int iCnt1 = 1;
    int i,j = 0;
    
    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1; j <= iCol; j++, iCnt1++)
        {
            cout<<iCnt1<<"\t";           
        }
        iCnt1 = 1;
        cout<<"\n";
        iCnt1+=i; 
    }      
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Entre number od columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
