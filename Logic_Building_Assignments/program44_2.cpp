#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
    T max;
    if(no1 > no2 && no1 > no3)
    {
        max = no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
        max = no2;
    }
    else
    {
        max = no3;
    }
    return max;
}

int main()
{
    int iRet = Max(10,25,4);
    printf("Largest number : %d\n",iRet);

    float fRet = Max(10.0f,20.0f,40.0f);
    printf("Largest number : %f",fRet);

    return 0;
}