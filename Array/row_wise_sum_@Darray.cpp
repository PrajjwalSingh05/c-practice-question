#include<iostream>
using namespace std;
void display(int arr[3][3],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sum_row_wise(int arr[][3],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<column;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<"The Sum of they row"<<i<<"is:"<<sum<<endl;

    }
    
}
int main()
{
    int arr[3][3]={
        {1,2,3},
        {10,11,13},
        {15,16,17}
    };
    int row=3,column=3;
    display(arr,row,column);
    sum_row_wise(arr,row,column);
}