#include<iostream>
using namespace std;

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int iLength = 4;
    int Brr[iLength];
    int iCnt = 0;

    cout<<"Enter the Number :\n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Entered Number are :\n";

    Display(Brr,iLength);
    
    return 0;
}