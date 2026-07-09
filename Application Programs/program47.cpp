#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo <= 1)
    {
        return false;
    }

    for(iCnt = 2; iCnt <=iNo/2; iCnt++)
    {
        if((iNo % iCnt) ==0)
        {
            break;
        }
    }

    if(iCnt < iNo/2)
    {
        return false;
    }
    else
    {
        return true;
    }
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