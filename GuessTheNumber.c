#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //CREATING A RANDOM NUMBER 1 - 100
    srand(time(0));
    int number = rand() % 20 + 1;
    int userGuess;
    int noOfGuesses = 1;

    do
    {
        printf("Enter your guess:");
        scanf("%d", &userGuess);
        if(userGuess > number){
            printf("Your guess is too big try smaller number!");
        }
        else if(userGuess < number){
            printf("Your guess is too small try bigger number!");
        }
        else{
            printf("You guessed it in %d attempt(s)\n",noOfGuesses);
        }
        noOfGuesses++;

    } while (userGuess != number);

    return 0;
}