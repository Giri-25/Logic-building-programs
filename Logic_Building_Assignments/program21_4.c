// Q4. Accept N numbers from user and accept Range, Display all elements from that range.

// Input :     N = 6
//             Start = 60
//             End = 90
//             Elements = 85   66  3   76  93  88
// Output : 66 76  88

#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int i = 0, iFlag = 0;
    printf("The Elements in Range are : \n");
    for(i = 1; i < iSize; i++)
    {
        if((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            printf("%d\n",Arr[i]);
        }
    }
    if(iFlag == 0)
    {
        printf("None");
    }
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iCount);

    printf("Enter a starting range : ");
    scanf("%d",&iValue1);

    printf("Enter a Ending range : ");
    scanf("%d",&iValue2);

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


    Range(Brr,iCount,iValue1,iValue2);

    

    free(Brr);

    return 0;
}