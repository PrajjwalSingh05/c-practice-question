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
bool linearsearch(int arr[][3],int row,int column,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int  j=0;j<column;j++)
        {
            if(target==arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
    
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
    if(linearsearch(arr,row,column,target))
    {
        cout<<"Element Found";
    }
    else{
        cout<<"Not Found";
    }
}