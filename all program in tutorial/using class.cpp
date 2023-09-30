// Create object

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class rectangle
{
public :
    int height;
    int width;
};

int main()
{
    rectangle r;

    r.height = 10;
    r.width = 4;

    cout << "The area is = " << r.height * r.width << endl;

    return 0;
}
