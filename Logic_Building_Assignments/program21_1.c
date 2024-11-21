// Q1.Accept N numbers from user and accept one another number as NO, check whether NO is present or not.

// Input:  N = 6
//         NO = 66
//         Elements = 85   66  3   66  93  88
// Output: true

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int NO)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == NO)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iValue = 0;
    bool bRet = false;

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

    printf("Enter a number whose frequency you want : ");
    scanf("%d",&iValue);
    bRet = Check(Brr,iCount,iValue);

    if(bRet == true)
    {
        printf("\nTRUE");
    }
    else
    {
        printf("\nFAlSE");
    }

    free(Brr);

    return 0;
}