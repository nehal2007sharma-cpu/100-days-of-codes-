// Program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main() {
    int month;
    printf("enter month number(1-12): ");
    scanf("%d", &month);
switch(month) {
    case 1:
    printf("January, 31 Days\n");
    break;
    case 2:
    printf("February, 28 Days\n");
    break;
    case 3: 
    printf("March, 31 Days\n");
    break;
    case 4:
    printf("April, 30 Days\n");
    break;
    case 5:
    printf("May, 31 Days\n");
    break;
       case 6:
            printf("June, 30 days\n");
            break;
      case 7:
            printf("July, 31 days\n");
            break;
        case 8:
            printf("August, 31 days\n");
            break;
        case 9:
            printf("September, 30 days\n");
            break;
        case 10:
            printf("October, 31 days\n");
            break;
        case 11:
            printf("November, 30 days\n");
            break;
        case 12:
            printf("December, 31 days\n");
            break;
 default:
       printf("Invalid month number!\n");
}
  return 0;
}
// Program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float costPrice, sellingPrice;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercent = (profit / costPrice) * 100;
        printf("Profit %.0f%%\n", profitPercent);
    } else if (sellingPrice < costPrice) {
        float loss = costPrice - sellingPrice;
        float lossPercent = (loss / costPrice) * 100;
        printf("Loss %.0f%%\n", lossPercent);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
// Program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
#include <stdio.h>
int main() {
    int days, fine = 0;
    printf("Enter number of days late: ");
    scanf("%d", &days);

    if(days <= 0) {
        printf("No fine.\n");
    }
    else if(days <= 5) {
        fine = days * 2;
        printf("Fine: ₹%d\n", fine);
    }
    else if(days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Fine: ₹%d\n", fine);
    }
    else if(days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine: ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }
    return 0;
}
// program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
// program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
// program to print all factors of a given number
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
// a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int a, b;
    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF (GCD) = %d\n", a);
    return 0;
}
// Program to print Lcm and gcd
#include <stdio.h>
int main() {
    int a, b, tempA, tempB, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (tempA * tempB) / gcd;
    printf("LCM = %d\n", lcm);

    return 0;
}
// program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;     
        sum += digit;   
        n /= 10;    
    }
    printf("Sum of digits = %d\n", sum);

    return 0;
}
//a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, digit, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        digit = n % 10;   
        if (digit % 2 != 0) {  
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;         
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found);
            return 0;
            }

         
            









  
