#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    float x,h,i,j,k,l;
    scanf("%f",&x);
    a=(int)x/100;
    b=((int)x-a*100)/50;
    c=((int)x-(a*100+b*50))/20;
    d=((int)x-(a*100+b*50+c*20))/10;
    e=((int)x-(a*100+b*50+c*20+d*10))/5;
    f=((int)x-(a*100+b*50+c*20+d*10+e*5))/2;
    g=((int)x-(a*100+b*50+c*20+d*10+e*5+f*2))/1;
    h=(x-(int)x)/0.50;
    i=((x-(int)x)%0.50)/0.25;
    j=((x-(int)x)%0.25)/0.10;
    k=((x-(int)x)%0.10)/0.05;
    l=((x-(int)x)%0.05)/0.01;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",(int)h);
    printf("%d moeda(s) de R$ 0.25\n",(int)i);
    printf("%d moeda(s) de R$ 0.10\n",(int)j);
    printf("%d moeda(s) de R$ 0.05\n",(int)k);
    printf("%d moeda(s) de R$ 0.01\n",(int)l);

    return 0;
}

