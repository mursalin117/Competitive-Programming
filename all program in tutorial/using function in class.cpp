#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class rectangle
{
public:
    int height;
    int width;

    int area()
    {
        return height * width;
    }
};

int main()
{
    rectangle r;

    r.height = 12;
    r.width = 10;

    cout << "The area of the rectangle is = " << r.area() << endl;

    return 0;
}
