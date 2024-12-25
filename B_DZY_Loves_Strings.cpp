#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    string s;
    cin>>s;

    ll k;
    cin>>k;

    ll a[26];

    for(int i=0; i<26; i++){
        cin>>a[i];
    }

    ll sum = 0;
    ll max = *max_element(a, a+26);

    for(int i=0; i<s.length(); i++){
        sum += (i+1)*a[s[i]-'a'];
    }

    for(int i=s.length()+1; i<=s.length()+k; i++){
        sum += i*max;
    }
    cout<<sum<<endl;
    return 0;
}