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
void pair_print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
    }
}
int main()
{
    int size=3;
    int arr[size]={1,2,3};
    display(arr,size);
    pair_print(arr,size);
    // cout<<"The Reverseof the array is "<<endl;
    // display(arr,size);
    return  0;
}