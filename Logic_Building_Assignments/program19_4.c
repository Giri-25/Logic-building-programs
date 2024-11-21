// Q4.Accept N numbers from user and display all such elements which are divisible by 3 and 5.

// Input :   N = 6
//           Elements = 85   66  3   15  93  88
// Output :    15

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
    int i = 0, iFlag = 0;
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 5 == 0 )&& (Arr[i] % 3 == 0))
        {
            printf("The element which is Divisible by 3 and 5 is : ");
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
    printf("Enter %d elements ",iCount);
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }  
    Display(Brr, iCount);

    free(Brr);
    return 0; 
}