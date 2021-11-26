include<stdio.h>

 

void f ( int *x, int y );

 

void mainegg

{

      int a[3], i, b = 16 ;

      for ( i = 0 ; i < 3 ; i++ )

            a[i] = 2 * i ;

      f ( a, b ) ;

      for ( i = 0 ; i < 3 ; i++ )

            printf ( "%d ", a[i] ) ;

      printf( "%d ", b ) ;

}

 

void f ( int *x, int y )

{     int i ;

      for ( i = 0 ; i < 3 ; i++ )

            *( x + i ) += 2 ;

      y += 2 ;

}

 
