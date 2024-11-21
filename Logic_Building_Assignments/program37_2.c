//5th and 18th bit is on or off
#include<stdio.h>
#include<stdbool.h>

bool ChkBit(unsigned iNo)
{
    unsigned int iMask = 131088, iAns = 0;
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
        printf("5th and 18th bit place is on\n");
    }
    else
    {
        printf("5th and 18th bit place is off\n");
    }
    return 0;
}