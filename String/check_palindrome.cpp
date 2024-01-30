#include<iostream>
using namespace std;
int length(char ch[100])
{
    int count=0;
    int i=0;
    while(ch[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
bool check_palindrome(char ch [100],int size)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        if(ch[i]!=ch[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
    
}
int main()
{
    char ch[100];
    cout<<"Enter the string ";
    cin.getline(ch,100);
    cout<<"Chacter Before Operation is :"<<ch<<endl;
    int len=length(ch);
    // cout<<len;
    int result= check_palindrome(ch,len);
    if (result)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palinfrome";
    }

}