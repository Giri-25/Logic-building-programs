#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int ilen = 0;
    if(*str != '\0')
    {
        ilen++;
        str++;
        Strlen(str);
    }
    return ilen;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string : \n";
    cin.getline(Arr,30);

    iRet = Strlen(Arr);

    cout<<"The length of string is : "<<iRet<<endl;

    return 0;
}