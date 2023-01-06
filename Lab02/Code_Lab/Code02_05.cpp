#include <stdio.h>
#include <string.h>

char *gettext() {
  char *text = new char[15];
  gets(text);
  return text;
}

int main() {
  int round;
  printf("Input Word Round : ");
  scanf("%d", &round);
  char *str;
  getchar();
  for( int i = 0 ; i < round  ; i++ ) {
    printf("%d'Word is : \t", i+1);
    str = gettext();
    printf("Result : \t%s\n\n", str);
  }  
  return 0;
}