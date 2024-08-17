#include <stdio.h>

int main() {
  int n = -1;
  do {
    n++;
  } while (fgetc(stdin) != EOF);

  fprintf(stdout, "%d\n", n);
  return 0;
}
