/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        Perform addition of No1 and No2
        Display the Result
    STOP
*/

#include<iostream>
using namespace std;

int main()
{
    float i = 0.0f, j = 0.0f, k = 0.0f;

    cout<<"Enter the 1st Number :\n";
    cin>>i;

    cout<<"Enter the 2nd Number :\n";
    cin>>j;

    k = i + j;

    cout<<"Addition is : "<<k;

    return 0;
}