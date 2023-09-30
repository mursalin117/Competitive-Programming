#include <iostream>
#include <string>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,sumBlack = 0,sumWhite = 0;
    char ch[8][8];

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            cin >> ch[i][j];
            if(ch[i][j] == 'q') sumBlack = sumBlack + 9;
            else if(ch[i][j] == 'r') sumBlack = sumBlack + 5;
            else if(ch[i][j] == 'b') sumBlack = sumBlack + 3;
            else if(ch[i][j] == 'n') sumBlack = sumBlack + 3;
            else if(ch[i][j] == 'p') sumBlack = sumBlack + 1;
            else if(ch[i][j] == 'k') sumBlack = sumBlack + 0;
            else if(ch[i][j] == 'Q') sumWhite = sumWhite + 9;
            else if(ch[i][j] == 'R') sumWhite = sumWhite + 5;
            else if(ch[i][j] == 'B') sumWhite = sumWhite + 3;
            else if(ch[i][j] == 'N') sumWhite = sumWhite + 3;
            else if(ch[i][j] == 'P') sumWhite = sumWhite + 1;
            else if(ch[i][j] == 'k') sumWhite = sumWhite + 0;
        }
    }
    if(sumBlack == sumWhite) cout << "Draw" << endl;
    else if(sumBlack > sumWhite) cout << "Black" << endl;
    else cout << "White" << endl;

    return 0;
}
