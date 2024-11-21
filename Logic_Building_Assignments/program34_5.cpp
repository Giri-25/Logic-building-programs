#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char Ch = 'a';
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

    cout<<"Enter the alphabet number up to which you want to display : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}