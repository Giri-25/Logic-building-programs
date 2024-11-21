// Q5.Accept N number from user and return frequency of even numbers.

// Input:  N = 6
//         Elements = 85   66  3   80  93  88
// Output:  3

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iSize)
{
    int i = 0, iFreq = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iFreq++;
        }
    }
    
    return iFreq;

}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iCount);

    Brr = (int*) malloc(iCount * sizeof(int));

    if(Brr==Null)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements ",iCount);
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }  

    iRet = Frequency(Brr, iCount);

    printf("The frequency of Even elements is %d",iRet);

    free(Brr);

    return 0; 
}