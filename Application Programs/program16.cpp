#include<iostream>
using namespace std;

//User Define Macro
#define AGE_INVALID -1

int CalculateTicketPrice(int iAge)
{
    //Filter
    if(iAge < 0)
    {
        return AGE_INVALID;
    }

    if(iAge >= 0  &&  iAge <=5)
    {
        return 0;
    }
    else if(iAge >= 6  &&  iAge <=18)
    {
        return 500;
    }
    else if(iAge >= 19  &&  iAge <=50)
    {
        return 900;
    }
    else
    {
        return 400;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Please Enter the Age to Calculate Ticket Price: ";
    cin>>iValue;

    iRet = CalculateTicketPrice(iValue);
    
    if(iRet == AGE_INVALID)
    {
        cout<<"Please Enter Positive Age\n";
    }
    else
    {
        cout<<"Your Ticket price will be "<<iRet<<" rupess\n";
    }

    return 0;
}