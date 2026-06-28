/*
 Algorithm 1

START
        Accept number as No
        If No is completely divisible by 2
            then print Even
        Otherwiae
            print Odd
STOP

Algorithm 2

START
        Accept number as No
        divide No by 2
        If remainder is 0
            then print as Even
        otherwise
            print odd
STOP

*/ 
#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }

    return 0;
}