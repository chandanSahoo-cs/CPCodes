/*Link: https://codeforces.com/problemset/problem/1832/C*/

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
        vector<ll>store(n);
        for(auto &ele:store) cin>>ele;
        bool mn=false;
        bool mx=false;
        ll cnt=1;
        for(ll i=1;i<n;i++){
            if (!mn && !mx){
                if(store[i]>store[i-1]) mx=true;
                else if (store[i]<store[i-1]) mn=true;
                if(mx || mn) cnt++;
            }
            else if(mx){
                if(store[i]<store[i-1]){
                    cnt++;
                    mx=false;
                    mn=true;
                }
            }
            else if(mn){
                if(store[i]>store[i-1]){
                    cnt++;
                    mn=false;
                    mx=true;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}