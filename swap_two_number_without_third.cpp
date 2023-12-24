#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the value of num1 is :";
    cin>>num1;
    cout<<"Enter the value of num2 is :";
    cin>>num2;
    cout<<"Before Swapping The value of Num1 is "<<num1<<"The value of num2 is "<<num2<<endl;
    num1=num1+num2;
    
    num2=num1-num2;
    
    num1=num1-num2;
    
    cout<<"After swapping The value of Num1 is "<<num1 <<"The value of num2 is "<<num2<<endl;
    return 0;
}