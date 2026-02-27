# include <stdio.h>

int main(){
    int time;
    printf("What is the hour in military time?:\n");
    scanf("%d", &time);
    if (time < 12){
        printf("Good morning!");
    }else if (time >= 12 && time < 17 ){
        printf("Good afternoon!");
    }else{
        printf("Good evening!");
    }

    return 0;
}