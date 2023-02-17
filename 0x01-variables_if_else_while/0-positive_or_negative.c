#include <stdio.h>
#include <time.h>
/**
 * main - This program get the current time and generates a random integer
 * Return 0 (Success)
 */

int main(void)
{
  int n;
  time_t t;
  srand((unsigned) time(&t)); 

  n = (rand() % 200) - 100; 

  printf("%d ", n);

  if (n > 0)
  {
    printf("is positive\n");
  }
  else if (n == 0)
  {
    printf("is zero\n");
  }
  else
  {
    printf("is negative\n");
  }

  return 0;
}

