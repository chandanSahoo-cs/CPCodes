/*https://codeforces.com/contest/1992/problem/D*/

/*It is not the matter of if, it is the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define testcases ll tsts; cin >> tsts; while(tsts--)
#define all(x) begin(x), end(x)
int main() {
    fastio
    ll i=0;
    testcases {
        i++;
        ll n,m,k; cin>>n>>m>>k;
        string s; cin>>s;
        // if(i==1560){
        //     cout<<n<<m<<k<<s<<"\n";
        // }
        ll inWater=0;
        bool land=true;
        bool croc=false;
        bool flag=true;
        for(ll i=0;i<n;i++){
            if(s[i]=='L'){
                croc=0;
                inWater=0;
                croc=false;
                land=true;
            }
            else{
                if(s[i]=='C'){
                    if(!land){
                        flag=false;
                        break;
                    }
                    else croc=true;
                }
                if(land) inWater++;
                else k--;
                if(inWater>=m){
                    if(croc && s[i]=='C') {
                        flag=false;
                        break;
                    }
                    else {
                        k-=inWater;
                        land=false;
                        k+=m-1;
                        inWater=0;
                    }
                }
            }
            if(k<0){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
