#include <iostream>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

#define nl "\n"

int f(int n) {
    return n*n+n;
}

int main()
{
    vector <int> vi;

    vi.push_back(12);
    vi.push_back(13);
    vi.push_back(14);

    for(int i = 0; i < 3; i++) {
        int n;
        cin>>n;
        vi.push_back(n);
    }
    sort(vi.rbegin(), vi.rend());

    for(int i  = 0; i < vi.size(); i++) {
        cout<<vi[i]<<" ";
    }

    return 0;
}
