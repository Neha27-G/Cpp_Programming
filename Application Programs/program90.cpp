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
    int Brr[4] = {10,20,30,40};       

    Display(Brr, 4);
    
    return 0;
}