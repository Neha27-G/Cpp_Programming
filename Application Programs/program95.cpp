#include<iostream>
using namespace std;

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    cout<<"Elements of array are :\n";

    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    cout<<"Enter number of Elements :\n";
    cin>>iLength;

    Brr = new int[iLength];

    cout<<"Enter the elements  :\n";

    for (iCnt = 0; iCnt < iLength ; iCnt++)
    {
        cin>>Brr[iCnt];
    }
    Display(Brr, iLength);

    delete[] Brr;
    
    return 0;
}