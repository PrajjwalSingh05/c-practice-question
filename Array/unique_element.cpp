#include<iostream>
#include<limits.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}
int  uquie_elemnt(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int size=11;
    int arr[size]={1,2,3,4,5,1,2,3,4,5,6};
    display(arr,size);
    int answer=uquie_elemnt(arr,size);
    cout<<"The unique Element is : "<<answer;
    return  0;
}