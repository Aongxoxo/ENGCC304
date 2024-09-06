#include <stdio.h>
#include <stdlib.h>
#include <time.h> // เอาสุ่มตัวเลข

int main ( ) {
    int play = 1 ;
    int score ;
    int WinningNumber ;
    int user ;
    int low = 1 ;  
    int hight = 100 ; // ปรับค่าถ้าอยากให้ทายเลขเพิ่มขึ้น

    srand ( time ( NULL ) ) ; // จารย์กำหนดถ้ามีนี้ให้ใส่

    while ( true ) {
        
        score = 100 ; // HP
        WinningNumber = rand () % 100 + 1 ; // สุ่มเลขใน 1-100
        low = 1 ;
        hight = 100 ;
        user ;
        score ;
       
        printf ( " Do you want to play game (1=play,-1=exit) : \n " ) ;
         scanf ( "%d", &play ) ;
          if ( play == -1 ) {
            printf ( "Thank you for playing! Goodbye.\n" ) ;
            break ;
        } else if ( play != 1 ) { //end if
            printf ( " Bye Bye . \n" ) ;
            break ;
        } // end else if
        
        while ( true ) {
            printf ( " Guess the winning number (%d-%d) : \n", low , hight ) ;
            scanf ( "%d" , &user ) ;

            if ( user < WinningNumber ) {     //ถ้าตัวยูส น้อยกว่าเลขระบบทาย จะโดนหัก เลือด
                score -= 10 ;
                if ( low < user - 1 ) {
                    low = user - 1 ;
                } // end if

                printf ( " Sorry , The Winning Number is HIGHER than  %d !!!. ( Score = %d ) \n" , user , score ) ;
            } else if ( user > WinningNumber )  {  // end if
                 score -= 10 ;
                 if ( hight > user + 1 ) {
                      hight =  user + 1 ;
                 }  // end if

                 printf ( " Sorry , The Winning Number is LOWER than  %d !!!. ( Score = %d ) \n " , user , score ) ;
            } else {
                printf ( " Correct!! The Winning Number is %d . \n " , WinningNumber ) ;
                printf ( " Score this game : %d \n " , score ) ;
                break ;  // หยุดได้เลขชนะแล้ว
            } // end else
            
            if ( score <= 0 ) {
                printf ( " Game over %d  " , score ) ;
                break ;
            } // end if
        
        
        } // end while

        printf ( "Do you want to play game (1=play,-1=exit) :\n" ) ;
        scanf ( "%d" , &play) ;
        printf ( "Thank you for playing! Goodbye.\n" ) ;
        
    } // end while

    return 0 ;

}//end main function
