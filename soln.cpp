    //CODEFORCES:-
    //ECE 2K18

    #include<bits/stdc++.h>
    #include<ext/pb_ds/assoc_container.hpp>
    #include<ext/pb_ds/tree_policy.hpp>
    using namespace std;
    using namespace __gnu_pbds;

    #define home
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

    void solve(){
        ll n,s;
        cin>>n>>s;

        if(n<=s){cout<<0<<endl;return;}

        ll ans =0;
        ll i=1;
        ll sum=0;
        ll t=n;
        while(t>0){sum+=t%10;t=t/10;}
        //cout<<sum<<" ";

        // while(sum>s){
        //     ans+=(9-(n%10)+1)*i;
        //     sum=sum-(n%10);
        //     sum++;
        //     n=n/10;
        //     n++;
        //     i=i*10;
        //     // cout<<sum<<" ";
        // }

        cout<<ans;
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