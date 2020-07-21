//CODEFORCES :-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18

#include<bits/stdc++.h>
using namespace std;

#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int n){
    for(int i=0;i<n;i++){
        cout<<i<<" -> ";
        for(auto x:adj[i])cout<<x<<" ";
        br;
    }
}

void BFS(vector<int> adj[],int s,int v){
    bool *visited = new bool[v]; 
    for(int i = 0; i < v; i++) visited[i] = false; 
    list <int>Q;
    visited[s]=true;
    
    Q.push_back(s);
    vector<int>::iterator i; 

    while(!Q.empty()){

        //if(!Q.front()){br;Q.pop_front();}
        
        s=Q.front();
        cout<<s<<" ";
        Q.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i]) 
            { 
                visited[*i] = true;
                Q.push_back(*i);
            }
        }

        //Q.push_back(NULL);
    }


}

void solve(){
    int n;
    cin>>n;

    vector<int>adj[n];
    fo{int u,v;cin>>u>>v;
        addEdge(adj,u,v);
    }

//    printGraph(adj,n);
//    br;
    BFS(adj,0,n);
}


int main(){
	#ifdef home
        assert(freopen(TASK".in", "r", stdin));
        assert(freopen(TASK".out", "w", stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    solve();
 
    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif

    return 0;
} 
