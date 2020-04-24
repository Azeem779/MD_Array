//K’th smallest element
#include<iostream>
#include<algorithm>
using namespace std;
int kthsmall(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
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
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"\nKth smallest element is "<<kthsmall(arr,n,k)<<endl;
}
