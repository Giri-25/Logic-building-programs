//number even or odd

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int No)
{
    if ( No % 2 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is even\n",iValue);
    }
    else
    {
        printf("%d is odd\n",iValue);
    }
    return 0;
}