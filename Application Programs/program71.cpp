
#include<iostream>
using namespace std;

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter The Number :";
    cin>>iValue;

    iRet = ReverseNumber(iValue);
    cout<<"Reverse Number is : "<<iRet;

    return 0;
}