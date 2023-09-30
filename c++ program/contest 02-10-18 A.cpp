#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, d,a;
    scanf("%d%d",&p,&d);
    priority_queue<int>pq;
    for(int i = 0; i < p; i++) {
        cin>>a;
        pq.push(a);
    }
    for(auto it : pq) cout<<*it<<endl;
 }

/*#include <iostream>
#include <bits/stdc++.h>
int coun = 1;

using namespace std;

bool cmp(long int &x, long int &y);

int main()
{
    long int n, i, j, m, c = 1;

    scanf("%ld", &n);

    long int a[n];

    for(i = 0; i < n; i++) scanf("%ld", &a[i]);

    sort(a, a + n, cmp);

    for(i = 0; i < n - 1; i++) printf("%ld ", a[i]);
    printf("%d\n", a[n]);

    return 0;
}

bool cmp(long int &x, long int &y)
{
    if(coun == 1) return true;
    else if(coun % 2 == 0)
    {
        if(y >= x) return true;
        else return false;
    }
    else
    {
        if(y <= x) return true;
        else return false;
    }
    coun++;
}
*/
