/*https://codeforces.com/contest/1991/problem/A*/
/*It is not the matter of if, it is the matter of when*/
/**/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define testcases ll tsts; cin >> tsts; while(tsts--)
#define all(x) begin(x), end(x)
// #define push_back(x) emplace_back(x);
#define push(x) emplace(x);
#define insert(x) emplace(x);

int main() {
    fastio
    testcases {
        ll n; cin>>n;
        vector<ll>store(n);
        for(auto &ele:store) cin>>ele;
        ll mx=0;
        for(ll i=0;i<n;i++){
            if((i+1)%2!=0){
                mx=max(mx,store[i]);
            }
        }
        cout<<mx<<"\n";
    }
    return 0;
}
