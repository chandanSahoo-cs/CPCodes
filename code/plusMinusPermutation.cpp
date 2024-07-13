/*Link: https://codeforces.com/problemset/problem/1872/D*/

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
        ll n,x,y; cin>>n>>x>>y;
        ll p1=(n/x)-(n/((x*y)/__gcd(x,y)));
        ll p2=(n/y)-(n/((x*y)/__gcd(x,y)));;
        ll add=(p1*(n+(n-p1+1)))/2;
        ll diff=(p2*(p2+1))/2;
        cout<<add-diff<<"\n";
    }
    return 0;
}