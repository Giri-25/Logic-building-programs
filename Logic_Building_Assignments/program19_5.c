// Q5.Accept N number from user and display all such elements which are multiples of 11.

// Input:  N = 6
//         Elements = 85   66  3   55  93  88
// Output:  66 55  88

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
    int i = 0, iFlag = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 11 == 0 )
        {
            printf("The element which is multiple of 11 is : ");
            printf("%d\n",Arr[i]);
            iFlag++;
        }
    }
    if(iFlag==0)
    {
        printf("No Element found");
    }

}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iCount);

    Brr = (int*) malloc(iCount * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iCount);
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }  
    Display(Brr, iCount);

    free(Brr);

    return 0; 
}