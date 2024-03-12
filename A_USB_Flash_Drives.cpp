#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100];
    int m, sum=0;
    cin>>n>>m;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    sort(arr,arr+n,greater<int>());
 
    int c=0;
    for(int i=0; i<n; i++)
    {
        c++;
        sum += arr[i];
        if(sum >= m)
        {
            break;
        }
    }
    cout<<c<<endl;
}