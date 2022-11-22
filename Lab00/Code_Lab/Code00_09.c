#include <stdio.h>

int main() {   
   int number = 0 ;
   printf( "Input: " ) ;
   scanf( "%d", &number ) ;

   for( int i = 1 ; i <= number ; i++ ) {
      if( ( i == 1 || i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0 ) && ( i != 2 && i != 3 && i != 5 && i != 7 ) ) {
        continue ;
      } else {
         printf( "%d ", i ) ;
      }
   }
   return 0;
}