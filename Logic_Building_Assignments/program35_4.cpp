#include<iostream>
using namespace std;

int Fact(int iNo)
{
    static int i = 1;
    static int ifact = 1;
    if( i <= iNo)
    {
        ifact = ifact * i;
        i++;
        Fact(iNo);
    }
    return ifact;
}

int main()
{
    
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<"The factorial of number is  : "<<iRet<<endl;

    return 0;
}