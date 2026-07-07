// Input : 5
// Output : -5    -3    -1  

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= 0; iCnt+=2)
    {
        cout<<iCnt<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter the Number :";
    cin>>iValue;

    Display(iValue);

    return 0;
}