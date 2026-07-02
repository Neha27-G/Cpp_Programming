#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter the Number :";
    cin>>iValue;

    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        cout<<"Number is Divisible by 3 and 5";
    }
    else
    {
        cout<<"Number is Not Divisible by 3 and 5";
    }
    return 0;
}