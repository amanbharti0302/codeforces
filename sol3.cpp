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


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int sum=0,lcnt=0,gcnt=0;

    for(int i=0;i<n;i++){

        if(sum>i+1){sum=0;lcnt=0;}
        else if(sum==0){}
        else lcnt++;
        
        sum+=(s[i]-'0');
        
        if((s[i]-'0')<=i+1&&s[i]!='0')gcnt++;

        gcnt=max(gcnt,lcnt);
    }

    cout<<gcnt<<endl;
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