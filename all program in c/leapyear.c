#include <stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if(a%400==0){
    printf("leap year\n");
  }
  else if(a%100!=0 && a%4==0){
    printf("leap year\n");
  }
  else{
    printf("not leap year\n");
  }
  return 0;
}
