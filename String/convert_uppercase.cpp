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
void upperconverter(char ch [100],int size)
{

    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            int upper=((int)ch[i])-32;
            ch[i]=(char)upper;
        }
    }
}
    
int main()
{
    char ch[100];
    cout<<"Enter the string ";
    cin.getline(ch,100);
    cout<<"Chacter Before Operation is :"<<ch<<endl;
    int len=length(ch);
    cout<<len;
    upperconverter(ch,len);
    cout<<"Chacter After Operation is :"<<ch<<endl;

}