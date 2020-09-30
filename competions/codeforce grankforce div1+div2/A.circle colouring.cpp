    //23 days left
    //CODEFORCES:-
    //coded by AMAN BHARTI NIT PATNA
    //ECE 2K18

    #include<bits/stdc++.h>
    #include <algorithm>
    using namespace std;

    //#define home
    #define TASK "soln"
    #define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
    #define pb push_back
    #define pp pop_back
    #define ll long long int
    #define ull unsigned long long
    #define br cout<<endl
    #define fo for(int i=0;i<n;i++)
    #define foo for(int i=1;i<=n;i++)
    #define rep(i,a,n) for(int i=a;i<n;i++)
    #define repi(i,a,n) for(int i=a;i>=n;i--)
    #define mod 1000000007
    ll gcd(ll a,ll b);
    ll power(ll a,ll b);
    ll powerwithmod(ll a,ll b);
    ll nCr(ll n,ll r);
    ll fact(ll n);


    void solve(){
        ll n;
        cin>>n;
        ll a[n+1],b[n+1],c[n+1],p[n+1];
        foo{cin>>a[i];}
        foo{cin>>b[i];}
        foo{cin>>c[i];}

        p[1]=a[1];

        for(int i=2;i<n;i++){
            if(p[i-1]!=a[i]){p[i]=a[i];continue;}
            if(p[i-1]!=b[i]){p[i]=b[i];continue;}
            if(p[i-1]!=c[i]){p[i]=c[i];continue;}
        }

        if(a[n]!=p[1]&&a[n]!=p[n-1]){p[n]=a[n];}
        else if(b[n]!=p[1]&&b[n]!=p[n-1]){p[n]=b[n];}
        else p[n]=c[n];

        foo{cout<<p[i]<<" ";}
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