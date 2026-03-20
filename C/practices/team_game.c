#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


char *words[] = {"rhythm", "queue", "sixth", "jazz", "gym", "cryptic",
                "abyss", "xylophone", "gypsy", "mnemonic",
                "buck", "avenue", "injury", "awkward"}; //Danny: This variable is set as a list of words that the code can choose from for the game

int num_words = 14; //Mayzi: This variable is the number of words in the actual list

char *word; //Danny: This variable will be set to a randomized version of the words variable so the code chooses a single word

int attempts = 0; //Mayzi: This variable is so the code keeps track of the number of times the user has guess

char guessed[100];//Danny and Mayzi: This stores up to 100 characters that the user has guessed

int guessed_count = 0;


void hangman(){ if (attempts == 0){ //Danny and Mayzi: This is set as a function so the code can just easily call it when it needs it within the main function. This is so it doesn't have to do this whole paragraph level code again and again. The function itself checks how many attempts the user has used and prints a hangman depending on that
    printf("---------\n");
    printf("🪵       |\n");
    printf("🪵\n");
    printf("🪵\n");
    printf("🪵\n");
    printf("🪵\n");
    printf("🪵\n");
    printf("🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵\n");
   }else if (attempts == 1){
        printf("---------\n");
        printf("🪵        |\n");
        printf("🪵       🌚\n");
        printf("🪵\n");
        printf("🪵\n");
        printf("🪵\n");
        printf("🪵\n");
        printf("🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵\n");
       }else if (attempts == 2){
           printf("---------\n");
           printf("🪵       |\n");
           printf("🪵      🌚\n");
           printf("🪵       |\n");
           printf("🪵        \n");
           printf("🪵\n");
           printf("🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵\n");
       }else if (attempts == 3){
           printf("---------\n");
           printf("🪵       |\n");
           printf("🪵      🌚\n");
           printf("🪵       |\n");
           printf("🪵      / \\\n");
           printf("🪵\n");
           printf("🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵\n");
       }else{
           printf("---------\n");
           printf("🪵      |\n");
           printf("🪵     🌚\n");
           printf("🪵     /|\\\n");
           printf("🪵     / \\\n");
           printf("🪵\n");
           printf("🪵🪵🪵🪵🪵🪵🪵🪵🪵🪵\n");
       }
}


bool is_guessed(char c) { //Mayzi: This is a function so the main function can call it easy just like the hangman function. This function checks if the letter was already guessed/if the character is in the list
   for (int i = 0; i < guessed_count; i++) {
       if (guessed[i] == c) {
           return true;
       }
   }
   return false;
}


void game_loop() { //Danny: This is a easy function to call in the main loop because it repeats so often. This whole function actually runs most of the game itself. The other functions were more just for logic.
   while (1) {
       bool won = true;

       printf("\n");

       for (int i = 0; i < strlen(word); i++) { //Mayzi: This checks if the letter guessed was in the word that the code chose. If it is not, it prints a blank spot and if it is, it prints the letter the user guessed
           if (is_guessed(word[i])) {
               printf("%c", word[i]);
           } else {
               printf("_");
               won = false;
           }
       }

       printf("\n");
       hangman();

       if (won) { //Danny: This checks if the won variable was true since in the above code if you guessed wrong it was set to false. If it is true, you win!
           printf("YAYAYAAYAY, YOU WON!!!\n");
           break; //Danny this breaks the loop so the game will stop asking questions and end the game.
       }


       if (attempts == 4) { //Mayzi: This checks if the attempts that the user has guessed equals 4. If it does, it tells you you lost and what the word was.
           printf("WOMP WOMP YOU LOST LLLLL, THE WORD WAS %s\n", word);
           break; //Mayzi: This breaks the loop because you lost and the game ended
       }


       char guess; //Danny: This variable will be set to the letter the user guessed
       printf("Guess a letter please!!!!: "); //Mayzi: This asks the user to guess a letter
       scanf(" %c", &guess); //Danny and Mayzi: This will take in the guess of the user and set that guess to the value of the guess variable


       guessed[guessed_count++] = guess; //Danny: This saves the users letter guess into a list of guesses that will build up over time


       if (!strchr(word, guess)) { //Mayzi: It increases the attempts variable by one if the guessed letter is not in the word that the user needs to guess.
           attempts++;
       }
   }
}


int main() { //Danny and Mayzi: This is the main function that calls all the other functions to actually make the code run. Also in this function, it chooses a random word and sets the word variable to the word that was randomly chosen.
   srand(time(NULL));

   word = words[rand() % num_words];

   game_loop();

   return 0;
}
