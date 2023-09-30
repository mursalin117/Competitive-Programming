#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class rectangle
{
public :
    int height;
    int width;

    int area();
};

inline int rectangle :: area()
{
    return height * width;
}

int main()
{
    rectangle r;

    r.height = 10;
    r.width = 5;

    cout << "The area is = " << r.area() << endl;

    return 0;
}

