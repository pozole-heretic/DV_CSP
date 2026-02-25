# include <stdio.h>

int main(){
    float income;
    float rent_mortgage;
    float utilities;
    float groceries;
    float transportation;
    float total;
    float savings;

    printf("What is your monthly income?\n$");
    scanf("%f", &income);

    printf("What is your monthly rent/mortgage?\n$");
    scanf("%f", &rent_mortgage);

    printf("What is your monthly utilities?\n$");
    scanf("%f", &utilities);

    printf("What is your monthly groceries?\n$");
    scanf("%f", &groceries);

    printf("What is your monthly transportation?\n$");
    scanf("%f", &transportation);

    savings = income/10;

    total = transportation + groceries + utilities + rent_mortgage + savings;

    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent_mortgage, (rent_mortgage/income) * 100);

    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, (utilities/income) * 100);

    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, (groceries/income) * 100);

    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, (transportation/income) * 100);

    printf("You should save $%.2f and that is 10%% of your income\n", savings);

    printf("You have %.2f of spending money each month!\n", income-total);

    return 0;
}