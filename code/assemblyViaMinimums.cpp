/*https://codeforces.com/problemset/problem/1857/C*/

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
        vector<ll>store((n*(n-1))/2);
        for(auto &ele:store) cin>>ele;
        vector<ll>org;
        ll check=n-1;
        ll cnt=0;
        sort(all(store));
        for(ll i=0;i<(n*(n-1))/2;i++){
            cnt++;
            if(cnt==check){
                org.push_back(store[i]);
                cnt=0;
                check--;
            }
        }
        org.push_back(org[n-2]);
        for(auto &ele:org) cout<<ele<<" ";
        cout<<"\n";
    }
    return 0;
}