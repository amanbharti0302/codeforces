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

void cal(int n,string s)
{
    int cnt=0;
    vector<int> mem;
    vector<int> z,o;
    
    int i=0;
    while (i<n)
    {   
        if(s[i]=='0'){
            if(o.size()>0){
                int temp = o.back();
                o.pop_back();
                mem.pb(temp);
                z.pb(temp);
            }
            else{
                cnt++;
                z.pb(cnt);
                mem.pb(cnt);
            }
        }
        if(s[i]=='1'){
            if(z.size()>0){
                int temp = z.back();
                z.pop_back();
                mem.pb(temp);
                o.pb(temp);
            }
            else{
                cnt++;
                o.pb(cnt);
                mem.pb(cnt);
            }
        }
        i++;
    }

    cout<<cnt<<endl;

    for(int i=0;i<mem.size();i++){
        cout<<mem[i]<<" ";
    }
    br;

}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    cal(n,s);
    
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