#include<iostream>
using namespace std;

void Display()
{
    static char i = 'a';
    char iCount = 'f';
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