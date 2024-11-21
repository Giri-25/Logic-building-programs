// Q5.Accept N numbers from user and display summation of digits of each number.
// Input : N = 6
//         Elements = 8225 665 3   76  953 858
// Output: 17  17  3   13  17  21

#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[], int iSize)
{
    int i = 0, iNumber = 0, iDigit = 0;
    
    printf("The three digit numbers are : \n");

    for(i = 0; i < iSize; i++)
    {
        int iSum = 0;
        iNumber = Arr[i]; 
        while(iNumber != 0)
        {
            iDigit = iNumber % 10;
            iSum = iSum + iDigit;
            iNumber = iNumber / 10;
        }
        printf("%d\t",iSum);
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

    DigitsSum(Brr,iCount);

    
    free(Brr);

    return 0;
}
