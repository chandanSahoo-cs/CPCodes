/*https://codeforces.com/contest/1995/problem/B1*/
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
        ll n,m; cin>>n>>m;
        vector<ll>store(n);
        for(auto &ele:store) cin>>ele;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            mp[store[i]]++;
        }
        vector<vector<ll>>freq;
        for(auto ele:mp){
            freq.push_back({ele.first,ele.second});
        }
        sort(all(freq));
        ll ans=0;
        for(ll i=0;i<freq.size();i++){
            ll l=min(m/freq[i][0],freq[i][1]);
            ans=max(ans,l*freq[i][0]);
            if(i!=freq.size()-1 && freq[i][0]+1==freq[i+1][0]){
                ll cnt=0;
                ll f1=freq[i][1];
                ll f2=freq[i+1][1];
                for(ll j=0;j<freq[i][1]+freq[i+1][1];j++){
                    if(f1>0 && f2>0){
                        if(cnt+freq[i+1][0]<=m){
                            cnt+=freq[i+1][0];
                            f2--;
                        }
                        else if(cnt+freq[i][0]<=m || (cnt+freq[i][0]==m+1 && f1>=2)){
                            cnt+=freq[i][0];
                            if(cnt==m+1){
                                cnt--;
                                break;
                            }
                            f1--;
                        }
                        else break;
                    }
                    else if(f1>0){
                        if(cnt+freq[i][0]<=m || (cnt+freq[i][0]==m+1 && f1>=2)){
                            cnt+=freq[i][0];
                            if(cnt==m+1){
                                cnt--;
                                break;
                            }
                            f1--;
                        }
                        else break;
                    }
                    else if(f2>0){
                        if(cnt+freq[i+1][0]<=m){
                            cnt+=freq[i+1][0];
                            f2--;
                        }
                        else break;
                    }
                }
                ans=max(ans,cnt);
            }
            else{
                ll cnt=0;
                ll f1=freq[i][1];
                for(ll j=0;j<freq[i][1];j++){
                    if(cnt+freq[i][0]<=m && f1>0){
                        cnt+=freq[i][0];
                        f1--;
                    }
                    else break;
                }
                ans=max(ans,cnt);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
