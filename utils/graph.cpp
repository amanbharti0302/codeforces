
#include<bits/stdc++.h>
using namespace std;

#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)


class Graph {
	public:
		int V;
		int E;
		int **adj;
		
		Graph(int v){
			this->V=v;
			this->adj=new int*[v];
			for(int i=0;i<v;i++)
			this->adj[i]=new int[v];
				
			for(int i=0;i<v;i++)
			for(int j=0;j<v;j++)
			this->adj[i][j]=0;
		}
		void addedge(int x,int y);
		int checkedge(int x,int y);
};

int Graph::checkedge(int x,int y)
{  
	int visited[V]={0};	
	visited[x]=1;
	list<int> s;
	s.push_back(x);
	int temp=y;
	while(!s.empty())
	{
		temp = s.back();
		s.pop_back();
		if(temp==y)return 1;
		for(int i=1;i<V;i++)
		{
			if(i!=temp&&adj[temp][i]==1&&visited[i]==0){
				s.push_back(i);
				visited[i]=1;
			}
		}
	}
	return 0;
}

void Graph::addedge(int x,int y){
	adj[x][y]=1;
	adj[y][x]=1;
}