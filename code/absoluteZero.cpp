/*https://codeforces.com/contest/1991/problem/C*/

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
long long binaryExponentiation(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}
int main() {
    fastio
    testcases {
        ll n; cin>>n;
        vector<ll>store(n);
        for(auto &ele:store) cin>>ele;
        bool odd=false;
        bool even=false;
        for(ll i=0;i<n;i++){
            if(store[i]%2==0) odd=true;
            else even=true;
        }
        if((odd && !even) || (!odd && even)){
            for(ll i=29;i>=0;i--){
                for(ll j=0;j<n;j++){
                    store[j]=abs(store[j]-binaryExponentiation(2,i));
                }
            }
            if(store[0]==0){
                cout<<30<<"\n";
                for(ll i=29;i>=0;i--){
                    cout<<binaryExponentiation(2,i)<<" ";
                }
            }
            else {
                cout<<30+1<<"\n";
                for(ll i=29;i>=0;i--){
                    cout<<binaryExponentiation(2,i)<<" ";
                }
                cout<<1;
            }
            cout<<"\n";
        }
        else cout<<-1<<"\n";
    }
    return 0;
}
