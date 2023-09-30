#include<stdio.h>
#include<math.h>
int mark[1000000];
int prime[1000000];
int nprime=0;
void seive(int n){
    int i,j;
    int s=sqrt(n)+1;
    mark[1]=1;
    for(i=2;i<=s;i++){

        if(mark[i]==0){
            for(j=i+1;j<=n;j++){
                if(j%i==0) mark[j]=1;
            }
        }
    }
    j=0;
    for(i=2;i<=n;i++){
        if(mark[i]==0){
            prime[j]=i;
            j++;
        }
    }
    nprime=j;
    return;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    seive(n);
    for(i=0;i<nprime;i++){
        printf("%d  ",prime[i]);
    }

    return 0;
}
