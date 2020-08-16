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


void solve(){
    string s;
    cin>>s;

    vector<int> ar;

    int i=0;
    while(i<s.length()){
        if(s[i]=='1'){
            int cnt=0;
            while(s[i]=='1'){
                cnt++;
                i++;
            }
            ar.pb(cnt);
        }
        i++;
    }

    sort(ar.begin(),ar.end(),greater<int>());
    ll score=0;
    for(i=0;i<ar.size();i++){
        if(i%2==0)score+=ar[i];
    }
    cout<<score<<endl;

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