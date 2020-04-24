//Rearrange array alternatively.
#include<iostream>
using namespace std;
void rearrange(int arr[],int n)
{
    int max_ele=arr[n-1];
    int min_ele=arr[0];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=max_ele;
            max_ele-=1;
        }
        else
        {
            arr[i]=min_ele;
            min_ele+=1;
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
    cout<<"Original array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    rearrange(arr,n);
    cout<<"\nModified array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
