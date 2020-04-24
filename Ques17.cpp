//Chocolate Distribution Problem
#include<bits/stdc++.h>17
using namespace std;
int findmindiff(int arr[],int n,int m)
{
    if(m==0 || n==0)
        return 0;
    sort(arr,arr+n);
    if(n<m)
        return -1;
    int min_diff=INT_MIN;
    int first=0,last=0;
    for(int i=0;i+m-1<n;i++)
    {
        int diff=arr[i+m-1]-arr[i];
        if(diff<min_diff)
        {
            min_diff=diff;
            first=i;
            last=i+m-1;
        }
    }
    return (arr[last]-arr[first]);
}
int main()
{
    int n,m,i;
    cout<<"Enter the number of chocolates : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of student : ";
    cin>>m;
    cout<<"Minimum difference is "<<findmindiff(arr,n,m);
}
