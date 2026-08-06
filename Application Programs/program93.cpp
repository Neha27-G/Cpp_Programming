#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 4;
    int Brr[iLength];
    int iCnt = 0;
    int iRet = 0;

    cout<<"Enter the element :\n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    iRet = Summation(Brr,iLength);

    cout<<"Addition of all Elements is:\n"<<iRet;
    
    return 0;
}