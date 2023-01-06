#include <stdio.h>
#include <string.h>

char *gettext() {
  char *text = new char[20];
  gets(text);
  return text;
}

int main() {
  char *str;
  str = gettext();
  printf("%s", str);
  return 0;
}