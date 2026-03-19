#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

char *words[] = {"rhythm", "queue", "sixth", "jazz", "gym", "cryptic", "abyss", "xylophone", "gypsy", "mnemonic", "buck", "avenue", "injury", "awkward"};

int num_words = 14;

char *word;

char guess;

char display_words;

int attempts = 0;

char list_of_guessed_letters[100];

int guessed_count = 0;

bool won = false;

void hangman(){
    if (attempts == 0){
        printf("---------\n");
        printf("|       |\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts == 1){
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts == 2){
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|       |\n");
        printf("|\n");
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
        printf("|       |\n");
        printf("|       O\n");
        printf("|      /|\\\n");
        printf("|      / \\\n");
        printf("|_________\n");
    }
}


void game_loop(){
    char guess;
    while (true){
        won = true;
        printf("\n");

        for (int i = 0; i < strlen(word); i++){
            bool found = false;
            if(word[i] == list_of_guessed_letters){
                found = true;
                break;
            if (found == true){
                printf("%c", word);
            }else{
                printf("_");
                won = false;
        }
            }
        }
    }

    if (display_words == word){
        printf("YAY, YOU WON THE GAME!!!");
        
    }else if(attempts == 4){
        printf("YOU LOST, the words was %d, LOSER\n", words);
        scanf("%d\n");
    }else if(attempts < 4){
        printf("guess a letter for the word please: \n");
    }


}

int main(){

    
    hangman();

return 0;
}