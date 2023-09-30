#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    string s[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    scanf("%d", &n);
    if(n < 20) cout << s[n];
    else if(n == 20) printf("twenty\n");
    else if(n == 30) printf("thirty\n");
    else if(n == 40) printf("forty\n");
    else if(n == 50) printf("fifty\n");
    else if(n == 60) printf("sixty\n");
    else if(n == 70) printf("seventy\n");
    else if(n == 80) printf("eighty\n");
    else if(n == 90) printf("ninety\n");
    else
    {
        t = n/10;
        if(t == 2) { printf("twenty-"); cout << s[n%10] << endl; }
        else if(t == 3) { printf("thirty-"); cout << s[n%10] << endl; }
        else if(t == 4) { printf("forty-"); cout << s[n%10] << endl; }
        else if(t == 5) { printf("fifty-"); cout << s[n%10] << endl; }
        else if(t == 6) { printf("sixty-"); cout << s[n%10] << endl; }
        else if(t == 7) { printf("seventy-"); cout << s[n%10] << endl; }
        else if(t == 8) { printf("eighty-"); cout << s[n%10] << endl; }
        else if(t == 9) { printf("ninety-"); cout << s[n%10] << endl; }
    }
    return 0;
}
