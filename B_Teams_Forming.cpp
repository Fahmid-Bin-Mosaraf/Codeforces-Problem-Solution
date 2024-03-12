#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
 
    sort(a.begin(), a.end());
    int increase = 0;
    for(int i=0; i<n; i+=2)
    {
        increase += a[i+1] - a[i];
    }
    cout<<increase<<endl;
    return 0;
}