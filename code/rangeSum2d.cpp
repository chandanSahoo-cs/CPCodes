/*https://codeforces.com/gym/262795/problem/E*/

/*It is not the matter of if, it the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define all(x) begin(x), end(x)
int main() {
    fastio
        ll n,m,q; cin>>n>>m>>q;
        vector<vector<ll>>store(n,vector<ll>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>store[i][j];
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=1;j<m;j++){
                store[i][j]+=store[i][j-1];
            }
        }
        for(ll j=0;j<m;j++){
            for(ll i=1;i<n;i++){
                store[i][j]+=store[i-1][j];
            }
        }
        for(ll i=0;i<q;i++){
            ll x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
            x1--,y1--,x2--,y2--;
            ll tot=store[max(x1,x2)][max(y1,y2)];
            ll left=(min(x1,x2)==0?0:(store[min(x1,x2)-1][max(y1,y2)]));
            ll above=(min(y1,y2)==0?0:(store[max(x1,x2)][min(y1,y2)-1]));
            ll add=(left && above)?store[min(x1,x2)-1][min(y1,y2)-1]:0;
            cout<<tot-left-above+add<<"\n";
        }
}
