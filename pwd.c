/* recreation of linux "pwd" to print out current dir path */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 2048

int main(int argc, char *argv[])
{
  
  char cwd[MAX];

  getcwd(cwd, sizeof(cwd));
  
  printf("%s\n", cwd);
}
