/*https://codeforces.com/problemset/problem/1704/C*/

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
        ll n,m; cin>>n>>m;
        vector<ll>store(m);
        for(auto &ele:store) cin>>ele;
        sort(all(store));
        vector<ll>diff;
        for(ll i=0;i<m;i++){
            if(i==m-1) diff.push_back(n-(store[i]-store[0]+1));
            else{
                diff.push_back(store[i+1]-store[i]-1);
            }
        }
        ll cnt=0;
        ll temp=0;
        sort(all(diff), greater<int>());
        for(ll i=0;i<m;i++){
            if(diff[i]-(temp*2)-1>0){
                cnt+=(diff[i]-(temp*2))-1;
                temp+=2;
            }
            else if(diff[i]-temp*2-1==0){
                cnt+=1;
                temp+=2;
            }
            else break;
        }
        cout<<n-cnt<<"\n";
    }
    return 0;
}
