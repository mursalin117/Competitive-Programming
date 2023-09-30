#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class rectangle
{
    int height;
    int width;

public :
    void setHeightWidth(int h, int w);
    int area();
};

void rectangle :: setHeightWidth(int h, int w)
{
    height = h;
    width = w;
}

int rectangle :: area()
{
    return height * width;
}

int main()
{
    rectangle r;

    r.setHeightWidth(10, 9);

    cout << "The area is = " << r.area() << endl;

    return 0;
}
