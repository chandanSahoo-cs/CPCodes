/*https://codeforces.com/contest/1742/problem/E*/

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
    ll i=1;
    testcases {
        ll n,q; cin>>n>>q;
        vector<ll>store(n),queries(q);
        for(auto &ele:store) cin>>ele;
        for(auto &ele:queries) cin>>ele;
        map<ll,ll>mp;
        ll ele=store[0];
        for(ll i=0;i<n;i++){
            if(store[i]<=ele){
                mp[ele]+=store[i];
            }
            else{
                mp[store[i]]+=mp[ele];
                ele=store[i];
                mp[ele]+=store[i];
            }
        }
        vector<ll>st;
        for(auto ele:mp){
            st.push_back(ele.first);
        }
        for(ll i=0;i<q;i++){
            ll s=0,e=st.size()-1;
            while(s<=e){
                ll m=s+(e-s)/2;
                if(st[m]>queries[i]) e=m-1;
                else s=m+1;
            }
            if(e<0) cout<<0<<" ";
            else cout<<mp[st[e]]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
