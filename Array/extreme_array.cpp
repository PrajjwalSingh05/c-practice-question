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
void extremearray(int arr[],int size)
{
    int i=0,j=size-1;
    while(i<=j)
    {
        if(i==j)
        {
            cout<<arr[i]<<" ";

        }
        else
        {

        cout<<arr[i]<<" ";
        cout<<arr[j]<<" ";
        }
        i++;
        j--;
    }
    }
int main()
{
    int size=9;
    int arr[size]={1,2,6,5,4,8,9,10,3};
    display(arr,size);
    extremearray(arr,size);
    // cout<<"The Extreme Array is: ";
    // display(arr,size);
    return  0;
}