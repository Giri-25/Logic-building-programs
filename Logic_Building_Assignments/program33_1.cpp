#include<iostream>
using namespace std;

void Display()
{
    static int i = 0;
    int iCount = 5;
    if(i < iCount)
    {
        cout<<"*\t";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;

}