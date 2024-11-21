#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int pos = 0;
    for(int i = 0; i < iSize ;i++)
    {
        if(arr[i] == iNo)
        {
            pos = i + 1;
            break;
        }
    }
    return pos;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    printf("First position of occurence of no. is : %d",iRet);

    return 0;
}