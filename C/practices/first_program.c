# include <stdio.h>

int main(){
    char name[50];
    char animal[25];
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("What is your favorite animal?\n");
    scanf("%s", &animal);
    printf("%s's favorite animal is a(n) %s!\n", name, animal);
    return 0;
}