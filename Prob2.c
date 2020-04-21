#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    printf("Give 10 numbers:\n");
    int vector[11];
    char input[20];
    for(int i=0; i < 10; ++i)
    {
        fgets(input, 10, stdin);
        vector[i] = atoi(input);
    }
    int sum =0;
    int min = 9999;
    for(int i=0; i< 10; ++i)
    {
        sum += vector[i];
        if(min > vector[i])
        {
            min = vector[i];
        }
    }
    double arithmetic_sum = 0.0;
    arithmetic_sum = sum/10.0;
    printf("The arithmetic sum is: %f\n", arithmetic_sum);
    printf("The minim of the numbers is: %d\n", min);
}
