#include<iostream>
using namespace std;

int main()
{
    int Arr[5] = {0};
    int iCnt = 0;

    cout<<"Enter the Elements :"<<endl;

    cin>>Arr[0];
    cin>>Arr[1];
    cin>>Arr[2];
    cin>>Arr[3];
    cin>>Arr[4];
   
    cout<<"Elements of array ssare :"<<endl;
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }
    return 0;
}