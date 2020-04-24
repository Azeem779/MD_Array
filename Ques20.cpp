//Convert array into Zig-Zag fashion.
#include<iostream>
#include<algorithm>
using namespace std;
void zigzag(int arr[],int n)
{
    bool flag=true;
    for(int i=0;i<=n-2;i++)
    {
        if(flag)
        {
            if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
        }
        else{
            if(arr[i]<arr[i+1])
                swap(arr[i],arr[i+1]);
        }
        flag=!flag;
    }
}
int main()
{
    int n,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    zigzag(arr,n);
    cout<<"Zigzag array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
