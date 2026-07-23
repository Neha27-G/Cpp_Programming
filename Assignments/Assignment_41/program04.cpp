// Write generic program to accept N values from user and return largest value.

#include<iostream>
using namespace std;

template <class T>
T Max(T *arr , int Size)
{
    T Max = arr[0];
    int i = 0;

    for(i = 0; i< Size; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Max(Arr, 5);
    cout<<iRet<<endl;

    float fRet = Max(Brr, 4);
    cout<<fRet<<endl;

    return 0;
}