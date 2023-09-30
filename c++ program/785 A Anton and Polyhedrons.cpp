#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s = 0,i;
    string s1,s2,s3,s4,s5,ch;

    s1 = "Tetrahedron";
    s2 = "Cube";
    s3 = "Octahedron";
    s4 = "Dodecahedron";
    s5 = "Icosahedron";

    cin >> n;
    getchar();

    for(i = 0; i < n; i++)
    {
        cin >> ch;
        if(!ch.compare(s1)) s = s + 4;
        else if(!ch.compare(s2)) s = s + 6;
        else if(!ch.compare(s3)) s = s + 8;
        else if(!ch.compare(s4)) s = s + 12;
        else s = s + 20;
    }
    cout << s << endl;

    return 0;
}
