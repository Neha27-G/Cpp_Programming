#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    
    //Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        cout<<"Jay Ganesh...\n";
    }
}

int main()
{  
    int iValue = 0;

    cout<<"Enter the Frequency :";
    cin>>iValue;

    Display(iValue);

    return 0;
}