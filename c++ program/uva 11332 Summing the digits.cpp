#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n,s;

    cin >> n;

    while(n != 0)
    {
        begin :
        s = 0;
        while(n > 0)
        {
            s = s + (n%10);
            n = n/10;
        }
        n = s;
        if(n/10 != 0) goto begin;
        else cout << n << endl;
        cin >> n;
    }
    return 0;
}
