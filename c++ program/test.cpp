#include<iostream>
#include<stdio.h>
#include<math.h>
#define mxn 1000001
double a[mxn];

using namespace std;

int main()
{
    int i,m,n,t,l=0;

    double k;

    for( i=1;i<=mxn;i++){
        a[i]=a[i-1]+log(i+0.0);}
        scanf("%d",&t);
        while(t--){
                scanf("%d%d",&m,&n);
        k=(floor(a[m]/log(n*1.0)+1));
       printf("Case %d: %.0lf\n",++l,k);
        }
    return 0;
}
