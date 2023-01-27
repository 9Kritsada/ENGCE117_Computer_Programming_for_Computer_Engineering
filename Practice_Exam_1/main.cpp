// นายกฤษฎา วิริยา 65543206041-7 Section 1
// Youtube : https://youtu.be/uVGyDQ2Exyw
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next ;
} NODE ;

void ShowAll( NODE *start ) ;
void AddNode( NODE **start, int value ) ;

void Update( NODE **start, int search, int new_value ) ;
void ShowBack( NODE *start ) ;
void Swap( NODE **start, int value1, int value2 ) ;

int main() {
  NODE *start = NULL ;
  AddNode( &start, 10 );
  AddNode( &start, 20 );
  AddNode( &start, 30 );
  AddNode( &start, 40 ); 
  ShowAll( start ) ;

  // UpdateNode
  /*
  Update( &start, 10, 99 ) ;
  ShowAll( start ) ;
  Update( &start, 10, 98 ) ;
  ShowAll( start ) ;
  */

  // ShowBack
  /*
  ShowBack( start );
  */

  // SwapNode
  /*
  Swap(&start, 20, 30) ;
  ShowAll( start ) ; //10, 30, 20, 40
  Swap(&start, 40, 10) ;
  ShowAll( start ) ; //40, 30, 20, 10
  */
  
  return 0;
} // End main

void ShowAll( NODE *start ) {
  while( start != NULL ) {
    printf( "%d ", start->value ) ;
    start = start->next ;
  } // End while
  printf( "\n" );
} // End ShowAll

void AddNode( NODE **start, int value ) {
  NODE *newnode = NULL, *lastNode = NULL ;
  newnode = ( NODE * )malloc( sizeof ( NODE ) ) ;
  newnode->value = value ;
  newnode->next = NULL ;
  if( *start == NULL ) *start = newnode ;
  else {
    lastNode = *start ;
    while( lastNode->next != NULL ) lastNode = lastNode->next ;
    lastNode->next = newnode ;
  }
} // End AddNode

void Update( NODE **start, int search, int new_value ) {
  NODE *newNode = *start ; 
  while( newNode != NULL && newNode->value != search ) 
    newNode = newNode->next ;
  if(newNode != NULL) newNode->value = new_value ;
} // End Update

void ShowBack( NODE *start ) {
  NODE *temp = NULL, *prev = NULL;
  NODE *current = start;
  while( current != NULL ) {
    temp = current->next;
    current->next = prev;
    prev = current;
    current = temp;
  }
  start = prev;
  ShowAll( start ) ;
} // End ShowBack

void SwapNode( NODE **first, NODE **second ) {
  NODE *temp = *first ;
  *first = *second ; 
  *second = temp ;
} // End SwapNode

void Swap( NODE **start, int value1, int value2 ) {
  if ( value1 == value2 ) return ;

  NODE **first = start ;
  while( *first != NULL && ( *first )->value != value1 ) first = &( *first )->next ;

  NODE **second = start ;
  while( *second != NULL && ( *second )->value != value2 ) second = &( *second )->next ;

  if( first && second ) {
    SwapNode( first, second ) ;
    SwapNode( &( *first )->next, &( *second )->next ) ; 
  }
} // End Swap