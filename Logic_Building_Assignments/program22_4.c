// Q4.Accept N number of elements from user and display all such numbers which contains 3 digits in it.
// Input:  N = 6
//         Elements = 8225 665 3   46  953 858
// Output: 665 953 858

#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[], int iSize)
{
    int i = 0, iNumber = 0;
    
    printf("The three digit numbers are : \n");

    for(i = 0; i < iSize; i++)
    {
        int  iCnt = 0;
        iNumber = Arr[i]; 
        while(iNumber != 0)
        {
            iNumber = iNumber/10;
            iCnt++;
        }
        if(iCnt == 3)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("\nEnter %d elements : \n",iCount);
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Digits(Brr,iCount);

    
    free(Brr);

    return 0;
}
