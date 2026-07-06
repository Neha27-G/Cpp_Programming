#include<iostream>
using namespace std;

void SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)   //reduce time complexity
    {
        if((iNo % iCnt )== 0)
        {
            iSum = iSum + iCnt;
        }
    }
    cout<<"Summation of Factors :"<<iSum;
}
int main()
{
    int iValue;

    cout<<"Enter the Number :";
    cin>>iValue;

    SumFactors(iValue);

    return 0;
}