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
void count_zero_one(int arr[],int size)
{
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        if(arr[i]==1)
        {
            one++;
        }
    }
    cout<<"Number of One is the array is :"<<one<<endl;
    cout<<"Number of zero is the array is :"<<zero<<endl;


}
int main()
{
    int size=10;
    int arr[10]={1,0,1,1,0,0,1,1,0,0};
    display(arr,size);
    count_zero_one(arr,size);
    return  0;
}