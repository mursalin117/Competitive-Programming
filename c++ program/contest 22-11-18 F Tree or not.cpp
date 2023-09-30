#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> adj[100000];
int vis[100000];

int bfs(int s)
{
    int i, len, coun = 1;
    vis[s] = 1;

    queue <int> Q;
    Q.push(s);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        len = adj[u].size();
        for(i = 0; i < len; i++)
        {
            int v = adj[u][i];

            if(vis[v] == 0)
            {
                Q.push(v);
                vis[v] = 1;
                coun++;
            }
        }
    }
    return coun;
}

int main()
{
    int n, edge, i, x, y, c;
    scanf("%d%d", &n, &edge);
    for(i = 0; i < edge; i++)
    {
        scanf("%d%d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    c = bfs(1);
    if(n == 1) printf("YES\n");
    else if(edge != (n-1)) printf("NO\n");
    else if(c == n) printf("YES\n");
    else printf("NO\n");
    return 0;
}
