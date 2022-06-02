#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
#define fo(x,n) for(int i=x;i<n;i++)
#define pb(i) push_back(i)
#define pair  pair<int,int >
#define mp(i,j) make_pair(i,j)
#define li long int
#define lli long long int
#define PI 3.1415926535
#define MOD 1000000007
#define input freopen("input.txt","r",stdin)
#define fastio std::ios::sync_with_stdio(false)
using namespace std;
int main()
{
	fastio;
//	input;
	int n;
	cin>>n;
	vector<string>a;
	string x;
	fo(0,n) {
		cin>>x;
		a.push_back(x);
	}
	char z= 'X';
	int c =0;
	fo(1,n-1) {
		for(int j=1;j<n-1;j++) {
			if(a[i][j] == 'X' and a[i-1][j-1]  == 'X' and a[i-1][j+1] == 'X' and a[i+1][j-1]== 'X' and a[i+1][j+1] == 'X') 
				c++; 
		}
	}
	cout<<c;
	return 0;
}