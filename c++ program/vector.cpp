#include <iostream>
#include <vector>
#include <iterator>

#define nl "\n"

using namespace std;

int main() {
    vector <int> v(5, 1);

    cout<<"Current size of v vector"<<v.size()<<nl;
    for(int i = 0; i < v.size(); i++) cout<<v[i]<<" ";cout<<nl;

    vector <int>::iterator it = v.begin();

    //insert 10 elements with 9

    it+=2;

    v.insert(it,10,5);

    cout<<"Size after insert: "<<v.size()<<nl;

    for(int i=0; i < v.size(); i++) cout<<v[i]<<" ";
    cout<<nl;

    it = v.begin();
    it += 2;

    v.erase(it, it + 10);

    cout<<"after erase elements vector size = "<<v.size()<<nl;

    for(int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
    cout<<nl;

    return 0;
}


