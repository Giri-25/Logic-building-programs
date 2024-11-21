// Q5.Accept N number from user and accept one another number as NO, return frequency of NO from it.
// Input :     N = 6
//             NO  = 66
//             Elements = 85   66  3   66  93  88
// Output :  2

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iSize, int NO)
{
    int i = 0, iCount = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == NO)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iRet = 0, iValue = 0;

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
    iRet = Frequency(Brr,iCount,iValue);

    printf("The frequency of entered element is %d",iRet);

    free(Brr);

    return 0;
}