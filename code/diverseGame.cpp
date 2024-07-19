/*https://codeforces.com/contest/1994/problem/A*/

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
        vector<vector<ll>>store(n,vector<ll>(m));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>store[i][j];
            }
        }
        if(n==1 && m==1){
            cout<<-1<<"\n";
            continue;
        }
        for(ll i=0;i<n;i++){
            ll temp=store[i][0];
            for(ll j=0;j<m;j++){
                if(j==0) store[i][j]=store[i][m-1];
                else{
                    swap(store[i][j],temp);
                }
            }
        }
        for(ll j=0;j<m;j++){
            ll temp=store[0][j];
            for(ll i=0;i<n;i++){
                if(i==0) store[i][j]=store[n-1][j];
                else{
                    swap(temp,store[i][j]);
                }
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cout<<store[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
