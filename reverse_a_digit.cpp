#include<iostream>
using namespace std;
int main(){
    int num1,num;
    int newnum=0;
    cout<<"Enter a number";
    cin >>num;
    num1=num;

    while(num1>0)
    {
        int rem=num1 %10;
        newnum=rem+newnum*10;
        num1=num1/10;
    }
    cout<<"The original number was "<<num<<" and reverse of it is "<<newnum;
    return 0;
}