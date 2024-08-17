#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  char c1 = ' ';
  char c2 = ' ';
  int bytes = -1;
  int lines = 0;
  int words = 0;
  while (c1 != EOF) {
    c1 = fgetc(stdin);
    // cout << c << endl;
    bytes++;
    if (c2 != ' ' && c2 != '\n' && (c1 == '\n' || c1 == ' ')) {
      words++;
      // cout << c1 << c2 << endl;
    }
    if (c1 == '\n') {
      lines++;
    }
    c2 = c1;
  }

  fprintf(stdout, "%d\t%d\t%d\n", words, lines, bytes);
  return 0;
}
