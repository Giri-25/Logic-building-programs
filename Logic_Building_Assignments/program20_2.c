// Q2.Accept N numbers from user and return difference between frequency of even number and odd numbers.
// Input:  N = 7
//        Elements = 85   66  3   80  93  88  90
// Output:     1(4-3)

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iSize)
{
    int i = 0, EvenCount = 0, OddCount = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
    }
    return (EvenCount - OddCount);
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

    printf("The difference between frequency of even and odd elements is %d", iRet);

    free(Brr);

    return 0;
}