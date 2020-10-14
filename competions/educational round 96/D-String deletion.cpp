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
        string s;
        cin>>s;

        vector<int>o,z;
        ll cnt=0;

        for(int i=0;i<n;){
            int t =0;
            while(i<n&&s[i]=='0'){t++;i++;}
            if(t>0)z.push_back(t);
            t=0;
            while(i<n&&s[i]=='1'){t++;i++;}
            if(t>0)z.push_back(t);
        }

        int p1=0,p2=0;
        for(int p1=0;p1<n;p1++){
            p2 = max(p1,p2);
            while(p2<z.size()&&z[p2]==1){p2++;}
            if(p2==z.size()){cnt+=(z.size()-p1+1)/2;break;}
            else{z[p2]--;}
            cnt++;
        }

        cout<<cnt;
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