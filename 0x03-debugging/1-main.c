#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("printing numbers from 0 to 9:(\n");

        i = 0;

        while (i < 10)
        {
                putchar('0' + i);
		i++
        }

        printf("\nInfinite loop avoided! \\o/\n");

        return (0);
}
