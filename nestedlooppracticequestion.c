#include "stdio.h"
#include "stdlib.h"
#include "time.h"


int main()
{

    int n = 0;

    time_t t;
    srand((unsigned)time(&t));

    int RandomNumber = rand() % 21; // generates the Random Number between 0 and 20

    printf("Welcome to the Number Guesser Game! enter a number between 0 and 20. \n\n " );

   

    for (int turns = 5; turns>0; turns = turns - 1) // While loops gives the user 5 turns to guess the number, lessing the turns by one each iteration
    {
        printf("You have %.1d turns left my bro  \n Enter the number you'd like to guess: " , turns );
        scanf( "%d", &n);
        if (turns ==1)
        {
            printf("Better luck next time mate :(  \n");
            printf("The Correct answer was %d ", RandomNumber);
        }

        if (n > 20 || n < 0)
        {
            printf(" I said the number is between 0 and 20 you blind mf 💀 \n\n");
        }
        else if (n > RandomNumber)
        {
            printf("You guessed %d which is too HIGH   \n\n", n );
        }
        else if ( n < RandomNumber)
        {
            printf("You guessed %d which is too LOW  \n\n", n );
        }
        else
        {
            
                printf("You guessed %d which is the right answer!  \n\n", n );
                break;
        }
            
                
                
            
    }

    


        //if ( int n; n> RandomNumber; )

    








    return 0;

}