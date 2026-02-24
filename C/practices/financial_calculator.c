# include <stdio.h>

int main(){
    char income[1];
    char rentmortgage[2];
    char utilities[3];
    char groceries[4];
    char transportation[5];

    printf("What is your monthly income?\n$");
    scanf("%s", &income);
    printf("What is your monthly rent/mortgage?\n$");
    scanf("%s", &rentmortgage);
    printf("What is your monthly utilities?\n$");
    scanf("%s", &utilities);
    printf("%s", income);
    return 0;
}