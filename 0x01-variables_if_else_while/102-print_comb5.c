#include <unistd.h>
#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
        int i, j, k, l;

        i = 0;
        while (i < 10)
        {
                j = 0;
                while (j < 10)
                {
                        k = 0;
                        while (k < 10)
                        {
                                l = 0;
                                while (l < 10)
                                {
                                        int num1 = i * 10 + j;
                                        int num2 = k * 10 + l;
                                        if (num1 < num2)
                                        {
                                                putchar(i + '0');
                                                putchar(j + '0');
                                                putchar(' ');
                                                putchar(k + '0');
                                                putchar(l + '0');
                                                if (i < 9 || j < 8 || k < 9 || l < 9)
                                                {
                                                        putchar(',');
                                                        putchar(' ');
                                                }
                                        }
                                        l++;
                                }
                                k++;
                        }
                        j++;
                }
                i++;
        }
        putchar('\n');
        return (0);
}

