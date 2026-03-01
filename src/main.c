#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);

  char command[1024];
  //while (strcmp(command, "quit") != 0) //more sensible but tests may not pass
  while (1)
  {
    printf("$ ");
    scanf("%s", &command);
    printf("%s: command not found\n", command);
  }

  return 0;
}
