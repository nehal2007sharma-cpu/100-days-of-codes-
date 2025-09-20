// ProgramTo find sum of two numbers.
#include <stdio.h>
int main() {
    int a,b, sum;
    printf("enter number a: "); 
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d", &b);
   sum = a + b ;
   printf("Sum is = %d\n",sum);
    return 0;
}
// PROGRAM To input two numbers and find their product,sum, difference and quotient
#include<stdio.h>
int main() {
  int a, b, sum, difference, product, quotient;
printf("enter number a: ");
scanf("%d" ,&a);
printf("enter number b: ");
scanf("%d",&b);
sum = a+b;
printf("Sum =%d\n",sum);
product = a*b;
printf("Product =%d\n",product);
difference = a-b;
printf("Difference =%d\n",difference);
quotient= a/b;
printf("Quotient =%d\n",quotient);
return 0;
}
//Program To calculate area and perimeter of reatangle
#include<stdio.h>
int main () {
    int length, breadth , area , perimeter;
    printf("enter length: ");
    scanf("%d" , &length);
    printf("enter breadth: ");
    scanf("%d", &breadth);
    area = length * breadth ;
    printf("Area =%d\n" , area);
    perimeter = 2*(length+breadth);
    printf("Perimeter = %d\n", perimeter);
return 0;
}
// Program to find circumference and radius of circle 
#include <stdio.h>
int main (){
    float radius,circumference, area;
    printf("enter radius of circle: ");
    scanf("%f" , &radius);
    circumference = 2 * 3.14 * radius;
    printf("Circumference = %.2f\n" , circumference);
    area = 3.14 * radius * radius;
    printf("Area = %.2f\n" , area);
    return 0;
    }
//Program to convert temperature from Celsius to Fahrenheit

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
 // Program to 
 
