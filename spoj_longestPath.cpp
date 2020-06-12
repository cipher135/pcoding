// https://www.spoj.com/problems/PT07Z/
// With the help of double BFS

#include<bits/stdc++.h>
using namespace std;

vector<int> adj[10001];

vector<int> bfs(int s, int n){
    vector<bool> visited(n + 1, false);
    vector<int> dist(n + 1, -1);

    visited[s] = true;
    dist[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];
            if(!visited[v]){
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

int main(){
    int n, x, y, i, source;
    cin >> n;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);

    source = x;
    i = n - 2;

    while(i--){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    vector<int>d(n+1); 
    d = bfs(source, n);
    int max = d[source];
    for(i = 1; i<=n; i++){
        if(max < d[i]){
            max = d[i];
            source = i;
        }
    }

    d = bfs(source, n);
    max = d[source];
    for(i = 1; i<=n; i++) if(max < d[i])  max = d[i];
    cout << max << endl;

    return 0;
}

