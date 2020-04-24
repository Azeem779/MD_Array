//Merge two sorted arrays.
#include<iostream>
using namespace std;
void mergearray(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr2[j++];
    }
    while(i<n1)
        arr3[k++]=arr1[i++];
    while(j<n2)
        arr3[k++]=arr2[j++];
}
int main()
{
    int i,n1,n2;
    cout<<"Enter the size of first array : ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the element in the first array : "<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array : ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the element in the second array : "<<endl;
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int arr3[n1+n2];
    mergearray(arr1,arr2,arr3,n1,n2);
    cout<<"Merging array is : ";
    for(i=0;i<n1+n2;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
