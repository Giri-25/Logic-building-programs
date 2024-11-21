#include<iostream>
using namespace std;

void Display()
{
    static int i = 1;
    int iCount = 5;
    if(i <= iCount)
    {
        cout<<i<<"\t";
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;

}