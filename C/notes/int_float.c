// DV integers and floats
#include <stdio.h>
#include <math.h>

int main(){
    int people = 22;
    int apples = 25;
    int room = 200;

    printf("People: %d\nApples: %d\nRoom: %d\n", people, apples, room);
    printf("Each person gets %f apples\n", (float) apples/people);

    float liters = 2.7;
    float fahrenheit = 72.82;
    const float pi = 3.1415;
    float celsius = (fahrenheit-32) * 5/9;

    printf("Liters: %.2f\nFahrenheit: %.1f\nPi: %.4f\n", liters, fahrenheit, pi);
    printf("Celsius is: %.2f\n", round(celsius));
    printf("%f\n", (int) pow(2,3));
    sqrt(10);

    return 0;
}