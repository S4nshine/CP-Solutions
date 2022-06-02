#include<bits/stdc++.h>
using namespace std;
int n,m,k,c,a,x[1003];
int main()
{
cin>>n>>m>>k;
for (int i=1;i<=m+1;i++)
cin>>x[i];
for (int i=1;i<=m;i++)
{
c=0;
for (int j=0;j<n;j++)
c+=(x[i]&(1<<j))!=(x[m+1]&(1<<j));
if (c<=k)
a++;
}
cout<<a;				
}