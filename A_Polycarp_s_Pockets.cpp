#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 
    vector<int>cnt(101);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        ++cnt[x];
    }
    cout<<*max_element(cnt.begin(), cnt.end())<<endl;
    return  0;
}