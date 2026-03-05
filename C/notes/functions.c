#include <stdio.h>

int sqr(int num){
    return num * num;
}

int main(){
    int number = sqr(12);
    printf("%d\n", number);

    return 0;
}