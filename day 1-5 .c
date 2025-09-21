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
 // Program to swap two numbers without using a third variable
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    a = a + b;  
    b = a - b;  
    a = a - b;  
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
// Program to find and display the sum of first n naturtal number
#include <stdio.h>
int main() {
 int n, sum =  0;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        sum += i;
    }
       printf("the sum of first %d natural number is= %d\n", n,
        sum);
        return 0;
    }
// Program to calculate si and ci 
#include <stdio.h>
#include <math.h>   
int main() {
    float principal, rate, time, si, ci;
   printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    si = (principal * rate * time) / 100;
    ci = principal * (pow((1 + rate / 100), time)) - principal;
    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);
    return 0;
}
// Program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int total_seconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;          
    minutes = (total_seconds % 3600) / 60;  
    seconds = total_seconds % 60;           
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}

 
