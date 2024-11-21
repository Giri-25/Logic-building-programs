// Q4.Accept N numbers from user and return frequency of 11 from it.

// Input:  N = 6
//         Elements = 85   66  3   15  93  88
// Output: 0

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iSize)
{
    int i = 0, iCnt = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
        {
            iCnt++;
        }
    }
    return iCnt;
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

    iRet = Frequency(Brr,iCount);

    printf("The frequency of 11 is %d", iRet);

    free(Brr);

    return 0;
}
