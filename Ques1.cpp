//Subarray with given sum.
#include<iostream>
using namespace std;
int subarraysum(int arr[],int n,int sum)
{
    int curr_sum,i,j;
    for(i=0;i<n;i++)
    {
        curr_sum=arr[i];
        for(j=i+1;j<=n;j++)
        {
            if(curr_sum==sum)
            {
                cout<<"Sum found between indexes "<<i<<" and "<<j-1;
                return 1;
            }
            if(curr_sum > sum || j==n)
                break;
            curr_sum=curr_sum+arr[j];
        }
    }
    cout<<"No subarray found.";
    return 0;
}
int main()
{
    int i,n,sum;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum :";
    cin>>sum;
    subarraysum(arr,n,sum);
    return 0;
}
