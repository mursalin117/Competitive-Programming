#include <stdio.h>
#include <string.h>

int main()
{
    int a=0,status;
    char ch1[5]="Hajj",ch2[6]="Umrah",ch3[6];
    gets(ch3);
    while(ch3[0]!='*')
    {
          a++;
          status=strcmp(ch3,ch1);
          if(status==0)
          {
              printf("Case %d: Hajj-e-Akbar\n",a);
          }
          status=strcmp(ch3,ch2);
          if(status==0)
          {
              printf("Case %d: Hajj-e-Asghar\n",a);
          }
          gets(ch3);
    }
    return 0;
}
