#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determine if the number is negative or positive or zero
 *
 * Return: Always 0
 */
int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n < 0)
        {
                printf("%d is %s\n", n, "negative");
        }
        else if (n > 0)
        {
                printf("%d is %s\n", n, "positive");
        }
        else
        {
                printf("%d is %s\n", n, "zero");
        }
        return (0);
}
