#include<iostream>
using namespace std;

int Arr[7];        //Data Section :it gives no garbage value

int main()
{
    Arr[0] = 10;
    Arr[3] = 20;
    Arr[6] = 30;

    cout<<sizeof(Arr)<<endl;

    cout<<Arr[0]<<endl;
    cout<<Arr[3]<<endl;
    cout<<Arr[6]<<endl;

    cout<<Arr[2]<<endl;          
    cout<<Arr[5]<<endl;          

    return 0;
}