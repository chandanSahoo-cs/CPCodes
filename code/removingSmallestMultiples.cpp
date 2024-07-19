/*https://codeforces.com/contest/1734/problem/C*/

/*It is not the matter of if, it is the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define testcases ll tsts; cin >> tsts; while(tsts--)
#define all(x) begin(x), end(x)
#define push_back(x) emplace_back(x);
#define push(x) emplace(x);
#define insert(x) emplace(x);
int main() {
    fastio
    testcases {
        ll n; cin>>n;
        string s; cin>>s;
        vector<bool>flag(n+1);
        ll cnt=0;
        for(ll i=1;i<=n;i++){
            if ((s[i-1]=='0')){
                ll j=1;
                while(j*i<=n){
                    if(s[i*j-1]=='0'){
                        if(!flag[i*j]){
                            flag[i*j]=true;
                            cnt+=i;
                        }
                    }
                    else break;
                    j++;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
