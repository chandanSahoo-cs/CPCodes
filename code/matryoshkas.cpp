/*https://codeforces.com/contest/1790/problem/D*/

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
        vector<ll>store(n);
        for(auto &ele:store) cin>>ele;
        map<ll,ll>freq;
        for(ll i=0;i<n;i++){
            freq[store[i]]++;
        }
        ll sum=0,prevFreq=0,prevVal=0;
        for(auto ele:freq){
            if(ele.first==prevVal+1){
                sum+=(ele.second-prevFreq>0?ele.second-prevFreq:0);
                prevVal=ele.first;
                prevFreq=ele.second;
            }
            else{
                prevFreq=0;
                sum+=(ele.second-prevFreq>0?ele.second-prevFreq:0);
                prevFreq=ele.second;
                prevVal=ele.first;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
