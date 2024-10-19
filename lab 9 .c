#include <stdio.h>

int main () {
    int n = 0 ;
    int box[100] ;
    int number = 1 ;
    int j = 3 ;
    int i = 0 ;
   

    printf ( " Enter N : " ) ;
    scanf ( "%2d" , &n ) ;

    for ( i = 0 ; i < n; i++ ) {
        printf ( "Enter value[%2d] : ", i ) ;
        scanf ( "%d", &box[i] ) ;
    }
     printf ( "Index: " ) ;
    for ( i = 0 ; i < n ; i++ ) {
        printf ( " %2d " , i) ;
    }
    printf ( " \nArray: " ) ;

    for ( i = 0; i < n; i++) {
         number = 1 ;
        if ( box [ i ] <= 1 ) {
            number = 0 ;  
        } else if ( box [ i ] == 2 ) {
            number = 1 ;
        } else if ( box [ i ] % 2 == 0 ) {
            number = 0 ;
        } else {
            for ( j = 3 ; j * j <= box [ i ] ; j += 2 ) {
                if ( box [ i ] % j == 0 ) {
                    number = 0 ; // 
                    break ;
                }
            }
        }
        if ( number ) {
            printf ( " %2d " , box [ i ] ) ;
        } else {
            printf( " # ") ;
        } 
    }
    printf("\n");   

    return 0 ;

}
