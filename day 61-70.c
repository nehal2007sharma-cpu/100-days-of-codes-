// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. 
If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    for (int i = 0; i <= n - k; i++) {
        int printed = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                printed = 1;
                break;
            }
        }
        if (!printed) 
          printf("0");
        if (i != n - k) 
          printf(" ");
    }
    return 0;
}
//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.
Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
 #include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
      scanf("%d", &arr[i]);
    int maxSoFar = arr[0], current = arr[0];
    for (int i = 1; i < n; i++) {
        if (current + arr[i] < arr[i])
            current = arr[i];
        else
            current += arr[i];
        if (current > maxSoFar)
            maxSoFar = current;
    }
    printf("%d", maxSoFar);
    return 0;
}
//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. 
Print the kth smallest element as output. 
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d", arr[k - 1]);
    return 0;
}

