#include<bits/stdc++.h>
using namespace std;
class Graph{
  public:
    map<int,bool>visited;
    map<int,list<int> >adj;
    
   
    void addEdge(int src,int dest)
    {
    adj[src].push_back(dest);       //adj[i]---->1 adj[i]------>2=>adj[i]---->1--->2
    }
    void dfs(int v)
    {
      visited[v]=true;
     cout<<v<<" ";
    list<int>::iterator i;
      for(i=adj[v].begin();i!=adj[v].end();i++)
      {
        if(!visited[*i])
        {
            dfs(*i);
        }
      }
    
    }
    void check(int des)
    {
         if(visited[des]==true)
 
 else
 cout<<"not possible";
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    
            
            int node,des;
            cout<<"enter the node to find its dfs traversal exitence??"<<endl;
            cin>>node;
            cout<<"enter the destination of your traversal";
            cin>>des;
            
    g.dfs(node);
    g.check(des);


    return 0;
}
