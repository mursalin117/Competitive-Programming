#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int value[100005], vis[100005];
vector <int> adj[100005];

bool bfs(int s);

int main()
{
    int n, x, y, coun = 0, i, a, edge;
    bool b;

    while(scanf("%d", &n))
    {
        if(n == 0) break;
        else
        {
            for(i = 0; i <= n; i++)
            {
                adj[i].clear();
                value[i] = 0;
                vis[i] = 0;
            }
            scanf("%d", &edge);
            for(i = 0; i < edge; i++)
            {
                scanf("%d%d", &x, &y);
                adj[x].push_back(y);
                adj[y].push_back(x);
            }
            b = bfs(0);
            if(b == true) printf("BICOLORABLE.\n");
            else printf("NOT BICOLORABLE.\n");
        }
        //scanf("%d", &a);
    }
    return 0;
}

bool bfs(int s)
{
    int i, len;
    vis[s] = 1;
    value[s] = 2;
    //cout << s << " value " << value[s] << endl;

    queue <int> Q;
    Q.push(s);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        len = adj[u].size();
        //cout << u << " value " << value[u] << endl;
        for(i = 0; i < len; i++)
        {
            int  v = adj[u][i];

            if(vis[v] == 0)
            {
                vis[v] = 1;
                Q.push(v);
                if(value[v] == 0)
                {
                    if(value[u] == 2) value[v] = 3;
                    else value[v] = 2;

                    //cout << v << " value " << value[v] << endl;
                }
            }
            else
            {
                if(value[v] == value[u])
                {
                    //cout << v << " value " << value[v] << endl;
                    return false;
                }
                else
                {
                    //cout << v << " value " << value[v] << endl;
                    continue;
                }
            }
        }
    }
    return true;
}

