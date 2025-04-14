//calculator

#include<stdio.h>
int main(){
    int n;
    printf("1. Add numbers\n");
    printf("2. Subtract numbers\n");
    printf("3. Multiply numbers\n");
    printf("4. Divide numbers\n");
    printf("5. finding remainder\n");
    printf("Enter choice : ");
    scanf("%d",&n);
    float a,b;
    int c,d;
    printf("Enter the first number 'a' : ");
    scanf("%f",&a);
    printf("Enter the second number 'b' : ");
    scanf("%f",&b);
   
    switch (n)
    {
    case 1:
    
        printf("a + b= %.2f",a+b);

    break;

    case 2:
   
    printf("a - b= %.2f",a-b);
    break;
    
    case 3:
    printf("a x b= %.2f",a*b);
    break;

    case 4:
        
        printf("a / b= %.2f",a/b);
    break;

    case 5:
        
        c=a;
        d=b;
        printf("a modulo b= %d",c%d);
    break;
    default:
        break;
    }
    return 0;

}