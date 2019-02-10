#include <stdio.h>

#include <stdlib.h>   // Enables use of rand()

#include <time.h>     // Enables use of time()

/* -------------------------------------------------------
 *  Class: CS 141, Spring 2016 Tuesday 9am lab
 *  System: Mac, Xcode
 *  Author: Mohamed Imran Mohamed Siddique
 *
 *To Do:
 * -------------------------------------------------------
 */

int main()

{
    printf("Name: Mohamed Imran Mohamed Siddique\n");
    printf("Class: CS 141\n");
    
    printf("\n");
    
    int randValue;
    char c;
    char sameCharacter;
    
    srand(unsigned (time(0)));
    
    printf(" 1. Choose any two-digit number in the table above (e.g. 73).\n ");
    
    printf("2. Subtract its two digits from itself (e.g. 73 - 7 - 3 = 63)\n ");
    
    printf("3. Find this new number (e.g. 63) and remember the letter next to it.\n ");
    
    printf("4. Now press the E key and I'll read your mind...\n");
    
    //Give a space between the instruction and the table
    
    printf("\n");
    
    
    if (randValue %2 == 0){
        // if even, it becomes Upper case
        sameCharacter = rand()%26 +'A';
    }

    for (int i=99; i>=0; i=i-1) {
        
        // every number divisible by nine will have a result of zero producing a signle letter through the table.
        if ( i%9 == 0) {
            c = sameCharacter ;
        }
        else {
            c = rand()%26 + 'A';
            if( rand()%2 == 1) {
                // convert to lower case
                c = c + ('a'-'A');
            }
        }
    
        printf("%3d: %c ", i, c);
        
    if( i%10 == 0) {
    
    printf("\n");
        }
    }
    
    
    printf("\n");
    
    printf("Press E to read your mind or S to exit:\n");
    
    while (getchar() == 'e'){
        printf("The character you have in your mind is: %c", sameCharacter );
        
        if (getchar() == 's'){
            return 0;
        }
    }
    return 0;
    
}