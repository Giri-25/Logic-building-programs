#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    if( i <= iNo)
    {
        cout<<i<<"\t";
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number up to which you want to display : \n";
    cin>>iValue;

    Display(iValue);

    return 0;
}