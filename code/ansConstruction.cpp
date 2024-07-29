/*https://codeforces.com/contest/1991/problem/B*/

/*It is not the matter of if, it is the matter of when*/
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
        vector<ll>store(n+1);
        for(ll i=1;i<n;i++){
            cin>>store[i];
        }
        store[n]=0,store[0]=0;
        vector<ll>ans;
        for(ll i=1;i<n+1;i++){
            ans.push_back(store[i]|store[i-1]);
        }
        bool flag=true;
        for(ll i=0;i<n-1;i++){
            if((ans[i]&ans[i+1])!=store[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
            for(auto ele:ans) cout<<ele<<" ";
            cout<<"\n";
        }
        else cout<<-1<<"\n";
    }
    return 0;
}
