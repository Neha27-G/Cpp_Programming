#include<iostream>
using namespace std;

void CallByAddress(int *iptr)
{
    (iptr)++;
}

int main()
{
    int iValue = 11;

    CallByAddress(&iValue);

    printf("Value After Function call : %d\n",iValue);
    
    return 0;
}