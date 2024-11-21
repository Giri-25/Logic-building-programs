// Q2.Accept N number from user and return the smallest number.
// Input:  N = 6
//         Elements = 85   66  3   66  93  88
// Output: 3

#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[], int iSize)
{
    int i = 0, iMin = 0;
    iMin = Arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMin; 
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

    iRet = Minimum(Brr,iCount);

    printf("The Minimum element is %d",iRet);

    free(Brr);

    return 0;
}
