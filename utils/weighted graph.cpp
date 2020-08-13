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

class Graph{
    unordered_map <string,list<pair <string,int>>> l;
    public:

    void addEdge(string x,string y,bool bidir ,int wt){
        l[x].pb(make_pair(y,wt));
        if(bidir)
        l[y].pb(make_pair(x,wt));
    }

    void PrintAdjList(){
        for(auto p:l){
            string city = p.first;
            list <pair <string ,int>> nbrs = p.second;

            cout<<city<<"-> ";
            for(auto nbr:nbrs){
                string dest = nbr.first;
                int dist = nbr.second;
                cout<<dest<<" "<<dist<<",";
            }
            cout<<endl;
        }
    }
};

void solve(){
    Graph g;

    g.addEdge("patna","begusarai",1,100);
    g.addEdge("patna","barauni",1,90);
    g.addEdge("delhi","patna",0,1500);
    g.addEdge("delhi","kolkata",1,2000);
    g.PrintAdjList();
    
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