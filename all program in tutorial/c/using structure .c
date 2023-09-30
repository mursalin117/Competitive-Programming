#include <stdio.h>

struct record
{
    char name[100];
    char phone[100];
    char email[100];
};

int main()
{
    struct record a;

    printf("Enter name :");
    scanf("%s", a.name);
    printf("Enter phone number :");
    scanf("%s", a.phone);
    printf("Enter email :");
    scanf("%s", a.email);

    printf("Name : %s, Phone : %s, Emai : %s\n", a.name, a.phone, a.email);

    return 0;
}
