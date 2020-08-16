//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18
///////////////////SOLVED AFTER WATCHING TUTORIAL

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


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<int,int> m;
    ll total =0;
    m[0]=1;
    int sum=0;
    for(int i=0;i<n;i++){
        int x=s[i]-'0';
        x--;
        sum+=x;
        total+=(ll)m[sum];
        m[sum]++;
    }
    cout<<total<<endl;
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