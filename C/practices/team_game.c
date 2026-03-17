#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int hangman(){
    int attempts = 0;
    if (attempts = 0){
        printf("---------\n");
        printf("|       |\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts = 1){
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts = 2){
        printf("---------\n");
        printf("|       |\n");
        printf("|       O\n");
        printf("|       |\n");
        printf("|\n");
        printf("|_________\n");
    }else if (attempts = 3){
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
    return 0;
}

int game_loop(){
    //char display_words = "";

    return 0;
}

int main(){
    char words[][10] = {"rhythm", "queue", "sixth", "jazz", "gym", "cryptic", "abyss", "xylophone", 
    "gypsy", "mnemonic", "buck", "avenue", "injury", "awkward"};
        int i = 1;
    while (i<= 10){
        printf("%d, ", i);
        i++;

   
        srand(time(NULL));

        printf("\n%d\n", rand() % 14);
    }

    char word = 

    hangman();

return 0;
}