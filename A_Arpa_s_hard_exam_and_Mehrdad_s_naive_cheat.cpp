#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    ll n;
    cin>>n;
    
    if(n == 0){
        cout<<"1";
    }
    else if(n%4 == 0){
        cout<<"6";
    }
    else if(n%4 == 1){
        cout<<"8";
    }
    else if(n%4 == 2){
        cout<<"4";
    }
    else if(n%4 == 3){
        cout<<"2";
    }
    else{
        cout<<"0";
    }
    return 0;
}