#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,a,b,i,j,s,m;

    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> a >> b;

        s = 0;
        if(a<b)
        {
            for(j = a; j <= b; j++)
            {
                if(j%2 != 0) s = s + j;
            }
        }
        else
        {
            for(j = b; j <= a; j++)
            {
                if(j%2 != 0) s = s + j;
            }
        }
        cout << "Case "<< i << ": " << s << endl;
    }
    return 0;
}
