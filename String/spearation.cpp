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
void seprate_character(char ch [100],int size,char target)
{

    for(int i=0;i<size;i++)
    {
        if(ch[i]=='@' )
        {
            ch[i]=' ';
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
    seprate_character(ch,len,'@');
    cout<<"Chacter After Operation is :"<<ch<<endl;

}