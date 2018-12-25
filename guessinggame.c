#include <stdio.h>
#include <stdlib.h>

int
main (int argc,
      char *argv[])
{
  int version = 1;

  printf("Alex Guessing Game Version: %d\n", version);

  int score = 100;

  int randnum = rand() % 100 + 1;
  int inout;

  while(1)
    {

      printf("Guess a number\n");
      scanf("%d",&inout);

      if (inout > randnum)
        {
          printf("Number too big\n");
          score = score - 5;
        }
      if (inout < randnum)
        {
          printf("Number too small\n");
          score = score - 5;
        }
    if (inout == randnum)
        {
          printf("Win\n");
          printf("Score: %d\n", score);
          break;
        }


    }


  printf ("Execution Ended\n");
  return EXIT_SUCCESS;
}
