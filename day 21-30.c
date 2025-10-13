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
        for(j = 1; j < i; j++) {
            printf(" ");
        }
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
    int groups[] = {1, 3, 5}; 
    int g;

    for(g = 0; g < 3; g++) {
        for(i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        printf("\n");
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
    int n = 5; 
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
// #include <stdio.h>

int main() {
    int i, j;
    int n = 4; 
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// #include <stdio.h>
int main() {
    int i, j, n, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++) { // Start from 2 because 1 is not prime
        isPrime = 1; // Assume i is prim
        for(j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
// program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i, j, isPrime;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 2; i <= n; i++) {   
        isPrime = 1;            
        for(j = 2; j <= i / 2; j++) {   
            if(i % j == 0) {
                isPrime = 0;    
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
// Program Read and print elements of a one-dimensional array.
#include <stdio.h>
int main() {
    int arr[100];  
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
 return 0;
}
// Program Find the sum of array elements.
#include <stdio.h>
int main() {
    int arr[100];   
    int n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}
// Program to find maximum and minimum element in an array.
#include <stdio.h>
int main() {
    int arr[100];
    int n, i;
    int max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}
// Program to Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int arr[100];
    int n, i;
    int evenCount = 0, oddCount = 0;
printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Total even numbers = %d\n", evenCount);
    printf("Total odd numbers  = %d\n", oddCount);
    return 0;
}
// Program to count positive, negative and zero elements in array.
#include <stdio.h>
int main() {
    int arr[100];
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positiveCount++;
        else if(arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }
    printf("Total positive numbers = %d\n", positiveCount);
    printf("Total negative numbers = %d\n", negativeCount);
    printf("Total zeros = %d\n", zeroCount);
    return 0;
}



