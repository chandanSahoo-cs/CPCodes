/*https://codeforces.com/contest/1994/problem/B*/

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
        ll n;cin>>n;
        string s; cin>>s;
        string t; cin>>t;
        bool zero=false;
        bool one=false;
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(s[i]!=t[i]){
                if(t[i]=='1'){
                    if(s[i]=='0' && !one){
                        flag=false;
                        break;
                    }
                    else if(s[i]=='1' && !zero){
                        flag=false;
                        break;
                    }
                }
            }
            if(s[i]=='0') zero=true;
            else one=true;
        }
        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
