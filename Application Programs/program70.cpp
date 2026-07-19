#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + iNo % 10;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter The Number :";
    cin>>iValue;

    iRet = SumDigits(iValue);
    cout<<"Summation of Digits are :"<<iRet;

    return 0;
}