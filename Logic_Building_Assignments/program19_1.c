// Q1.Accept N number from user and return difference between summation of even elements and summation of odd elements.

// Input :  N = 6
//          Elements = 85  66  3   80  93  88

// Output : 53 (234 - 181)

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iSize)
{
    int i = 0, EvenSum = 0, OddSum = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i]%2==0)
        {
            EvenSum += Arr[i];
        }
        else
        {
            OddSum += Arr[i];
        }
    }
    return (EvenSum - OddSum);
}
int main()
{
    int *Brr = NULL;
    int iCount = 0;
    int i = 0, iRet = 0;

    printf("Enter Number of Elements : ");
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iCount);
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Difference(Brr,iCount);

    printf("The Difference is %d",iRet);

    free(Brr);

    return 0;
}