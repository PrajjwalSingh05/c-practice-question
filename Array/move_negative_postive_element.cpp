#include<iostream>
using namespace std;
void display(int arr[0],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void rearange(int arr[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        while(arr[i]>0)
        {
            i++;
        }
        while(arr[j]<0)
        {
            j--;
        }
    swap(arr[i],arr[j]);
    i++;
    j--;
    }
}
void optimize_rearrange(int arr[],int size)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[8]={-23,-7,12,-10,-11,40,60,-2};
    int size=8;
    cout<<"Before";
    display(arr,size);
    cout<<"After";
    // rearange(arr,size);
    optimize_rearrange(arr,size);
    display(arr,size);

}