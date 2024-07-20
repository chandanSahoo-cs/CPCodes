/*https://codeforces.com/problemset/problem/1729/D*/

/*It is not the matter of if, it is the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define testcases ll tsts; cin >> tsts; while(tsts--)
#define all(x) begin(x), end(x)
int main() {
    fastio
    testcases {
        ll n; cin>>n;
        vector<ll>x(n);
        for(auto &ele:x) cin>>ele;
        vector<ll>y(n);
        for(auto &ele:y) cin>>ele;
        vector<ll>store;
        for(ll i=0;i<n;i++){
            store.push_back(y[i]-x[i]);
        }
        sort(all(store));
        ll s=0,e=n-1;
        ll cnt=0;
        while(s<e){
            if(store[s]+store[e]>=0){
                cnt++;
                e--;
                s++;
            }
            else {
                s++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
