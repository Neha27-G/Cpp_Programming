#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter The Number :";
    cin>>iValue;

    iRet = CountDigits(iValue);
    cout<<"Number of Digits are :"<<iRet;

    return 0;
}