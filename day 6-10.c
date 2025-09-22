//Progran to calculate whether a number is odd or even!
#include <stdio.h>
int main () {
    int n;
printf("Enter the number: ");
scanf("%d", &n);
if 
(n % 2 == 0 )
printf ("it is even");
else
    printf("it is odd");
 return 0;
}
// Program to input an integer and to check whether its positive , negative , zero.
#include <stdio.h>
int main () {
    int n;
printf("Enter the number: ");
scanf("%d", &n);
if 
(n > 0 )
printf ("it is positive");
else if (n < 0 )
  printf("it is negative ")  ;
else 
printf("number is zero");
 return 0;
}
// Program to check whether year is leap or not.
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("%d is a Leap Year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is Not a Leap Year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a Leap Year.\n", year);
    }
    else {
        printf("%d is Not a Leap Year.\n", year);
    }
    return 0;
}
// Program to check whether a letter is vowel or consonant.
#include <stdio.h>
int main() {
    char alphabet;
    printf("Enter the alphabet: ");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        printf("It is a vowel\n");
    } else {
        printf("It is a consonant\n");
    }
    return 0;
}
//Program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase Alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase Alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    }
    else {
        printf("'%c' is a Special Character.\n", ch);
    }
    return 0;
}
// Program to input three numbers and find greatest among them
#include <stdio.h>
int main () {
    int a, b, c;
    printf("enter a number a: ");
    scanf("%d" , &a);
    printf("enter a number b: ");
    scanf("%d" ,&b);
    printf("enter a number c: ");
    scanf("%d" ,&c);
    if (a >b && a>c)
    printf("a is greatest");
    else if (b>a && b>c)
    printf("b is greatest");
    else 
   printf("c is greatest");
   return 0;    
}
//Program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart; printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
// Pogram that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
    #include <stdio.h>
int main() {
    int percentage;
    printf("Enter percentage (0-100): ");
    scanf("%d", &percentage);
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
    }
    else if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 80) {
        printf("Grade: B\n");
    }
    else if (percentage >= 70) {
        printf("Grade: C\n");
    }
    else if (percentage >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }
    return 0;
}
//Program to classify whether triangle is isoceles, equilateral, scalene
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }
    return 0;
}
// program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}









