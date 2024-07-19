/*https://codeforces.com/contest/1988/problem/C*/

/*It is not the matter of if, it is the matter of when*/
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
        ll n; cin>>n;
        ll tempn=n;
        ll cnt=0;
        ll cnt1=0;
        vector<ll>store;
        store.push_back(n);
        while(tempn>0){
            ll temp=n;
            if(tempn%2==1){
                ll m=1LL<<cnt;
                m=~m;
                temp&=m;
                if(temp!=0){
                    store.push_back(temp);
                    cnt1++;
                }
            }
            cnt++;
            tempn/=2;
        }
        cout<<cnt1+1<<"\n";
        sort(all(store));
        for(auto ele:store) cout<<ele<<" ";
        cout<<"\n";
        i++;
    }
    return 0;
}
