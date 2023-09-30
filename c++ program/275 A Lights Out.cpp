/* Only the besides points of row or column should be considered. Not the corner or
   criss-cross points should not be considered.*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3][3], i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            a[i][j] = 1;
    }
    int b[3][3], x, y;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
         {
            scanf("%d", &b[i][j]);
            if(b[i][j] % 2 == 0) continue;
            else
            {
                if(i == 0 && j == 0)
                {
                    a[i][j] += b[i][j];
                    a[i+1][j] += b[i][j];
                    a[i][j+1] += b[i][j];
                    //a[i+1][j+1] += b[i][j];
                }
                else if(i == 0 && j == 1)
                {
                    a[i][j] += b[i][j];
                    a[i][j-1] += b[i][j];
                    a[i][j+1] += b[i][j];
                    a[i+1][j] += b[i][j];
                }
                else if(i == 0 && j == 2)
                {
                    a[i][j] += b[i][j];
                    a[i+1][j] += b[i][j];
                    a[i][j-1] += b[i][j];
                    //a[i+1][j-1] += b[i][j];
                }
                else if(i == 1 && j == 0)
                {
                    a[i][j] += b[i][j];
                    a[i][j+1] += b[i][j];
                    a[i-1][j] += b[i][j];
                    a[i+1][j] += b[i][j];
                }
                else if(i == 1 && j == 1)
                {
                    a[i][j] += b[i][j];
                    a[i-1][j] += b[i][j];
                    a[i+1][j] += b[i][j];
                    a[i][j-1] += b[i][j];
                    a[i][j+1] += b[i][j];
                }
                else if(i == 1 && j == 2)
                {
                    a[i][j] += b[i][j];
                    a[i][j-1] += b[i][j];
                    a[i-1][j] += b[i][j];
                    a[i+1][j] += b[i][j];
                }
                else if(i == 2 && j == 0)
                {
                    a[i][j] += b[i][j];
                    a[i][j+1] += b[i][j];
                    a[i-1][j] += b[i][j];
                    //a[i-1][j+1] += b[i][j];
                }
                else if(i == 2 && j == 1)
                {
                    a[i][j] += b[i][j];
                    a[i-1][j] += b[i][j];
                    a[i][j-1] += b[i][j];
                    a[i][j+1] += b[i][j];
                }
                else
                {
                    a[i][j] += b[i][j];
                    a[i][j-1] += b[i][j];
                    a[i-1][j] += b[i][j];
                    //a[i-1][j-1] += b[i][j];
                }
            }
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] % 2 == 0) printf("0");
            else printf("1");
        }
        printf("\n");
    }
    return 0;
}
