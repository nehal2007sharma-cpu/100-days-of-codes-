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

  
