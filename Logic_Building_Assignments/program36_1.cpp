#include<iostream>
using namespace std;

int WhiteSpace(char *str)
{
    static int iSpace = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
        iSpace++;
        }
        str++;
        WhiteSpace(str);
    }
    return iSpace;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string : \n";
    cin.getline(Arr,30);

    iRet = WhiteSpace(Arr);

    cout<<"The length of whitespace in string is : "<<iRet<<endl;

    return 0;
}