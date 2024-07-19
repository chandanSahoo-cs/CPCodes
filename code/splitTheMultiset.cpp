/*https://codeforces.com/contest/1988/problem/A*/

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
    testcases {
        ll n,k; cin>>n>>k;
        ll cnt=0;
        while(n>1){
            cnt++;
            n-=(k-1);
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
