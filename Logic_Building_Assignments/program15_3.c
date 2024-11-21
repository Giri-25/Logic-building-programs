// Q3.Accept number of rows and number of columns from user and display below pattern.

// Input :     iRow = 5    iCol = 5
// Output :    
//                 a   b   c   d   e
//                 1   2   3   4   5   
//                 a   b   c   d   e
//                 1   2   3   4   5
//                 a   b   c   d   e


#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i%2==0)
            {
                printf("%d\t",j);
            }
            else
            {
                for(j = 1,ch = 'a'; j <= iCol; j++,ch++)
                {
                    printf("%c\t",ch);
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
    char ch = '\0';
    int i,j = 0;
    
    for(i = 1; i <= iRow; i++)
    {    
        for(j = 1,ch = 'a'; j <= iCol; j++, iCnt1++,ch++)
        {
            if(i % 2 != 0)
            {
                cout<<ch<<"\t";
            }
            else
            {
                cout<<iCnt1<<"\t";
            }            
        }
        iCnt1 = 1;
        ch = 'a';
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

    Pattern(iValue1,iValue2);

    return 0;
}