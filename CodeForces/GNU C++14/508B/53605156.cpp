#include<stdio.h>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

char s[100005];
string D;

vector<string> ans;

int main()
{
    scanf("%s", s);
    D = s;
    for(int t = 0; t < 10; t += 2 ){
        if( D.back() < t+'0' ){
            for(int i = D.size()-1; i >= 0; i--){
                if( D[i] == t+'0' ){
                    ans.push_back(D);
                    swap( ans.back()[i], ans.back().back() );
                    break;
                }
            }
        }
        else{
            for(int i = 0; i < D.size(); i++){
                if( D[i] == t+'0' ){
                    ans.push_back(D);
                    swap( ans.back()[i], ans.back().back() );
                    break;
                }
            }
        }
    }
    sort( ans.begin(), ans.end() );
    if( !ans.empty() )printf("%s", ans.back().c_str() );
    else printf("-1");
    return 0;
}