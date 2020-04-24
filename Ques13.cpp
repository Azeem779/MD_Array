//Reverse array in groups.
#include<iostream>
using namespace std;
void reversepair(int arr[],int n,int k)
{
    for(int i=0;i<n;i+=k)
    {
        int left=i;
        int right=min(i+k-1,n-1);
        while(left<right)
            swap(arr[left++],arr[right--]);
    }
}
int main()
{
    int n,k,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of k :";
    cin>>k;
    reversepair(arr,n,k);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
