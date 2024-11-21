// Q1.Accept N numbers from user and return largest number.
// Input:   N = 6
//          Elements = 85  66  3   66  93  88
// Output: 93

#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[], int iSize)
{
    int i = 0, iMax = 0;
    iMax = Arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }

    return iMax; 
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iRet = 0;

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

    iRet = Maximum(Brr,iCount);

    printf("The Maximum element is %d",iRet);

    free(Brr);

    return 0;
}
