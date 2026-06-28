#include<iostream>
using namespace std;

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    bool bRet = false;
    
    cout<<"Enter the Number: ";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet)               //bRet itself already stores a boolean value(true or false)
    {
        cout<<iValue<<" is Even\n";
    }
    else
    {
        cout<<iValue<<" is Odd\n";
    }
    return 0;
}