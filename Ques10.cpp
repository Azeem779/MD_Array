//Equilibrium point. Time complexity O(n)
#include<iostream>
using namespace std;
int equilibrium(int arr[],int n)
{
    int sum=0;
    int leftsum=0;
    for(int i=0;i<n;++i)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum-=arr[i];
        if(leftsum==sum)
            return i;
        leftsum+=arr[i];
    }
    return -1;
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
    cout<<"\nFirst equilibrium index is "<<equilibrium(arr,n)<<endl;
}

