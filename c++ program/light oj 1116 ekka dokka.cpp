#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int i,j,t,n,m,x;

    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> n;

        if(n%2 != 0) cout << "Case " << i << ": Impossible" << endl;
        else
        {
            m = 1;
            for(j = 0; ; j++)
            {
                m = m*2;
                x = n/m;
                if(x%2 != 0)
                {
                    cout << "Case " << i << ": "<< x << " " << m << endl;
                    break;
                }
                else continue;
            }
        }
    }
    return 0;
}
