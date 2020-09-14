    //CODEFORCES:-
    //coded by AMAN BHARTI NIT PATNA
    //ECE 2K18
    //After reading editorial
    //https://codeforces.com/contest/1405/problem/D

    #include<bits/stdc++.h>
    using namespace std;

    //#define home
    #define TASK "soln"
    #define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
    #define pb push_back
    #define pp pop_back
    #define ll long long int
    #define ull unsigned long long
    #define br cout<<endl;
    #define fo for(int i=0;i<n;i++)
    #define foo for(int i=1;i<=n;i++)
    #define rep(i,a,n) for(int i=a;i<n;i++)
    #define mod 1000000007
    ll gcd(ll a,ll b);
    ll power(ll a,ll b);
    ll powerwithmod(ll a,ll b);
    ll nCr(ll n,ll r);
    ll fact(ll n);

    ll n,a,b,da,db;
    vector<int> adj[200009];
    vector<bool> visited(200009,false);
    ll dis=0;
    ll diameter=0;

    ll dfs_util(ll src,ll depth){
        visited[src]=true;
        ll len=0;
        if(src == b)dis = depth;

        for(auto it:adj[src]){
            if(!visited[it]){
               ll temp = 1+dfs_util(it,depth+1);
                diameter = max(diameter,temp+len);
                len = max(len,temp);
            }
        }
        return len;
    }


    void solve(){
        dis=0;diameter=0;
        cin>>n>>a>>b>>da>>db;
        for(int i=0;i<=n;i++){visited[i]=false;adj[i].clear();}

        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs_util(a,0);
        
        if(dis<=da){cout<<"Alice";}
        else if(2*da>=diameter)cout<<"Alice";
        else if(db>2*da)cout<<"Bob";
        else cout<<"Alice";
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

    ll gcd(ll a,ll b) {if(b==0)return a;return gcd(b,a%b);}
    ll powerwithmod(ll a,ll b) {ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res%mod;}
    ll power(ll a,ll b) {ll res=1;while(b>0){if(b&1)res=(res*a);a=(a*a);b>>=1;}return res;} 
    ll nCr(ll n, ll r){return fact(n) / (fact(r) * fact(n - r));} 
    ll fact(ll n){ll res = 1;for(ll i = 2; i <= n; i++)res = (res * i)%mod;return (res)%mod;}