#include <stdio.h> 

int main () {

int num,r,c ;
    printf ("Plese enter your number") ;
    scanf ("%d", & num) ;

    if ( num % 2 == 0) {
      for (int r = 0 ; r < num ; r++ ) {
        for (int c= 0 ; c < num ; c++) {
         if ( c == num - r - 1 ) {
          printf("1") ;
          
        }else {
          printf("0") ;
          

        }
       }
       printf("\n") ;
      }
    }else{
        for (int r = 0 ; r < num ; r++ ) {
            for (int c= 0 ; c < num ; c++) {
                if ( c == num-num+r) {
                    printf("1") ;
                }else{
                    printf("0") ;
                }
            }
            printf("\n");
        }
        
    }
  return 0 ;
}
