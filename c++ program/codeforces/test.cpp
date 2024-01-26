#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int p = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        // if (i == 0) {
        //     arr[p++] = x;
        // }
        // else {
        //     bool check = true;
        //     for (int j = 0; j < p; j++) {
        //         if (arr[j] == x) {
        //             check = false;
        //             break;
        //         }
        //     }
        //     if (check) {
        //         arr[p++] = x;
        //     }
        // }
        if (i == 0) {
            arr[p++] = x;
            // for (int r = 0; r < p; r++) {
            //     cout << arr[r] << ' ';
            // }
            // cout << endl;
        }
        else {
            if (arr[0] > x) {
                for (int j = p; j > 0; j--) {
                    arr[j] = arr[j-1];
                    // cout << " j=" << j << " ";
                }
                // cout << endl;
                arr[0] = x;
                p++;
                // for (int r = 0; r < p; r++) {
                //     cout << arr[r] << ' ';
                // }
                // cout << endl;
            }
            else if (arr[p] < x) {
                arr[p++] = x;
            }
            else {
                for(int j = 0; j < p; j++) {
                    if (arr[j] == x) {
                        for (int r = 0; r < p; r++) {
                            cout << arr[r] << ' ';
                        }
                        cout << endl;
                        break;

                    }
                    else if (arr[j] < x && arr[j+1] > x) {
                        for (int k = p; k > j+1; k--) {
                            arr[k] = arr[k-1];
                        }
                        arr[j+1] = x;
                        p++;
                        break;
                    }
                }
            }
            // for (int r = 0; r < p; r++) {
            //     cout << arr[r] << ' ';
            // }
            // cout << endl;
        }
    }
    
    cout << endl;

    for (int i = 0; i < p; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}