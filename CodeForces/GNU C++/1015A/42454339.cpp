#include<bits/stdc++.h>
#define all(v)  v.begin(),v.end()
#define fo(x,n) for (int i=x;i<n;i++)
#define ll long  long int
#define INF 10000007
#define PI 3.14159265
using namespace std;
int n,m,l,r,c;
int arr[101];
int main() {
   //  freopen("input.txt","r",stdin);
    cin>>n>>m;
    queue<int>q;
    fo(0,n) {
        cin>>l>>r;
        for(int j=l;j<=r;j++) arr[j] =1;
    }
    fo(1,m+1) if(!arr[i]){
        c++;
        q.push(i);
    }
    cout<<c<<"\n";
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}