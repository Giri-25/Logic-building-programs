#include<iostream>
using namespace std;

int Min(int iNo)
{
    int iDigit = 0;
    static int iMin = iNo % 10;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = Min(iValue);

    cout<<iRet;

    return 0;
}