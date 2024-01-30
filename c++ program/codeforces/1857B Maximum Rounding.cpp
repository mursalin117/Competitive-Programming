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

int checkForZeroToThree (int first, int last, string str) {
    int index = -1;
    for (int i = first; i >= last; i--) {
        if (str[i] >= '0' && str[i] <= '3') {
            index = i;
            break;
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
        int index = -1;
        for (int i = 0; i < len; i++) {
            if (str[i] >= '5' && str[i] <= '9') {
                index = i;
                break;
            }
        }
        // cout << index << endl;
        if (index == 0) { 
            str = addingOne(0, str, len);
        }
        else if (index > 0) {
            int index2 = checkForZeroToThree(index-1, 0, str);
            // cout << index2 << endl;
            if (index2 == -1) {
                int index3 = -1;
                for (int i = index-1; i >= 0; i--) {
                    if (str[i] == '4') {
                        index3 = i;
                        break;
                    }
                }
                if (index3 == -1) {
                    str = addingOne(0, str, len);
                }
                else {
                    int index4 = checkForZeroToThree(index3-1, 0, str);
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