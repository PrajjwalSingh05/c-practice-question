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
void rotate(int arr[],int size,int k)
{
    while(k>0)
    {

    int temp=arr[size-1];
    for(int i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    k--;
    }
    
}
void mode_rotate(int arr[],int size,int k)
{
    int result[size];
    for(int i=0;i<size;i++)
    {
        int newindex=(i+k) %size;
        result[newindex]=arr[i];
    }
    display(result,size);
}
int main()
{
    int size=7;
    int arr[size]={1,2,3,4,5,6,7};
    int k=3;
    display(arr,size);
    // rotate(arr,size,k);
    // display(arr,size);
    mode_rotate(arr,size,k);
}