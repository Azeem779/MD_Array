//Subarray with given sum.  Time Complexity O(n)
#include<iostream>
using namespace std;
int sumsubarray(int arr[],int n,int sum)
{
    int curr_sum=arr[0],start=0,i;
    for(i=1;i<=n;i++)
    {
        while(curr_sum > sum && start < i-1)
        {
            curr_sum=curr_sum-arr[start];
            start++;
        }
        if(curr_sum==sum)
        {
            cout<<"Sum found between indexes "<<start<<" and "<<i-1;
            return 1;
        }
        if(i<n)
        {
            curr_sum+=arr[i];
        }
    }
    cout<<"No subarray is found.";
    return 0;
}
int main()
{
    int n,i,sum;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum : ";
    cin>>sum;
    sumsubarray(arr,n,sum);
    return 0;
}
