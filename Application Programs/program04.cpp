#include<iostream>
using namespace std;

float AddTwoNumbers(float fNo1, float fNo2)
{
    float fAns = 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fResult = 0.0f;

    cout<<"Enter the 1st Number :\n";
    cin>>fValue1;

    cout<<"Enter the 2nd Number :\n";
    cin>>fValue2;

    fResult = AddTwoNumbers(fValue1, fValue2);

    cout<<"Addition is : "<<fResult;

    return 0;
}