#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int len, i, coun = 0;
	len = s.length();
	for(i = 0; i < len; i++)
	{
		if(s[i] == '.') printf("0");
		else if(s[i] == '-' && s[i+1] == '.') { printf("1"); i += 1; }
		else { printf("2"); i += 1; }
	}
	return 0;
}
