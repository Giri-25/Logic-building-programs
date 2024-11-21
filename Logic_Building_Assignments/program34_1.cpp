#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 0;
    if( i < iNo)
    {
        cout<<"*\t";
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number of times you want to display * : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}