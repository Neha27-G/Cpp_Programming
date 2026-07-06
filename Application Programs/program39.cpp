#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   //reduce time complexity
    {
        if((iNo % iCnt )== 0)
        {
            iSum = iSum + iCnt;
        }

        if(iSum > iNo)
        {
            break;
        }
    }
    
    if(iSum == iNo)
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
    int iValue;
    bool bRet = false;

    cout<<"Enter the Number :";
    cin>>iValue;

    bRet = CheckPerfect(iValue);

    if(bRet== true)
    {
        cout<<"It is Perfect Number\n";
    }
    else
    {
        cout<<"It is Not Perfect Number\n";
    }

    return 0;
}