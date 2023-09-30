#include <iostream>
#include <bits/stdc++.h>
//#include <vector>

using namespace std;

int lvl[100005], vis[100005];
vector <int> adj[100005];

void bfs(int s);

int main()
{
    int n, x, y, coun = 0, i, a;

    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    scanf("%d", &a);

    bfs(1);

    for(i = 1; i <= n; i++)
    {
        if(lvl[i] == a) coun++;
    }
    printf("%d\n", coun);

    return 0;
}

void bfs(int s)
{
    int i, len;
    vis[s] = 1;
    lvl[s] = 1;

    queue <int> Q;
    Q.push(s);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        len = adj[u].size();
        //cout << "u = " << u << endl;
        for(i = 0; i < len; i++)
        {
            int  v = adj[u][i];

            if(vis[v] == 0)
            {
                vis[v] = 1;
                Q.push(v);
                lvl[v] = lvl[u] + 1;
            }
        }
    }
}
