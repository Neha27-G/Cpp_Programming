#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   //reduce time complexity
    {
        if((iNo % iCnt )== 0)
        {
            cout<<iCnt<<"\n";
        }
    }
}
int main()
{
    int iValue;

    cout<<"Enter the Number :";
    cin>>iValue;

    DisplayFactor(iValue);

    return 0;
}