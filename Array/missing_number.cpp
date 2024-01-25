
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
int missingnumber(int arr[],int size)
{
    int ans=0;
    
    for(int i=0;i<size;i++)
    {
        ans=ans^i;
    }
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];

    }
    return ans;
}
int missing_number_sum(int arr[],int n)
{
    int total_sum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return total_sum-sum;

}
int main()
{
    int size=8;
    int arr[size]={0,1,7,3,2,5,6,8};
    display(arr,size);
    cout<<missing_number_sum(arr,size);
    // cout<<missingnumber(arr,size);
}