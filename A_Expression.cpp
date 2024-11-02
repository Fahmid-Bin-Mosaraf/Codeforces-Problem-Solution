#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int a, b, c;
    cin>>a>>b>>c;

    int ans1 = a + b + c;
    int ans2 = a * b * c;
    int ans3 = a + (b*c);
    int ans4 = (a+b) * c;
    int ans5 = a * (b+c);

    int final_ans = max({ans1, ans2, ans3, ans4, ans5});

    cout<<final_ans<<endl;
    return 0;
}