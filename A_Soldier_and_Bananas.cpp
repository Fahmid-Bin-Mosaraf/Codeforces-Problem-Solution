#include<iostream>
using namespace std;
int main()
{
    int k, n, w, sum;
    cin>>k>>n>>w;
 
    sum=(w*(k+w*k)/2);
    if(sum>n)
        cout<<sum-n<<endl;
    else
        cout<<0<<endl;
    return 0;
}