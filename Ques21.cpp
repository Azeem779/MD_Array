//Find last index of a character in a string
#include<bits/stdc++.h>
using namespace std;
int findindex(string str,char k)
{
    int index=-1;
    for(int i=0;i<str.length();i++)
        if(str[i]==k)
            index=i;
    return index;
}
int main()
{
    string str;
    char k;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<"Enter the character you want to search : ";
    cin>>k;
    int index=findindex(str,k);
    if(index==-1)
        cout<<"Character not found.";
    else
        cout<<"Last index is "<<index;
}
