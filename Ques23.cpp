//Largest Number formed from an Array.
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int compare(string x,string y)
{
    string xy=x.append(y);
    string yx=y.append(x);
    return xy.compare(yx)>0?1:0;
}
void printlargest(vector<string> v)
{
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
int main()
{
    vector<string> v;
    v.push_back("54");
    v.push_back("546");
    v.push_back("548");
    v.push_back("60");
    printlargest(v);
}
