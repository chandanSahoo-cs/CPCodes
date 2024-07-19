/*https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/E*/

/*It is not the matter of if, it the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define all(x) begin(x), end(x)
int main() {
    fastio
        ll n,q; cin>>n>>q;
        vector<ll>store(n);
        for(auto &ele:store) cin>>ele;
        for(ll i=1;i<n;i++){
            store[i]+=store[i-1];
        }
        for(ll i=0;i<q;i++){
            ll l,r; cin>>l>>r;
            l--,r--;
            if(l==0) cout<<store[r]<<"\n";
            else cout<<store[r]-store[l-1]<<"\n";
        }
}
