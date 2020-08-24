//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18
#include<bits/stdc++.h>
using namespace std;

#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define pb push_back
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define foo for(int i=1;i<=n;i++)
#define mod 1000000007

int n;
vector<int> gr[100];
int vis[100];
bool odd_cycle =0;

void dfs(int cur,int par,int col){
    vis[cur] = col;
    for(auto child:gr[cur]){
        if(vis[child]==0)dfs(child,cur,3-col);           ///col = color array i.e 3-2 =1 and 3-1=2 so here we will give 1 or 2 to every node if during backedge col ==1 then it is odd cycle
        else if(child!=par&&col==vis[child]){odd_cycle=1;}    //here paernt is taken so that during detecting cycle we didn't detect parent
    }

    return;
}
void solve(){
    int i,j,k,n,m,ans =0,cnt =0,sum=0;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        gr[x].pb(y);
        gr[y].pb(x);
    }

    dfs(1,0,1);

    if(odd_cycle)cout<<"NOT BIPARTITE"<<endl;
    else cout<<"BIPARTITE"<<endl;

    br;
}

int main(){
	#ifdef home
        assert(freopen(TASK".in","r",stdin));
        assert(freopen(TASK".out","w",stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif

    return 0;
}