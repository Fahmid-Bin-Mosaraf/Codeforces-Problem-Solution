#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    int t;
    cin >> t;

    for (int i=0; i<t; i++) 
    {
        string time;
        cin >> time;

        stringstream ss(time);
        int h, m;
        char d;

        ss>>h>>d>>m;

        string am_pm = (h < 12) ? "AM" : "PM";
        h = (h % 12 == 0) ? 12 : (h > 12) ? h - 12 : h;

        cout.fill('0');
        cout<<setw(2)<<h<<":"<<setw(2)<<m<<" "<<am_pm<<endl;
    }

  return 0;
}
