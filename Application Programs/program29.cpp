#include<iostream>
using namespace std;

int main()
{
    string sName;             
    int iAge = 0;
    float fMarks = 0.0f;

    cout<<"Enter your Name :";
    getline(cin ,sName);             //to accept string

    cout<<"Enter your Age :";
    cin>>iAge;

    cout<<"Enter your Marks:";
    cin>>fMarks;

    cout<<"\nName : "<<sName;
    cout<<"\nAge : "<<iAge;
    cout<<"\nMarks : "<<fMarks;

    return 0;
}