#include <iostream>
#include <queue>
using namespace std;

void print_BFS(int **edges,int n,int sv,bool* visited){
    
    
    queue<int> pendingNodes;
    pendingNodes.push(sv);

    visited[sv]=true;

    while(!pendingNodes.empty()){
        int front=pendingNodes.front();
        cout<<front<<endl;
        pendingNodes.pop();
        for(int i=0;i<n;i++){

            if(i==front){
                continue;
            }
            

            if(edges[front][i]==1){
                if (visited[i])
                {
                    continue;
                }

                pendingNodes.push(i);
                visited[i]=true;
            }

            
        }
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }

}