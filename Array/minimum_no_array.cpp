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
int  miniumum_number(int arr[],int size)
{
    int minium=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<minium)
        {
            minium=arr[i];
        }

    }
    return minium;
}
int main()
{
    int size=10;
    int arr[10]={1,2,6,5,4,8,9,10,3,7};
    display(arr,size);
    int answer=miniumum_number(arr,size);
    cout<<"The Minium numnber in the array is "<<answer;
    return  0;
}