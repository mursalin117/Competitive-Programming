#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {8, 3, 2, 1, 6, 4, 5, 7};

    sort (a, a + 8);

    for(int i = 0; i < 8; i++) cout << a[i] << endl;

    return 0;
}
