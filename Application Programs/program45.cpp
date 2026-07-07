// Input : 5
// Output : -5  -4  -3  -2  -1  0  1  2  3   4  5  

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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