/* recreation of linux "cat" to print out file */

#include <stdio.h>
#include <stdlib.h>

#define MAX 48

int main(int argc, char *argv[])
{
  FILE *fp;
  char c;

  if (argc == 1 || argc > 2)
  {
    printf("Usage: cat [file]\n");
    exit(1);
  }
  else
  {
    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
      fp = fopen(argv[1], "r");      
    }
    else
    {
      while( (c = fgetc(fp)) != EOF)
      {
        printf("%c", c);
      }
    }
    fclose(fp);
    exit(0);
  } 
}
