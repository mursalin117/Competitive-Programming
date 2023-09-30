#include <stdio.h>

struct record
{
    char name[100];
    char phone[100];
    char email[100];
};

int main()
{
    struct record a, b;

    printf("Enter name :");
    scanf("%s", a.name);
    printf("Enter phone number :");
    scanf("%s", a.phone);
    printf("Enter email :");
    scanf("%s", a.email);

    b = a;

    printf("Name : %s, Phone : %s, Emai : %s\n", b.name, b.phone, b.email);

    return 0;
}

