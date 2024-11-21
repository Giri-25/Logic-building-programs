#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    Reverse(arr,0,8);

    cout<<"After array reverse : "<<endl;
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}