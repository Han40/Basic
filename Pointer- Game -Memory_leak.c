///<<Simple Betting game>>
// "Jack Queen King" - computer shuffles these cards
//player has to guess the position of queen.

//if he wins, he takes 3*bet
//if he looses, he looses the bet amount.
//player has $100 initially


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;

void Play(int bet){

//If use malloc, then memory is in Heap
//Heap is not fix in size
//Memory is nasty can happen in Heap

//Therefore, it's need to free up

//In Java, and C#, using Heap is automatically free up


  // Stack
    char C[3] = {'J', 'Q', 'K'};
    printf("Shuffling ...\n ");
    srand(time(NULL)); // Seeding random number generator
    int i;
    for(i = 0; i<5; i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }

    int playersGuess;
    printf("What's the position of queen - 1, 2 or 3 ");
    scanf("%d", &playersGuess);

    if(C[playersGuess - 1] == 'Q'){
        cash += 3*bet;
        printf("You win ! Result = \"%c %c %c\" Total Cash= %d\n" ,C[0],C[1], C[2],cash);
    }
    else{
        cash -= bet;
        printf("You Loose ! Result = \"%c %c %c\" Total Cash= %d\n" ,C[0],C[1], C[2],cash);
    }
}

int main()
{
    int bet;
    printf("Total cash = $%d\n");
    while(cash > 0 ){
        printf("What's your bet? $");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash) break;
        Play(bet);
        printf("*********************\n");

    }
}
