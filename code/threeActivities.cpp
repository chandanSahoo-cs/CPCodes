/*Link: https://codeforces.com/problemset/problem/1914/D*/

/*It is not the matter of if, it is the matter of when*/
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define testcases ll tsts; cin >> tsts; while(tsts--)
#define all(x) begin(x), end(x)
ll maxEle(vector<ll>store1,vector<ll>store2,vector<ll>store3,ll n){
    ll sum=0;
    ll it1,it2;
    ll mx1=0,mx2=0,mx3=0;
    for(ll i=0;i<n;i++){
        if(store1[i]>mx1){
            mx1=store1[i];
            it1=i;
        }
    }
    for(ll i=0;i<n;i++){
        if(store2[i]>mx2 && i!=it1){
            mx2=store2[i];
            it2=i;
        }
    }
    for(ll i=0;i<n;i++){
        if(store3[i]>mx3 && i!=it1 && i!=it2){
            mx3=store3[i];
        }
    }
    sum+=(mx1+mx2+mx3);
    return sum;
}
int main() {
    fastio
    testcases {
        ll n; cin>>n;
        vector<ll>a(n),b(n),c(n);
        for(auto &ele:a) cin>>ele;
        for(auto &ele:b) cin>>ele;
        for(auto &ele:c) cin>>ele;
        ll sum1=0,sum2=0,sum3=0;
        sum1=max(maxEle(a,b,c,n),maxEle(a,c,b,n));
        sum2=max(maxEle(b,a,c,n),maxEle(b,c,a,n));
        sum3=max(maxEle(c,a,b,n),maxEle(c,b,a,n));
        cout<<max(sum1,max(sum2,sum3))<<"\n";
    }
    return 0;
}