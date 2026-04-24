#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


char *words[] = {"rhythm", "queue", "sixth", "jazz", "gym", "cryptic",
                "abyss", "xylophone", "gypsy", "mnemonic",
                "buck", "avenue", "injury", "awkward"};


int num_words = 14;


char *word;
int attempts = 0;


char guessed[100];
int guessed_count = 0;


void hangman(){ if (attempts == 0){
    printf("---------\n");
    printf("|       |\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("|_________\n");
   }else if (attempts == 1){
        printf("---------\n");
        printf("|        |\n");
        printf("|        O\n");
        printf("|\n");
        printf("|\n");
        printf("|_________\n");
       }else if (attempts == 2){
           printf("---------\n");
           printf("|       |\n");
           printf("|       O\n");
           printf("|       |\n");
           printf("|        \n");
           printf("|_________\n");
       }else if (attempts == 3){
           printf("---------\n");
           printf("|       |\n");
           printf("|       O\n");
           printf("|       |\n");
           printf("|      / \\\n");
           printf("|_________\n");
       }else{
           printf("---------\n");
           printf("|        |\n");
           printf("|        O\n");
           printf("|       /|\\\n");
           printf("|       / \\\n");
           printf("|_________\n");
       }
}


bool is_guessed(char c) {
   for (int i = 0; i < guessed_count; i++) {
       if (guessed[i] == c) {
           return true;
       }
   }
   return false;
}


void game_loop() {
   while (1) {
       bool won = true;


       printf("\n");


       for (int i = 0; i < strlen(word); i++) {
           if (is_guessed(word[i])) {
               printf("%c", word[i]);
           } else {
               printf("_");
               won = false;
           }
       }


       printf("\n");
       hangman();


       if (won) {
           printf("YAYAYAAYAY, YOU WON!!!\n");
           break;
       }


       if (attempts == 4) {
           printf("WOMP WOMP YOU LOST LLLLL %s\n", word);
           break;
       }


       char guess;
       printf("Guess a letter please!!!!: ");
       scanf(" %c", &guess);


       guessed[guessed_count++] = guess;


       if (!strchr(word, guess)) {
           attempts++;
       }
   }
}


int main() {
   srand(time(NULL));


   word = words[rand() % num_words];


   game_loop();


   return 0;
}
