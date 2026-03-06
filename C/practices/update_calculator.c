# include <stdio.h>
#include <math.h>

float ask(char* monthly){
    float number;
    printf("What is your monthly %s?: $\n", monthly);
    scanf("%f", &number);
    return number;
}

float percent(float monthly, float income){
    return round(monthly/income*100);
}

int main(){
    float income = ask("income");
    float rent_mortgage = ask("rent/mortgage");
    float utilities = ask("utilities");
    float groceries = ask("groceries");
    float transportation = ask("transportation");
    float total;
    float savings;

    savings = income/10;

    total = transportation + groceries + utilities + rent_mortgage + savings;

    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent_mortgage, percent(rent_mortgage, income));

    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, percent(utilities, income));

    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, percent(groceries, income));

    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, percent(transportation, income));

    printf("You should save $%.2f and that is 10%% of your income\n", savings);

    printf("You have %.2f of spending money each month!\n", income-total);

    return 0;
}