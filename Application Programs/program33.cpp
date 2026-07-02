#include<iostream>
using namespace std;

bool CheckDivisible(int iNo)
{
    if((iNo % 3 == 0) && (iNo% 5 ==0))
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
    int iValue = 0, bRet = false;

    cout<<"Enter the Number :";
    cin>>iValue;

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        cout<<"Number is Divisible by 3 and 5";
    }
    else
    {
        cout<<"Number is Not Divisible by 3 and 5";
    }
    
    return 0;
}