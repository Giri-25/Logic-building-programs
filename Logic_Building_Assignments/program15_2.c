//Q2.Accept number of rows and columns from user and display below pattern.

// Input :     iRow = 4    iCol = 5
// Output :        
//                 2   4   6   8   10
//                 1   3   5   7   9
//                 2   4   6   8   10
//                 1   3   5   7   9

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0 ,k = 0, iCount = 0; 
    for(i = 1; i <= iRow; i++)
    {
        for(j = 2; j <= (iCol*2); j+=2)
        {
            if(i%2 != 0)
            {
                printf("%d\t",j);
            }
            else
            {
                for(j = 1; j <= iCol*2; j+=2)
                {
                    printf("%d\t",j);
                }
            }
        }
        printf("\n");
    }   
}
//Girija's code
void pattern(int iRow, int iCol)
{
    int iCnt1 = 1;
    int iCnt2 = 2;
    int i,j = 0;
    
    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1; j <= iCol; j++, iCnt1+=2,iCnt2+=2)
        {
            if(i % 2 != 0)
            {
                cout<<iCnt2<<"\t";
            }
            else
            {
                cout<<iCnt1<<"\t";
            }            
        }
        iCnt1 = 1;
        iCnt2 = 2; 
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

    Pattern(iValue1,iValue2);

    return 0;
}
