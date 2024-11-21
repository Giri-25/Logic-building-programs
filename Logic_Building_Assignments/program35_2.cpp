#include<iostream>
using namespace std;

int Sum(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<iRet;

    return 0;
}