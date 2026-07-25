#include<iostream>
using namespace std;

int Arr[7];        
int main()
{
    int Arr[5] = {0};
    int iCnt = 0;

    cout<<"Enter the Elements :"<<endl;

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    cout<<"Elements of array are :"<<endl;
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    return 0;
}