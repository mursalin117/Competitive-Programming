#include <stdio.h>

int main()
{
    FILE *output_file;

    output_file = fopen("out.txt", "w");

    char input[100];

    gets(input);

    fputs(input, output_file); // fputs(what, where) or fputs(what, destination_file)

    return 0;
}
