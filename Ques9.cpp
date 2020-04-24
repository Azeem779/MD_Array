//Sort an array of 0s, 1s and 2s.
#include<iostream>
using namespace std;
void sort012(int arr[],int n)
{
    int l=0;
    int h=n-1;
    int mid=0;
    while(mid<=h)
    {
        switch(arr[mid])
        {
        case 0:
            swap(arr[l++],arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[h--]);
            break;
        }
    }
}
int main()
{
    int n,i;
    cout<<"Enter the element in the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter th element in array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort012(arr,n);
    cout<<"After the segregation array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
