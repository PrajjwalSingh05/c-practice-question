
#include<iostream>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}
void rearange(int arr[],int size)
{

    int left=0;
    int right=size-1;
    for(int i=0;i<=right;i++)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[left]);
            left++;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[right]);
            right--;
            i--;
        }

    }
}
int  main()
{
    int size=8;
    int arr[size]={0,1,0,2,1,0,1,2};
    display(arr,size);
    rearange(arr,size);
    display(arr,size);


}