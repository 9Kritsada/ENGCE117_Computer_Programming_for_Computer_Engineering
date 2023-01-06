#include <stdio.h>
#include <string.h>

int main() {
  char text[] = "Hello";
  for( int i = 0 ; i < strlen(text) ; i++ ) 
    printf("%d's character : %c\n", i, text[i]);
  printf("%d's character : \\0", strlen(text) + 1);
  return 0;
}