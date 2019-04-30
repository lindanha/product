#include <stdio.h>
#include <stdlib.h>

#include "constant.h"

int main (int argc, char **argv )
{
  int i, j;

  i = strtoul( argv[1], 0, 0);

  printf ( "i = %d\n", i);

  j = i + K_CONSTANT;

  printf ( "j = %d\n", j);

  return 0;
}
