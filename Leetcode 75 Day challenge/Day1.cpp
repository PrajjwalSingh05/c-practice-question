// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
#include<iostream>
using namespace std;
int main()
{
    string str1="prajjwal";
    string str2="singh";
    int len1=str1.length()-1;
    string ans="";
    int len2=str2.length()-1;
    cout<<len1<<""<<len2;
    int i=0,j=0;
    while(i<=len1 && j<=len2)
    {
        ans=ans+str1[i];
        ans=ans+str2[j];
        i++;
        j++;
    }
    while(i<=len1)
    {
        ans=ans+str1[i];
        i++;
    }
    while(j<=len2)
    {
        ans=ans+str2[j];
        j++;
    }
    cout<<ans;
}