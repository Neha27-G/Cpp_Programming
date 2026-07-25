#include<iostream>
using namespace std;

int main()
{
    int Arr[7];
   
    Arr[0] = 10;
    Arr[3] = 20;
    Arr[6] = 30;

    cout<<sizeof(Arr)<<endl;

    cout<<Arr[0]<<endl;
    cout<<Arr[3]<<endl;
    cout<<Arr[6]<<endl;

    cout<<Arr[2]<<endl;          //garbage value
    cout<<Arr[5]<<endl;          //garbage value

    return 0;
}