// Q5. Accept N numbers from user and return product of all odd elements.

// Input :   N = 6
//           Elements = 15  66  3   70  10  88
// Output : 45

#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[], int iSize)
{
    int i = 0,iPro = 1, iFlag = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iFlag++;
            iPro = iPro * Arr[i];
        }
    }
    if(iFlag == 0)
    {
        return 0;
    }
    return iPro;
    
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

    iRet = Product(Brr,iCount);

    printf("The product of odd elements is %d",iRet);

    free(Brr);

    return 0;
}