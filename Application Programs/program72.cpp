#include<iostream>
using namespace std;

bool CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int temp = 0;

    temp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(temp == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    cout<<"Enter The Number :";
    cin>>iValue;

    bRet = CheckPallindrome(iValue);
    
    if(bRet == true)
    {
        printf("Number is Pallindrome");
    }
    else
    {
        printf("Number is Not Pallindrome");
    }

    return 0;
}