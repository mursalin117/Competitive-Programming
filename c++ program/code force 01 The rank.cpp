#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,s,x,i,j;
    vector < int > a,b;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        s = 0;
        for(j = 0; j < 4; j++)
        {
            cin >> x;
            s = s + x;
        }
        a.push_back(s);
        b.push_back(s);
    }
    sort(b.begin(),b.end(),greater < int >());

    for(i = 0; i < n; i++)
    {
        if(a[0] == b[i])
        {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}
