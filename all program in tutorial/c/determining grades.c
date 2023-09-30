#include <stdio.h>
#include <string.h>

int main()
{
    int marks;
    char grade[5];

    scanf("%d", &marks);

    if(marks >= 80) strcpy(grade,"A+");
    else if(marks >= 70) strcpy(grade,"A");
    else if(marks >= 60) strcpy(grade,"B");
    else if(marks >= 50) strcpy(grade,"C");
    else if(marks >= 40) strcpy(grade,"D");
    else strcpy(grade,"F");

    printf("Your grade is %s.\n", grade);

    return 0;
}
