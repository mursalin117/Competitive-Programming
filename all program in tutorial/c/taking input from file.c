#include <stdio.h>

int main()
{
    FILE *input_file;

    input_file = fopen("in.txt", "r");

    char input[10000];

    fgets(input, 10000, input_file); // fgets(destination, size_of_the_data, source_file);

    puts(input);

    return 0;
}
