// Q3.Accept N numbers from user and check whether that numbers contains 11 in it or not.
// Input:  N = 6
//        Elements = 85   66  11   80  93  88  90
// Output:     11 is present

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool Check(int Arr[], int iSize)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == 11)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;
    bool bRet = 0;

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

    bRet = Check(Brr,iCount);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent");
    }
    free(Brr);

    return 0;
}