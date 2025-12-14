#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random, guess;
    int nog=0;
    srand(time(NULL));

    printf("Welcome to the number guessing game\n");
    random=rand() % 100 + 1;// generates a random number between 1-100;

    do{
        printf("Enter your guess(1-100): ");
        scanf("%d",&guess);
        nog++;
        if (guess < random){
            printf("Enter a Larger Number.\n\n");
        }
        else if (guess > random){
            printf("Enter a smaller Number.\n\n");
        }
        else{
            printf("Congratulations!! You Guessed the number in %d atttempts.\n", nog);
        }
    }while(guess!=random);
    printf("\n");
    printf("Thanks For Playing.\n--\n--\n");
    printf("Developed By David_K_Singh.");
    return 0;
}