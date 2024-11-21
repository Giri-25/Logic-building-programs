#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    int iDigit = 0;
    static int iNum = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNum = iNum * 10 + iDigit;
        iNo = iNo / 10;       
        Reverse(iNo);
    }
    return iNum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = Reverse(iValue);

    cout<<iRet;

    return 0;
}