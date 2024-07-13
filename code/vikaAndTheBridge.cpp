/*https://codeforces.com/problemset/problem/1848/B*/

/*It is not the matter of if, it the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define testcases ll tsts; cin >> tsts; while(tsts--)
#define all(x) begin(x), end(x)
int main() {
    fastio
    testcases {
        ll n,k; cin>>n>>k;
        vector<ll>store(n);
        for(auto &ele:store) cin>>ele;
        vector<ll>colors(k+1,0);
        vector<ll>maxJmp(k+1,0);
        vector<ll>prevMaxJmp(k+1,0);
        for(ll i=0;i<n;i++){
            if(colors[store[i]]==0){
                prevMaxJmp[store[i]]=maxJmp[store[i]];
                maxJmp[store[i]]=i;
            }
            else{
                if(maxJmp[store[i]]<=i-colors[store[i]]){
                    prevMaxJmp[store[i]]=maxJmp[store[i]];
                    maxJmp[store[i]]=max(i-colors[store[i]],maxJmp[store[i]]);
                }
                else if(prevMaxJmp[store[i]]<=i-colors[store[i]]){
                    prevMaxJmp[store[i]]=max(prevMaxJmp[store[i]],i-colors[store[i]]);
                }
            }
            colors[store[i]]=i+1;
        }
        for(ll i=1;i<k+1;i++){
            if(colors[i]+maxJmp[i]<n){
                if(maxJmp[i]<=n-colors[i]){
                    prevMaxJmp[i]=maxJmp[i];
                    maxJmp[i]=max(maxJmp[i],n-colors[i]);
                }
            }
            else prevMaxJmp[i]=max(prevMaxJmp[i],n-colors[i]);
        }
        // for(auto &ele:maxJmp) cout<<ele<<" ";
        // cout<<"\n";
        // for(auto &ele:prevMaxJmp) cout<<ele<<" ";
        // cout<<"\n";
        ll mn=LLONG_MAX;
        for(ll i=1;i<k+1;i++){
            mn=min(mn,max(prevMaxJmp[i],maxJmp[i]/2));
        }
        cout<<mn<<"\n";
    }
    return 0;
}