//7th bit off
#include<stdio.h>

unsigned int OffBit(unsigned iNo)
{
    unsigned int iMask = 0xffffffbf; unsigned int iAns = 0;
    iAns = iNo & iMask;
    return iAns;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter value : \n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Updated number is : %u",iRet);

    return 0;
}