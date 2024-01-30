
#include<iostream>
#include<limits>
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
int maxnumber(int arr[][3],int row,int column)
{
    int maxnumber=INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int  j=0;j<column;j++)
        {
            if(maxnumber<arr[i][j])
            {
                maxnumber=arr[i][j];
            }
        }
    }
    return maxnumber;
    
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
    int target=15;
    cout<<"The MAximum Number is <<"<<maxnumber(arr,row,column);
}