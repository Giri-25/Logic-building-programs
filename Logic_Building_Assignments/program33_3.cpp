#include<iostream>
using namespace std;

void Display()
{
    int i = 1;
    static int iCount = 5;
    if(i <=iCount)
    {
        cout<<iCount<<"\t";
        iCount--;
        Display();
    }
    
}

int main()
{
    Display();

    return 0;

}