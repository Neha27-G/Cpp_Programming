#include<iostream>
using namespace std;

void CountEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int iCountEven = 0;
    int iCountOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
        iNo = iNo / 10;
    }
    cout<<"Count of Even Numbers :"<<iCountEven<<endl;
    cout<<"Count of Odd Numbers :"<<iCountOdd<<endl;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter The Number :";
    cin>>iValue;

    CountEvenOddDigits(iValue);

    return 0;
}