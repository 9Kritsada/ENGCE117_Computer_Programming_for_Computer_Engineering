#include <stdio.h>
#include <string.h>

void gettext(char **text) {
  *text = new char[20];
  gets(*text);
}

int main() {
  char *str;
  gettext(&str);
  printf("%s", str);
  return 0;
}