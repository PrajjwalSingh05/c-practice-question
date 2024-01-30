#include<iostream>
using namespace std;
void display(int arr[3][4],int row,int column)
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
void column_wise_sum(int arr[][4],int row,int column)
{
    for(int i=0;i<column;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"The Sum of they row"<<i<<"is:"<<sum<<endl;

    }
    
}
int main()
{
    int arr[3][4]={
        {1,2,3,5},
        {10,11,13,6},
        {15,16,17,6}
    };
    int row=3,column=4;
    display(arr,row,column);
    column_wise_sum(arr,row,column);
}