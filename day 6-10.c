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



