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
void sort_zero_one(int arr[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        while()
    }
}
int main()
{
    int size=10;
    int arr[10]={1,2,6,5,4,8,9,10,3,7};
    display(arr,size);
    sort_zero_one(arr,size);
    cout<<"After Sorting array is : "<<endl;
    display(arr,size);
    return  0;
}