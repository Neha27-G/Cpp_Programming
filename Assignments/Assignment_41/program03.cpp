// Write generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr , int iSize)
{
    T iSum = T();
    int i = 0;

    if(iSize < 1)
    {
        return T();  // default value for taken datatype
    }

    for(i = 0; i<iSize; i++)
    {
       iSum = iSum + arr[i]; 
    }
    return iSum;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(Arr, 5);
    cout<<iSum<<endl;

    float fSum = AddN(Brr, 5);
    cout<<iSum<<endl;

    return 0;
}