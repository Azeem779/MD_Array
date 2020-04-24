//Leaders in an array.
#include<iostream>
using namespace std;
void printladder(int arr[],int n)
{
    int max_from_right=arr[n-1];
    cout<<max_from_right<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(max_from_right<arr[i])
        {
            max_from_right=arr[i];
            cout<<max_from_right<<" ";
        }
    }
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
    printladder(arr,n);
}
