#include<iostream>
using namespace std;

int SumEvenDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
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

    iRet = SumEvenDigits(iValue);
    cout<<"Summation of the Even Digits are :"<<iRet;

    return 0;
}