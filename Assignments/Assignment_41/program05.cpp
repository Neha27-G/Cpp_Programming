// Write generic program to accept N values from user and return smallest value.

#include<iostream>
using namespace std;

template <class T>
T Min(T *arr , int Size)
{
    T Min = arr[0];
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(Arr, 5);
    cout<<iRet<<endl;

    float fRet = Min(Brr, 4);
    cout<<fRet<<endl;

    return 0;
}