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
        ll n;
        cin>>n;

        for(int i=0;i<=n/3;i++){
            for(int j=0;j<=n/5;j++){
                for(int k=0;k<=n/7;k++){
                    if((i*3)+(j*5)+(k*7)==n){cout<<i<<" "<<j<<" "<<k<<endl;return;}
                }
            }
        }

        cout<<-1;
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