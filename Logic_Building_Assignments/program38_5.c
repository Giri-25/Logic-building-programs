//1st four bits toggle
#include<stdio.h>

unsigned int ToggleBit(unsigned iNo)
{
    unsigned int iMask = 0x0000000f; unsigned int iAns = 0;
    iAns = iNo | iMask;
    return iAns;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter value : \n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated number is : %u",iRet);

    return 0;
}