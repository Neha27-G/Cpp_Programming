#include<iostream>
using namespace std;

void Display(int Arr[])
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 8; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    int Brr[4] = {10,20,30,40};        //Garbage Value

    Display(Brr);
    
    return 0;
}