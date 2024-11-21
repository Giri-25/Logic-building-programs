//1st and 32nd bit is on or off
#include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned iNo)
{
    unsigned int iMask = 2147483649, iAns = 0;
    iAns = iNo & iMask;
    if(iAns == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter value : \n");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("1st and 32nd bit place is on\n");
    }
    else
    {
        printf("1st and 32nd bit place is off\n");
    }
    return 0;
}