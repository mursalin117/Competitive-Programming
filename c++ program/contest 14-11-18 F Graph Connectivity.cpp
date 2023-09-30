#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> adj[1000005];
int vis[1000005], lvl[1000005];

int bfs(int s);

int main()
{
    int t, n, i, result;
    string s, str;

    scanf("%d", &t);
    getchar();

    while(t--)
    {
        printf("\n");
        cin >> s;
        while(1)
        {
            cin >> str;
            if(str.compare("\n")) break;
            adj[str[0]-'A'+1].push_back(str[1]-'A'+1);
        }
        result = bfs(s[0]-'A'+1);
        printf("%d\n", result);
    }
    return 0;
}

int bfs(int s)
{
    int i, len, m;

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

            }
        }
    }
}
