#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
vector <bool> visited;
vector <vector <int> > adj;
vector <int> ans;

void dfs(int v) {
    visited[v] = true;
    for(int u : adj[v]) {
        if(!visited[u]) {
            dfs(u);
        }
    }
    ans.push_back(u);
}

void topologicalSort() {
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            dfs(i);
        }
    }
}

void ini() {
    adj.assign(n + 5, vector<int>());
    visited.assign(n + 5, false);
}

int main() {
    int  edge, a, b;
    scanf("%d%d", &n, &edge);
    ini();

    for(int i = 0; i < edge; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    topologicalSort();
    for(int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }


    return 0;
}
