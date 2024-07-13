#include <bits/stdc++.h>
#define MAXN 200000
#define ll long long
using namespace std;

vector<int> E[MAXN+2];
int P[MAXN+2];
int depths[MAXN+2];
void dfs(int par, int u,int d) {
    P[u]=par;
    depths[u]=d;
    for(int v : E[u]) {
        if (v==par) continue;
        dfs(u,v,d+1);
    }
}

int get_max_depth(int par,int u) {
    int ret=0;
    for(int v : E[u]) {
        if (v==par) continue;
        ret = max(ret, 1+get_max_depth(u,v));
    }
    return ret;
}

int main() {
    int T;
    cin>>T;
    for(int t=1;t<=T;t++) {
        int n;
        cin>>n;
        int a,b;
        cin>>a>>b;
        for(int i=1;i<=n;i++) E[i].clear();
        for(int i=1;i<=n-1;i++) {
            int u,v;
            scanf("%d",&u);
            scanf("%d",&v);
            E[u].push_back(v);
            E[v].push_back(u);
        }
        dfs(-1,a,0);

        int ans=0;
        int d = depths[b];
        while(depths[b]>d/2) {
            b=P[b];
            ans++;
        }
        cout << ans + 2*(n-1) - get_max_depth(-1,b) << endl;


        
    }
}