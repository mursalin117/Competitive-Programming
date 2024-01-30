#include <bits/stdc++.h>
using namespace std;

string addingOne (int index, string str, int len) {
    if (index == 0 && str[index] >= '4') {
        for (int i = 0; i < len; i++) {
            str[i] = '0';
        }
        str = '1' + str;
    }
    else {
        for (int i = index+1; i < len; i++) {
            str[i] = '0';
        }
        str[index] += 1;
    }
    return str;
}

int findIndex (int startIndex, char left, char right, string str, bool order) {
    int index = -1;
    int len = str.length ();
    if (order) {
        for (int i = startIndex; i < len; i++) {
            if (str[i] >= left && str[i] <= right) {
                index = i;
                break;
            } 
        }
    }
    else {
        for (int i = startIndex; i >= 0; i--) {
            if (str[i] >= left && str[i] <= right) {
                index = i;
                break;
            }
        }
    }
    return index;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int len = str.length();
        int index = findIndex(0, '5', '9', str, true);
        if (index == 0) { 
            str = addingOne(0, str, len);
        }
        else if (index > 0) {
            int index2 = findIndex(index-1, '0', '3', str, false);
            if (index2 == -1) {
                int index3 = findIndex(index-1, '4', '4', str, false);
                if (index3 == -1) {
                    str = addingOne(0, str, len);
                }
                else {
                    int index4 = findIndex(index3-1, '0', '3', str, false);
                    if (index4 == -1) {
                        str = addingOne(0, str, len);
                    }
                    else {
                        str = addingOne(index4, str, len);
                    }
                }
            }
            else {
                str = addingOne(index2, str, len);
            }
        }
        else {

        }
        cout << str << endl;
    }
    return 0;
}