// Q3.Accept N numbers from user and return the difference between largest and smallest number.

// Input:  N = 6
//         Elements = 85   66  3   66  93  88
// Output: 90(93-3)

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iSize)
{
    int i = 0, iMax = 0, iMin = 0;
    iMax = Arr[0];
    iMin = Arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return (iMax - iMin); 
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

    iRet = Difference(Brr,iCount);

    printf("The Difference between Maximum and Minimum element is %d",iRet);

    free(Brr);

    return 0;
}
