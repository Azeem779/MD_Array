//Kadane’s Algorithm
#include<iostream>
#include<climits>
using namespace std;
int maximumarray(int arr[],int n)
{
    int max_so_far=INT_MIN,max_end=0;
    for(int i=0;i<n;i++)
    {
        max_end+=arr[i];
        if(max_so_far<max_end)
            max_so_far=max_end;
        if(max_end < 0)
            max_end=0;
    }
    return max_so_far;
}
int main()
{
    int n,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in the array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=maximumarray(arr,n);
    cout<<"The largest maximum subarray is : "<<maxi;
    return 0;
}
