    //14 days left
    //coded by AMAN BHARTI NIT PATNA ECE 2K18
    #include<bits/stdc++.h>
    using namespace std;

    //#define home
    #define TASK "soln"
    #define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
    #define ll long long int
    #define br cout<<endl
    #define mod 1000000007

    void solve(){
        ll n,k;
        cin>>n>>k;
        ll a[n +1];
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);

        for(int i=n-1;i>=1;i--){
            if(k<=0)break;
            if(a[i]==0)continue;
            a[n]+=a[i];
            a[i]=0;
            k--;
        }

        sort(a+1,a+n+1);
        cout<<a[n]-a[1];
        br;
    }

    int main(){
        #ifdef home
            assert(freopen(TASK".in","r",stdin));
            assert(freopen(TASK".out","w",stdout));
        #endif

        ios::sync_with_stdio(false);cin.tie(NULL);
        int t;
        cin>>t;
        while(t-->0)
        solve();

        #ifdef home
            eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
        #endif

        return 0;
    }