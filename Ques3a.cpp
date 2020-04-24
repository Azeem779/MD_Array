//Kadane’s Algorithm
#include<iostream>
#include<climits>
using namespace std;
int maximumarray(int arr[],int n)
{
    int start=0,ending=0,s=0;
    int max_so_far=INT_MIN,max_end=0;
    for(int i=0;i<n;i++)
    {
        max_end+=arr[i];
        if(max_so_far<max_end)
        {
            max_so_far=max_end;
            start=s;
            ending=i;
        }
        if(max_end < 0)
        {
            max_end=0;
            s=i+1;
        }
    }
    cout<<"Maximum Contiguous Sum is "<<max_so_far<<endl;
    cout<<"Starting index is "<<start<<endl<<"Ending index is "<<ending<<endl;
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
    int maxi=maximumarray(arr,n);
    return 0;
}

