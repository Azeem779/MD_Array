//Pythagorean Triplet.
#include<iostream>
#include<algorithm>
using namespace std ;
bool istriplet(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=2;i--)
    {
        int l=0;
        int r=i-1;
        while(l<r)
        {
            if(arr[l]+arr[r]==arr[i])
                return true;
            (arr[l]+arr[r]<arr[i])?l++:r--;
        }
    }
    return false;
}
int main()
{
    int n,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in the array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    istriplet(arr,n)?cout<<"\nYes,Pythagorean Triplet is found.":cout<<"\nNo,Pythagorean Triplet is not found.";
}
