#include <stdio.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL,"") ;

   int len_arr, sum = 0, t = 9 ;

   // Inpit array size
   printf( "User Input : " ) ;
   scanf( "%d", &len_arr ) ;

   printf( "----\n" ) ;

   // Display results
   printf( "Series = " ) ;
   for( int i = 0 ; i < len_arr ; i++ ) {
      sum =  sum + t ;
      if( i != 0 ) {
         printf( " + " ) ;
      }
      printf( "%d", t ) ;
      t = t * 10 + 9 ;
   } // end for i
   printf( "\nSum = %'d ", sum ) ;

   return 0 ;
} // end main()