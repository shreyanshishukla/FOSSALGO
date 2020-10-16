#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool visited[100];
queue<int> q;
vector<int> adj[100];
int l[100];

void addedge(int u, int v)
{
adj[u].push_back(v);
adj[v].push_back(u);
}
void bfs()
{
while(!q.empty())
{ 
int node=q.front();
q.pop();


for(auto child:adj[node])
{
if(visited[child]==false){
q.push(child);
visited[child]=true;
l[child]=l[node]+1;
cout<<"level "<<l[child]<<"node "<<child<<" "<<endl;

}}
}
}

int main()
{
addedge(0,1);
addedge(0,2);
addedge(0,3);
addedge(3,2);
addedge(5,2);
addedge(6,2);
addedge(7,2);
addedge(7,4);
addedge(3,8);

q.push(0);
visited[0]=true;
l[0]=0;
cout<<"level "<<l[0]<<"node 0"<<endl;
bfs();
}
