// Program to Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Element %d not found in the array.\n", key);
    return 0;
}
// Program Reverse an array without taking extra space.
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
// Program to Merge two arrays.
#include <stdio.h>
int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
    printf("\nMerged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
// Program to Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    long long num;
    int digit, freq[10] = {0};  
    int maxFreq = 0, mostFreqDigit = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0)
        num = -num;
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }
    printf("The digit that occurs the most times is: %d\n", mostFreqDigit);
    printf("It occurs %d times.\n", maxFreq);
    return 0;
}
// Program to Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    long long num;
    int digit, freq[10] = {0};  
    int maxFreq = 0, mostFreqDigit = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0)
        num = -num;
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }
    printf("The digit that occurs the most times is: %d\n", mostFreqDigit);
    printf("It occurs %d times.\n", maxFreq);
    return 0;
}
// Program to Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0};  // Frequency array for digits 0–9
    int maxFreq = 0, mostFreqDigit = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0)
        num = -num;
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }
    printf("The digit that occurs the most times is: %d\n", mostFreqDigit);
    printf("It occurs %d times.\n", maxFreq);
  return 0;
}
// Program to Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int arr[100], n, i, key, j;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter %d elements in ascending order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    i = n - 1;
    while(i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];  
        i--;
    }
    arr[i + 1] = key;  
    n++;  
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
// Program to Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int (*CompareFunc)(const void *, const void *);
void insertSorted(void *array, int *num_elements, size_t element_size,
                  const void *new_element, CompareFunc compare) {
    int i = *num_elements - 1;
    int insert_pos = *num_elements;
    while (i >= 0 && compare(array + i * element_size, new_element) > 0) {

        memcpy(array + (i + 1) * element_size, array + i * element_size, element_size);
        i--;
    }
    insert_pos = i + 1;
    memcpy(array + insert_pos * element_size, new_element, element_size);
    (*num_elements)++;
}
int compareInts(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int compareDoubles(const void *a, const void *b) {
    double val_a = *(double *)a;
    double val_b = *(double *)b;
    if (val_a < val_b) return -1;
    if (val_a > val_b) return 1;
    return 0;
}
int main() {
    int intArray[10] = {10, 20, 40, 50};
    int numInts = 4;
    int newInt = 30;

    printf("Original Integer Array: ");
    for (int i = 0; i < numInts; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");
    insertSorted(intArray, &numInts, sizeof(int), &newInt, compareInts);
    printf("Array after inserting %d: ", newInt);
    for (int i = 0; i < numInts; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n\n");
    double doubleArray[10] = {1.1, 3.3, 5.5, 7.7};
    int numDoubles = 4;
    double newDouble = 4.4;
    printf("Original Double Array: ");
    for (int i = 0; i < numDoubles; i++) {
        printf("%.1f ", doubleArray[i]);
    }
    printf("\n");
    insertSorted(doubleArray, &numDoubles, sizeof(double), &newDouble, compareDoubles);
    printf("Array after inserting %.1f: ", newDouble);
    for (int i = 0; i < numDoubles; i++) {
        printf("%.1f ", doubleArray[i]);
    }
    printf("\n");
    return 0;
}
// Program to Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int arr[100], n, i, pos, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (1 to %d): ", n+1);
    scanf("%d", &pos);
    if(pos < 1 || pos > n+1) {
        printf("Invalid position!\n");
    } else {
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos-1] = element;
        n++; // Increase array size

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
// Program to Delete an element from an array.
#include <stdio.h>
int main() {
    int arr[100], n, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for(i = pos-1; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
// Program to Find the second largest element in an array.
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int largest, secondLargest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 0;
    }
    if(arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("The second largest element is: %d\n", secondLargest);
    return 0;
}
// Program to Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int arr[100], n, k, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n; // Handle cases when k > n
    for(i = 0; i < k; i++) {
        temp = arr[n-1];
        for(j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    printf("Array after rotating to the right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// Program to Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int arr[100], n, k, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);
    k = k % n; // Handle cases when k > n
    for(i = 0; i < k; i++) {
        temp = arr[n-1];
        for(j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    printf("Array after rotating to the right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// Program to Read and print a matrix.
#include <stdio.h>
int main() {
    int matrix[100][100], rows, cols;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// Program to Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int matrix[100][100], rows, cols;
    int i, j, sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add each element to sum
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
}
// Program to Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int matrix[100][100], rowSums[100];
    int rows, cols;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
 printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for(j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
// Program to Find the transpose of a matrix.
#include <stdio.h>
int main() {
    int matrix[100][100], transpose[100][100];
    int rows, cols;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix is:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//Program to Add two matrices.
#include <stdio.h>
int main() {
    int a[100][100], b[100][100], sum[100][100];
    int rows, cols;
    int i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Sum of matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
return 0;
}
// Program to Check if a Matrix is Symmetric
#include <stdio.h>
int main() {
    int matrix[100][100];
    int rows, cols, i, j, flag = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if(rows != cols) {
        printf("Matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            if(matrix[i][j] != matrix[j][i])
                flag = 0;
    if(flag)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");
    return 0;
}
// Program to Check if Diagonal Elements are Distinct
#include <stdio.h>
int main() {
    int matrix[100][100];
    int n, i, j, distinct = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    return 0;
}
// Program to Check if Diagonal Elements are Distinct
#include <stdio.h>
int main() {
    int matrix[100][100];
    int n, i, j, distinct = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if(distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    return 0;
}
// Program to Sum of Main Diagonal Elements
#include <stdio.h>
int main() {
    int matrix[100][100];
    int n, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < n; i++)
        sum += matrix[i][i];
    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}
// Program to Diagonal Traversal of a Matrix
#include <stdio.h>

int main() {
    int matrix[100][100];
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    printf("Diagonal traversal:\n");
    for(int d = 0; d < rows + cols - 1; d++) {
        for(i = 0; i <= d; i++) {
            j = d - i;
            if(i < rows && j < cols)
                printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
    return 0;
}
// Program to Multiply Two Matrices
#include <stdio.h>
int main() {
    int a[100][100], b[100][100], product[100][100];
    int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            product[i][j] = 0;
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++)
            for(k = 0; k < c1; k++)
                product[i][j] += a[i][k] * b[k][j];

    printf("Product of matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}













