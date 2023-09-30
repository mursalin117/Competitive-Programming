#include <istream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, i, sum = 0, mid;

    cin >> n >> a >> b;

    int A[n];

    for(i = 0; i < n; i++) cin >> A[i];

    if(n%2 == 0) mid = n/2;
    else mid = (n/2)+1;

    for(i = 0; i < mid; i++)
    {
        if(A[i] == A[n-1-i]  && A[i] == 0) continue;
        else if(A[i] == A[n-1-i] && A[i] == 1) continue;
        else if(A[i] == A[n-1-i] && A[i] == 2)
        {
            if(i == (mid-1) && n%2 != 0)
            {
                if(a > b) sum += b;
                else sum += a;
                continue;
            }
            if(a > b) sum += (2*b);
            else sum += (2*a);
        }
        else if(A[i] == 0 && A[n-1-i] == 2) sum += a;
        else if(A[i] == 1 && A[n-1-i] == 2) sum += b;
        else if(A[i] == 2 && A[n-1-i] == 0) sum += a;
        else if(A[i] == 2 && A[n-1-i] == 1) sum += b;
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << sum << endl;

    return 0;
}
