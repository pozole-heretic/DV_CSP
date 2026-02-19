// This is a comment in C
#include <stdio.h> // Lets us use inputs and outputs

int main(){
    // variables examples
    int age = 9999;
    const float gpa = 3.98;
    char grade = 'A'; // single letter uses single quotes
    char name[] = "Eric";
    int number;
    char user[50];

    printf("Tell me your name\n");
    scanf("%s", &user);

    printf("What is your favorite number\n");
    scanf("%d", &number);
    printf("%s's favorite number is: %d\n", user, number);
    printf("You number is: %d\n", number);

    printf("It worked!\n");
    printf("%d", age);
    printf("Your GPA is: %f", gpa);
    printf("you have a %c in computer science", grade);
    return 0; // required last line in your main function
}