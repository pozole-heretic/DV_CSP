#include <stdio.h>
#include <string.h>

int main(){
    char verb_1[20];
    char adjective[20];
    char verb_2[20];
    char noun[20];

    printf("Tell me a verb:\n");
    scanf("%s", &verb_1);
    printf("Tell me an adjective:\n");
    scanf("%s", &adjective);
    printf("Tell me another verb:\n");
    scanf("%s", &verb_2);
    printf("Tell me a noun:\n");
    scanf("%s", &noun);
    strcat(verb_2," ");
    strcat(verb_2, noun);
    printf("Today, I am going to %s. This is %s because I really want to %s.", verb_1, adjective, verb_2);
    return 0;
}