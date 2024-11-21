#include<iostream>
using namespace std;

int Small(char *str)
{
    static int iSmall = 0;
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
        iSmall++;
        }
        str++;
        Small(str);
    }
    return iSmall;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string : \n";
    cin.getline(Arr,30);

    iRet = Small(Arr);

    cout<<iRet<<endl;

    return 0;
}