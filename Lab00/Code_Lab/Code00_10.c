#include <stdio.h>

int main() {
   int max = -99999 ;
   int number = 0 ;
   for( int i = 0 ; i < 100 ; i++ ) {
      printf( "Input %d : ", i + 1 );
      if( max < number ) max = number ;   
      number++ ;
   }
   printf("Max Value is %d\n", max);

   return 0 ;
}