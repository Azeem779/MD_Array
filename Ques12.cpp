//Minimum Platforms.
#include<iostream>
#include<algorithm>
using namespace std;
int findplatform(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int plat=1,res=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<dep[j])
        {
            plat++;
            i++;
            if(plat>res)
                res=plat;
        }
        else{
            plat--;
            j++;
        }
    }
    return res;
}
int main()
{
    int n,i;
    cout<<"Enter the number of train that arrived or departure : ";
    cin>>n;
    int arr[n],dep[n];
    cout<<"Enter the arrival time : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the departure time : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>dep[i];
    }
    cout<<"\nMinimum number of platform needed : "<<findplatform(arr,dep,n)<<endl;
}
