//Missing number in array.
#include<iostream>
using namespace std;
int missingnumber(int arr[],int n)
{
    int total=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
        total-=arr[i];
    return total;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n],i;
    cout<<"Enter the element in the array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int miss=missingnumber(arr,n);
    cout<<"Missing element is : "<<miss;
    return 0;
}
