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

list<pair<int,int>>l;

void addEdge(int u,int v){
    l.pb(make_pair(u,v));
}

int findset(int i,vector<int> &parent){
    if(parent[i]==-1)return i;
    parent[i] = findset(parent[i],parent);   
    return parent[i];
}

void unionset(int u,int v,vector<int> &parent,vector<int> &rank){
    int s1 = findset(u,parent);
    int s2 = findset(v,parent);

    if(s1!=s2){
        if(rank[s1]<rank[s2]){
            parent[s1]=s2;
            rank[s2]+=rank[s1];
        }
        else{
            parent[s1]=s2;
            rank[s1]+=rank[s2];
        }
    }

}

bool contain_cycle(int size){
    vector<int> parent(size+1,-1);
    vector<int> rank(size+1,1);

    for(auto it:l){
        int u = it.first;
        int v = it.second;

        int s1 = findset(u,parent);
        int s2 = findset(v,parent);

        if(s1!=s2){unionset(u,v,parent,rank);}
        else return true;
    }
    return false;
}

void solve(){
    addEdge(1,2);
    addEdge(2,3);
    addEdge(1,4);
    addEdge(4,1);
    cout<<contain_cycle(4);
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