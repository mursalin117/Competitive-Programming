#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        int i,a,b,t;

        cin >> t;

        for(i=0; i<t; i++)
        {
            cin >> a >> b;
            if(a==0 && b==0) cout << "1" << endl;
            else if(a == 0) cout << "2" << endl;
            else if(b == 0) cout << "1" << endl;
            else if(abs(a) == abs(b)) cout << "4" << endl;
            else cout << "TOO COMPLICATED" << endl;
        }
        return 0;
}
