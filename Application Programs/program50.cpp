#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo <= 1)
    {
        return false;
    }

    for(bFlag = true, iCnt = 2; iCnt <=iNo/2; iCnt++)
    {
        if((iNo % iCnt) ==0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the Number :";
    cin>>iValue;

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        cout<<"It is Prime Number\n";
    }
    else
    {
        cout<<"It is Not Prime Number\n";
    }
    return 0;
}