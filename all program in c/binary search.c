#include <stdio.h>

int binary_search(int array[], int n, int num);

int main()
{
    int n,i,j,compare,num,m;
    //Here asking for the how many numbers to give input
    printf("Enter the total index number :");
    scanf("%d",&n);
    //the numbers are taking as input here
    int a[n],b[n];
    printf("Enter %d numbers :\n",n);
    scanf("%d",&a[0]);
    b[0] = a[0];
    for(i=1; i<n; i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
        for(j=0; j<i; j++)
        {
            if(b[j] > b[i])
            {
                m = b[j];
                b[j] = b[i];
                b[i] = m;
            }
        }
    }
    //here, the searching number is taking as input;
    printf("Enter the number to search :");
    scanf("%d",&num);
    //here calling for the binary_search function
    compare = binary_search(b,n,num);

    if(compare == -1) printf("Sorry, the number, %d is not in the array.\n",num);
    else
    {
        for(i=0; i<n; i++)
        {
            if(b[compare] == a[i])
            {
                printf("Yes, the number is in the array.\n");
                printf("The number %d is in the %d index.\n",a[i],i);
                break;
            }
        }
    }
    return 0;
}

int binary_search(int array[], int n, int num)
{
    int lowest_index,highest_index,middle_index;

    //initializing the highest, lowest and middle index
    lowest_index = 0;
    highest_index = n-1;

    while(lowest_index <= highest_index)
    {
        middle_index = (lowest_index + highest_index)/2;

        if(num == array[middle_index]) break;
        else if(num < array[middle_index]) highest_index = middle_index - 1;
        else lowest_index = middle_index + 1;
    }
    if(lowest_index > highest_index) return -1;
    else return middle_index;
}
