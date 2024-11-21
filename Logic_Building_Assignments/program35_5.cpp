#include<iostream>
using namespace std;

int Mult(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = Mult(iValue);

    cout<<iRet;

    return 0;
}