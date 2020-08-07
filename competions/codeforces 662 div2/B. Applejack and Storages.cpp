//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18

#include<bits/stdc++.h>
using namespace std;

//#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define pb push_back
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define foo for(int i=1;i<=n;i++)
#define mod 1000000007

ll b[100008];

void solve(){
    for(int i=0;i<100008;i++)b[i]=0;
    ll n;
    cin>>n;

    ll a[n];
    fo{cin>>a[i];b[a[i]]++;}
    ll q;
    cin>>q;

    int cnt4=0,cnt2=0;

    for(int i=0;i<100008;i++){
            if(b[i]>=6){cnt4+=b[i]/4;int t =b[i]%4;cnt2+=t/2;continue;}
            if(b[i]>=4){cnt4++;continue;}
            if(b[i]>=2){cnt2++;}
        }

    while(q--){
        char x;
        int y;
        cin>>x>>y;
        if(x=='+'){
            b[y]++;
            if(b[y]%4==0){cnt4++;cnt2--;}
            else if(b[y]%2==0){cnt2++;}
            }
        else {
            if(b[y]%4==0){cnt4--;cnt2++;}
            else if(b[y]%2==0){cnt2--;}
            b[y]--;
            }

        if(cnt4>=2){cout<<"YES"<<endl;}
        else if(cnt4==1&&cnt2>=2){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
    br;
}

int main(){
	#ifdef home
        assert(freopen(TASK".in","r",stdin));
        assert(freopen(TASK".out","w",stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif

    return 0;
}