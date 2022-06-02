#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,k1,k2,q,r;
    cin>>n>>m;
    n=n-m;
    k1=((n+1)*(n))/2;
    n=n+m;
    q=n/m;
    r=n%m;
    k2=((m-r)*(q)*(q-1))/2;
    k2=k2+(r*(q+1)*(q))/2;
    cout<<k2<<" "<<k1<<endl;
}