#include<iostream>
using namespace std;

void DisplayDigits(int iNo)
{
    while (iNo > 0)
    {
        cout<<iNo % 10<<"\n";
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter The Number :";
    cin>>iValue;

    DisplayDigits(iValue);

    return 0;
}