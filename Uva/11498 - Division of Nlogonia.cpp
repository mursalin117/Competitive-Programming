#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x, y, dx, dy, i;
	while(scanf("%d", &n))
	{
		if(n == 0) break;
		else
		{
			scanf("%d%d", &dx, &dy);
			for(i = 0; i < n; i++)
			{
				scanf("%d%d", &x, &y);
				if(x == dx || y == dy) printf("divisa\n");
				else if(x > dx && y > dy) printf("NE\n");
				else if(x < dx && y < dy) printf("SO\n");
				else if(x < dx && y > dy) printf("NO\n");
				else if(x > dx && y < dy) printf("SE\n");
			}
		}
	}
	return 0;
}
