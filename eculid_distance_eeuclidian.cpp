#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter the value of x1";
    cin>>x1;
    cout<<"Enter the value of x2";
    cin>>x2;
    cout<<"Enter the value of y1";
    cin>>y1;
    cout<<"Enter the value of y2";
    cin>>y2;
    int distance=pow((x2-x1),2)+pow((y2-y1),2);
    float result=sqrt(distance);
    cout<<"The ecluid distacne is "<<result;
    return 0;

}