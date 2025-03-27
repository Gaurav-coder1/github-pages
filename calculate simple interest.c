#include<stdio.h>
int main(){
    float principle, rate, time, simple_interest;
    printf("Enter the principle amount: ");
    scanf("%f", &principle);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    simple_interest = (principle * rate * time) / 100;
    printf("Simple Interest = %f", simple_interest);
    return 0;
}       // Output: Enter the principle amount: 1000
        // Enter the rate of interest: 5
        // Enter the time period: 2
        // Simple Interest = 100.000000