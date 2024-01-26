#include <bits/stdc++.h>
using namespace std;

// int compare(const void* num1, const void* num2) // comparing function  
// {  
//     int a = *(int*) num1;  
//     int b = *(int*) num2;  
//     if(a > b)  
//     {  
//         return 1;  
//     }  
//     else if(a < b)  
//     {  
//         return -1;  
//     }  
//     return 0;  
// }  

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mp[300009] = {0};
        int arr[n];
        int p = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
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
                            // for (int r = 0; r < p; r++) {
                            //     cout << arr[r] << ' ';
                            // }
                            // cout << endl;
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


    // int t;
    // cin >> t;
    // while (t--) {
    //     int n;
    //     cin >> n;
    //     int mp[300009] = {0};
    //     int arr[n];
    //     int p = 0;
    //     for (int i = 0; i < n; i++) {
    //         int x;
    //         cin >> x;
    //         mp[x]++;
    //         bool check = true;
    //         if (i == 0) {
    //             arr[p++] = x;
    //         }
    //         else {
    //             for (int j = 0; j < p; j++) {
    //                 if (arr[j] == x) {
    //                     check = false;
    //                     break;
    //                 }
    //             }
    //             if (check) {
    //                 arr[p++] = x;
    //             }
    //         }
    //     }

        // for (int i = 0; i < p-1; i++) {
        //     for (int j = i+1; j < p; j++) {
        //         if (arr[i] > arr[j]) {
        //             int temp = arr[i];
        //             arr[i] = arr[j];
        //             arr[j] = temp;
        //         }
        //     }
        // }

        // qsort(arr, p, sizeof(int), compare);  
        // sort(arr, arr+p);  

        // int arr[n];
        // int p = 0;
        // for (int i = 0; i < 300009; i++) {
        //     if (mp[i]) {
        //         arr[p++] = i;
        //     }
        // }
        int cnt = 0;
        long long total = 0;
        for (int i = 0; i < p; i++) {
            if (mp[arr[i]] >= 3) {
                total += ((long long)mp[arr[i]] * (mp[arr[i]]-1) * (mp[arr[i]]-2)) / 6;
            } 
            if (cnt > 0) {
                total += cnt * (((long long)mp[arr[i]] * (mp[arr[i]]-1)) / 2);
            }
            cnt += mp[arr[i]];
        }
        cout << total << endl;
    }
    return 0;
}