#include <stdio.h>

int main()
{
    double n1,n2,n3,n4,avg,avg_final,score;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    avg=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %0.1lf\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<7.0)
    {
        printf("Aluno em exame.\nNota do exame: ");
        scanf("%lf",&score);
        avg_final=(avg+score)/2;
        if(avg_final>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1lf\n",avg_final);
    }
    return 0;
}
