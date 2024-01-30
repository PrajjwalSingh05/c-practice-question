#include<iostream>
using namespace std;
int main()
{
    char ch[10]="prajjwal";
    int i=0;
    int count=0;
    while(ch[i]!='\0')
    {
        count++;
        i++;
    }
    cout<<count;

}