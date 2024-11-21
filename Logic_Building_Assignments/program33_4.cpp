#include<iostream>
using namespace std;

void Display()
{
    static char i = 'A';
    char iCount = 'F';
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