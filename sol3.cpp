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

vector<vector<int>> edge;

int findset(int i ,vector<int> &parent){
    if(parent[i]==-1)return i;
    return parent[i] = findset(parent[i],parent);
}
int unionset(int u,int v,vector<int> &parent,vector<int> &rank){
    int s1 = findset(u,parent);
    int s2 = findset(v,parent);
    if(s1!=s2){
        if(rank[s1]<rank[s2]){
            parent[s1]=s2;
            rank[s2]+=rank[s1];
        }
        else{
            parent[s2]=s1;
            rank[s1]+=rank[s2];
        }
    }
}



void solve(){
    ll n,m;
    cin>>n>>m;
    
    vector<int> parent(n+1,-1);
    vector<int> rank(n+1,1);

    int temp[m+5] ={0};

    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        temp[w] = 1;
        edge.pb({w,u,v,i});
    }
    sort(edge.begin(),edge.end());


    for(auto it : edge){
        int x,y,w;
        w = it[0],x= it[1],y = it[2];
        if(findset(x,parent)!=findset(y,parent)){
            unionset(x,y,parent,rank);
        }
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