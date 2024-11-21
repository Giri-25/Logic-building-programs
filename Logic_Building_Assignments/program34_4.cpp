#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char Ch = 'A';
    static int iCnt = 0;
    if( iCnt < iNo)
    {
        cout<<Ch<<"\t";
        iCnt++;
        Ch++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the alphabet up to which you want to display : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}