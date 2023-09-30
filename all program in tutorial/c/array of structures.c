#include <stdio.h>

struct record
{
    char name[100];
    char phone[100];
    char email[100];
};

int main()
{
    int n, i;

    printf("How many data you want to record? ");
    scanf("%d", &n);

    struct record a[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter name :");
        scanf("%s", a[i].name);
        printf("Enter phone :");
        scanf("%s", a[i].phone);
        printf("Enter email :");
        scanf("%s", a[i].email);
    }

    for(i = 0; i < n; i++)
    {
        printf("Name : %s, Phone : %s, Email : %s\n", a[i].name, a[i].phone, a[i].email);
    }

    return 0;
}
