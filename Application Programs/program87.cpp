#include<iostream>
using namespace std;

void Display(int Arr[])
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Brr[5] = {10,20,30,40,50};

    Display(Brr);
    
    return 0;
}