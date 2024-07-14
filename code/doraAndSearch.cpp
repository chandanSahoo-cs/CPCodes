/*Link: https://codeforces.com/problemset/problem/1793/C*/

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
        vector<ll>freq(n+1);
        for(ll i=1;i<n+1;i++) freq[i]=i;
        ll sl=0,sr=n-1,fl=1,fr=n;
        bool flagl=true;
        bool flagr=true;
        while(sl<sr || fl<fr){
            if(store[sl]==freq[fl]){
                sl++;
                fl++;
                flagl=false;
            }
            else if(store[sl]==freq[fr]){
                sl++;
                fr--;
                flagl=false;
            }
            else flagl=true;

            if(store[sr]==freq[fl]){
                sr--;
                fl++;
                flagr=false;
            }
            else if(store[sr]==freq[fr]){
                sr--;
                fr--;
                flagr=false;
            }
            else flagr=true;

            if(flagl && flagr) break;
        }
        if(flagl && flagr && sl!=sr) cout<<sl+1<<" "<<sr+1<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
