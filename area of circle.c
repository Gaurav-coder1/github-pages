#include<stdio.h>
int main(){
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.1415 * radius * radius;
    printf("Area of the circle = %f", area);
    return 0;

}