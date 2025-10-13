//  program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / pow(10, digits);
    swappedNum = lastDigit * pow(10, digits) +
                 (num % (int)pow(10, digits)) / 10 * 10 +
                 firstDigit;
    printf("Number after swapping first and last digit = %d\n", swappedNum);
    return 0;
}
// Program to check if a number is perfect
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is not a Perfect Number.\n", n);

    return 0;
}
// Program to check if a number is a strong number.
#include <stdio.h.>
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int isStrong(int n) {
    int originalNum = n;
    long long sumOfFactorials = 0;
    int digit;
    if (n == 0) {
        return 0; 
    }
    while (n > 0) {
        digit = n % 10; // Get the last digit
        sumOfFactorials += factorial(digit); 
        n /= 10; 
    }

    if (sumOfFactorials == originalNum) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isStrong(num)) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
// program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    sum = 1.0;
    for (i = 1; i < n; i++) {
        double numerator = 2 * i + 1;
        double denominator = 2 * i + 2;
        sum += numerator / denominator;
    }
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);
    return 0;
}
//  program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        // Calculate the numerator and denominator for the i-th term
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;

        // Add the current term to the total sum
        sum += numerator / denominator;
    }

    printf("The sum of the series is: %.4f\n", sum);

    return 0;
}
// a program to print the following pattern:
#include <stdio.h>
int main() {
    int n, i, j, space;
    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// program to print the following pattern:
*****
*****
*****
*****
*****
#include <stdio.h>

int main() {
    int rows = 5; // Number of rows
    int stars_per_row = 5; // Number of stars in each row

    // Outer loop for rows
    for (int i = 0; i < rows; i++) {
        // Inner loop for stars in each row
        for (int j = 0; j < stars_per_row; j++) {
            printf("*"); // Print a star
        }
        printf("\n"); // Move to the next line after printing all stars in a row
    }

    return 0;
}
// #include <stdio.h>
int main() {
    int i, j;
    int limit = 5; 
    for (i = 1; i <= limit; i++) {
        // Inner loop for printing numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf(" "); 
    }
    printf("\n");

    return 0;
}
// #include <stdio.h>
int main() {
    int i, j;
    for(i = 5; i >= 1; i--) {
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }
    
    return 0;
}
// #include <stdio.h>
int main() {
    int i, j, n = 5;

    for(i = 0; i < n; i++) {
        // Print spaces
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}#include <stdio.h>
int main() {
    int i, j, n = 5;

    for(i = n; i >= 1; i--) {
        // Print spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        // Print numbers
        for(j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

// 
#include <stdio.h>
int main() {
    int i, j;
    int groups[] = {1, 3, 5}; // Number of stars in each group
    int g;

    for(g = 0; g < 3; g++) {
        for(i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        printf("\n"); // Empty line between groups
    }
    return 0;
}
// #include <stdio.h>

int main() {
    int i, j;
    int groups[] = {1, 3, 5}; // Number of stars in each group
    int g;

    for(g = 0; g < 3; g++) {
        for(i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        printf("\n"); // Empty line between groups
    }

    return 0;
}
// 
program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows in the to

    // Top half of the pyramid
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
 

