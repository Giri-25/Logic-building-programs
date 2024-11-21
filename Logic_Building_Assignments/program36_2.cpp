#include<iostream>
using namespace std;

int Max(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = Max(iValue);

    cout<<iRet;

    return 0;
}