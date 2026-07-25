#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {0};
    int iCnt = 0;

    cout<<"Enter the Elements :"<<endl;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    cout<<"Elements of array are :"<<endl;
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }
    return 0;
}