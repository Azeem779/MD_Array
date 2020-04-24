//Inversion of Array.
#include<iostream>
using namespace std;
int getcount(int arr[],int n)
{
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                cnt++;
        }
    }
    return cnt;
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
    cout<<"Number of inversions are "<<getcount(arr,n);
}

