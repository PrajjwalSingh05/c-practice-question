#include<iostream>
#include<math.h>
using namespace std;
int square(int num)
{
    int result=0;
    while(num>0)
    {
        int rem=num%10;
        result=result+pow(rem,2);
        num=num/10;


    }
    return result;
}
int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    int answer=square(num);
    cout<<"the sum of square is :"<<answer<<endl;
    return 0;

}