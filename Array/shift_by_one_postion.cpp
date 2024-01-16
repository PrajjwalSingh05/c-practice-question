#include<iostream>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void shift_by_one(int arr[],int size)
{
    int temp=arr[size-1];
    for(int i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main()
{
    int size=6;
    int arr[size]={10,20,30,40,50,60};
    display(arr,size);
    cout<<endl;
    shift_by_one(arr,size);
    cout<<"Element after Shifting is :";
    display(arr,size);



}
