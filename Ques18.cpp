//Stock Buy Sell to Maximize Profit
#include<iostream>
using namespace std;
void stock(int arr[],int n)
{
    if(n==1)
        return;
    int i=0;
    while(i<n-1)
    {
        while ((i < n - 1) && (arr[i + 1] <= arr[i]))
            i++;
        if (i == n - 1)
            break;
        int buy = i++;
        while ((i < n) && (arr[i] >= arr[i - 1]))
            i++;
        int sell = i - 1;
        cout << "Buy on day: " << buy
             << "\t Sell on day: " << sell << endl;
    }
}
int main()
{
    int n,i;
    cout<<"Enter the number of days : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the stock : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stock(arr,n);
}
