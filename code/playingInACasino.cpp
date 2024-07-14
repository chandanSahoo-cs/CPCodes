/*Link: https://codeforces.com/problemset/problem/1808/B*/

/*It is the not the matter of if, it is the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define testcases ll tsts; cin >> tsts; while(tsts--)
#define all(x) begin(x), end(x)
int main() {
    fastio
    testcases {
        ll n,m; cin>>n>>m;
        vector<vector<ll>>store(n,vector<ll>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>store[i][j];
            }
        }
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        vector<vector<ll>>storeReverse(m,vector<ll>(n));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                storeReverse[j][i]=store[i][j];
            }
        }
        
        for(ll i=0;i<m;i++){
            sort(storeReverse[i].begin(),storeReverse[i].end(),greater<int>());
        }
        ll cnt=0;
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                cnt+=j*(-storeReverse[i][j])+(n-1-j)*(storeReverse[i][j]);
            }
        }
        cout<<(cnt)<<"\n";
    }
    return 0;
}
