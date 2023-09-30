#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll arr[100005], t = 0;

void sieveFunction()
{
    bool prime[1000005];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p*p < 1000005; p++)
    {
        if(prime[p] == true)
        {
            for(int i = p*p; i < 1000005; i += p)
                prime[i] = false;
        }
    }
    for(int p = 2; p < 1000005; p++)
    {
        if(prime[p] == true)
        {
            arr[t] = (ll)p * (ll)p;
            t++;
        }
    }
}

bool binarySearch(ll arr[], ll Beg, ll End, ll data)
{
    ll mid;
    while(Beg <= End)
    {
        mid = (Beg + End)/2;

        if(arr[mid] > data)  End = mid-1; //cout << mid << " " << arr[mid] << endl; }
        else if(arr[mid] < data) Beg = mid+1; //cout << mid << " " << arr[mid] << endl; }
        else break;
    }
    if(arr[mid] == data) return true;
    else return false;
}


int main()
{
    sieveFunction();
    int n, i;
    ll x;
    bool z;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        if((z = binarySearch(arr, 0, t-1, x))) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
