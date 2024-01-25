#include<iostream>
#include<limits>
using namespace std;
void display(int arr[2][3],int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {

        cout<<arr[i][j]<<" ";
        }
    cout <<endl;
    }
}
int maxones(int arr[2][3],int row,int column)
{   int ans=-1;
    int one =0;
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(arr[i][j]==1)
            {
                one++;
            }
        }
        if(one>ans &&one!=0)
        {
            // cout<<"Condiotion"<<one<<ans<<endl;
            ans=i;


        }
        one=0;
        
    }
    return ans;

}
int main()
{
    int row=2;
    int column=3;
    int arr[2][3]={
        // {0,1,1},
        // {1,1,1},
        {0,0,0},
        {0,0,0}
    };
    display(arr,row,column);
    int result=maxones(arr,row,column);
    if (result==-1)
    {
        cout<<"No Row has a single 1";
    }
    else
    {
        cout<<"ROW:"<<result;
    }

}