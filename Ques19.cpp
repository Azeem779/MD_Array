//Find the element before which all the elements are smaller than it, and after which all are greater
#include<bits/stdc++.h>
using namespace std;
int findindex(int arr[],int n)
{
    int leftmax[n];
    leftmax[0]=INT_MIN;
    for(int i=1;i<n;i++)
        leftmax[i]=max(leftmax[i-1],arr[i-1]);
    int rightmin=INT_MAX;
    for(int i=n-1;i>=0;i--)
    {
        if(leftmax[i]<arr[i] && rightmin >arr[i])
            return i;
        rightmin=min(rightmin,arr[i]);
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nIndex of the element is : "<<findindex(arr,n);
}
