#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll n;
    cin>>n;
    ll x = 1;

    vector<string>names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    while(n>5 * x){
        n -= 5*x;
        x *= 2;
    }

    ll ans = (n-1) / x;
    cout<<names[ans]<<endl; 
    return 0;
}