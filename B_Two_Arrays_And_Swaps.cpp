#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    int arr1[100], arr2[100];
    cin>>t;
 
    while(t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>arr2[i];
        }
 
        sort(arr1,arr1+n);
        sort(arr2,arr2+n,greater<int>());
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr2[j]>arr1[j])
                {
                    swap(arr1[j],arr2[j]);
                    break;
                }
            }
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum += arr1[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}