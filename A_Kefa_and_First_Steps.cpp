#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=1, b=1;
    cin>>n;
    int arr[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
 
        if(i>0)
            if(arr[i] >= arr[i-1])
            {
                a++;
                b = max(b, a);
            }
            else
            {
                a=1;
            }
    }
    cout<< b << endl;
    return 0;
}