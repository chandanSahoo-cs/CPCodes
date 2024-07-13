/*Link: https://codeforces.com/contest/1909/problem/B*/

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
        ll n;cin>>n;
        vector<ll>store(n);
        for(auto &ele:store){
            cin>>ele;
            // ele%=(ll)(1e17);
        }
        bool even=false;
        bool odd=false;
        for(ll i=0;i<n;i++){
            if(store[i]%2==0) even=true;
            else odd=true;
            if(odd && even) break;
        }
        if(odd && even) cout<<2<<"\n";
        else {
            bool flag=true;
            ll p=1;
            while(flag){
                set<ll>temp;
                for(ll i=0;i<n;i++){
                    ll t=pow(2,p);
                    temp.insert(store[i]%t);
                }
                if(temp.size()==2){
                    flag=false;
                }
                else p++;
            }
            cout<<(ll)pow(2,p)<<"\n";
        }
    }
    return 0;
}
