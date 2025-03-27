#include<stdio.h>
int main(){
    float percentage, marks_obtained, total_marks;
    printf("Enter the total marks: ");
    scanf("%f", &total_marks);
    printf("Enter the marks obtained: ");
    scanf("%f", &marks_obtained);
    percentage = (marks_obtained / total_marks) * 100;
    if (percentage >= 100){
        printf(" Enter the marks obtained in incorrect");
    }
    else{
        printf("Percentage = %f", percentage);
    }
     if(percentage >= 90){
        printf(" (A+)");
    }
    else if(percentage >= 80){
        printf(" (A)");
    }
    else if(percentage >= 70){
        printf(" (B+)");
    }
    else if(percentage >= 60){
        printf(" (B)");
    }
    else if(percentage >= 50){
        printf(" (C)");
    }
    else if(percentage >= 40){
        printf(" (D)");
    }
    else{
        printf(" (F)");
    }
    return 0;
}       // Output: Enter the total marks: 500
        // Enter the marks obtained: 450
        // Percentage = 90.000000   (90%)           
        