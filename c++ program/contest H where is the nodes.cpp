#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> adj[100005];
int lvl[100005], vis[100005];

int bfs(int s, int z);

int main()
{
    int edge, t = 0, x, y, i, notReachable;

    while(scanf("%d", &edge))
    {
        for(i = 0; i <= 100000; i++)
        {
            adj[i].clear();
            lvl[i] = 0;
            vis[i] = 0;
        }
        if(edge == 0) break;
        else
        {
            for(i = 0; i < edge; i++)
            {
                scanf("%d%d", &x, &y);
                adj[x].push_back(y);
                adj[y].push_back(x);
            }
            while(scanf("%d%d", &x, &y))
            {
                if(x == 0 && y == 0) break;
                notReachable = bfs(x, y);
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d\n", ++t, notReachable, x, y);
            }
        }
    }
    return 0;
}

int bfs(int s, int z)
{
    int i, len, coun = 0;

    vis[s] = 1;
    lvl[s] = 0;

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
                vis[v] = 1;
                Q.push(v);
                lvl[v] = lvl[u] + 1;

                if(lvl[v] > z) coun++;
            }
        }
    }
    return coun;
}

/*map <int, int> mp;

int x, y;

for(int i = 0;  i < node; i++) {
    cin >> x >> y;

    mp[x] = y;

    m
    mp[y] = x;
}
*/
