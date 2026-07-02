#include<iostream>
using namespace std;

void CheckDivisible(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        cout<<"Number is Divisible by 3 and 5";
    }
    else
    {
        cout<<"Number is Not Divisible by 3 and 5";
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter the Number :";
    cin>>iValue;

    CheckDivisible(iValue);
    
    return 0;
}