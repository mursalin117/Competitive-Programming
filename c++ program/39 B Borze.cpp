#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int len, i, coun = 0;
	len = s.length();
	for(i = 0; i < len; i++)
	{
		if(s[i] != '.')coun++;
		else
		{
			printf("%d", coun);
			coun = 0;
		}
	}
	printf("%d\n", coun);
	return 0;
}
