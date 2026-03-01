#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);

  char command[1024];
  printf("$ ");
  scanf("%s", &command);
  printf("%s: command not found\n", command);
  return 0;
}
