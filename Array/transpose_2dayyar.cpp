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
void transpose(int arr[][3],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<column;j++)
        {
            cout<<arr[i][j]<<","<<arr[j][i]<<endl;
            swap(arr[i][j],arr[j][i]);

        }
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
    transpose(arr,row,column);
     cout<<"Transpose";
    display(arr,row,column);
}