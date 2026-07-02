#include<iostream>
using namespace std;

int main()
{
    char *sName = NULL;             
    int iAge = 0;
    float fMarks = 0.0f;
    
    sName = (char *)malloc(50 * sizeof(char));

    if(sName == NULL)
    {
        printf("Memory Allocation failed");
        return -1;
    }

    cout<<"Enter your Name :";
    cin.getline(sName,50);            

    cout<<"Enter your Age :";
    cin>>iAge;

    cout<<"Enter your Marks:";
    cin>>fMarks;

    cout<<"\nName : "<<sName;
    cout<<"\nAge : "<<iAge;
    cout<<"\nMarks : "<<fMarks;

    free(sName);

    return 0;
}