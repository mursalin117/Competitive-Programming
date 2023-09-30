#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int number,i,j;
    //printf("Enter the number\n");
    //scanf("%d",&number);

    long long int primes[1000005];

    //populating array with naturals numbers
    for(i = 2; i<=1000005; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= 1000005)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<1000005; j++)
            {
                if (primes[i]*j > 1000005)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    for(i = 2; i<=1000005; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0)
            printf("%I64d\n",primes[i]);
    }

    return 0;
}
