//Q1.Accept number of rows and number of columns from user and display below pattern

//Input : iRow = 3      iCol = 3
// Output : A   B   C
//          A   B   C
//          A   B   C   


#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i =0 , j = 0;
    char ch = '\0';
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1,ch = 'A'; j<=iCol; j++,ch++)
        {
            printf("%c\t",ch);
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