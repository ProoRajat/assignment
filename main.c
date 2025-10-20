#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main() {
    int objective;
    printf("\n===== MENU =====\n");
    printf("1. (Objective 1) Check Number Properties\n");
    printf("2. (Objective 2) Array Operations\n");
    printf("Select an objective to test (1 or 2): ");
    scanf("%d", &objective);

    if (objective == 1) {
        int choice, num;
        do {
            printf("\n===== MENU =====\n");
            printf("1. Check Armstrong Number\n");
            printf("2. Check Adams Number\n");
            printf("3. Check Prime Palindrome Number\n");
            printf("4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
 
 
            if (choice == 4) {
                printf("Exiting program. Goodbye!\n");
                break;
            }

            printf("Enter a number: ");
            scanf("%d", &num);
            switch (choice) {
                case 1:
                    if (isArmstrong(num))
                        printf("%d is an Armstrong number.\n", num);
                    else
                        printf("%d is NOT an Armstrong number.\n", num);
                    break;
                case 2:
                    if (isAdams(num))
                        printf("%d is an Adams number.\n", num);
                    else
                        printf("%d is NOT an Adams number.\n", num);
                    break;
                case 3:
                    if (isPrimePalindrome(num))
                        printf("%d is a Prime Palindrome number.\n", num);
                    else
                        printf("%d is NOT a Prime Palindrome number.\n", num);
                    break;
                default:
                    printf("Invalid choice! Please select between 1-4.\n");
            }
        } while (choice != 4);
    } else if (objective == 2) {
        // Array Operations Menu
        int choice;

        int size;
        printf("Enter the size of the array: ");
        scanf("%d", &size);

        int arr[size];
        printf("Enter %d elements:\n", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        do {
            printf("\n===== MENU =====\n");
            printf("1. Find Maximum Element\n");
            printf("2. Find Minimum Element\n");
            printf("3. Calculate Average\n");
            printf("4. Display Array\n");
            printf("5. Reverse Array\n");
            printf("6. Sort Array\n");
            printf("7. Linear Search\n");
            printf("8. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 8) {
                printf("Exiting program. Goodbye!\n");
                break;
            }

            switch (choice) {
                case 1:
                    printf("Index of maximum element: %d\n", findMaxIndex(arr, size));
                    break;
                case 2:
                    printf("Index of minimum element: %d\n", findMinIndex(arr, size));
                    break;
                case 3:
                    printf("Average element: %.2f\n", findAverage(arr, size));
                    break;
                case 4:
                    printf("Array elements: ");
                    displayArray(arr, size);
                    break;
                case 5:
                    reverseArray(arr, size);
                    printf("Array elements after reversal: ");
                    displayArray(arr, size);
                    break;
                case 6:
                    sortArray(arr, size);
                    printf("Array elements after sorting: ");
                    displayArray(arr, size);
                    break;
                case 7: {
                    int value;
                    printf("Enter a value to search: ");
                    scanf("%d", &value);
                    int index = linearSearch(arr, size, value);
                    if (index != -1)
                        printf("Element %d found at index: %d\n", value, index);
                    else
                        printf("Element %d not found in the array.\n", value);
                    break;
                }
                default:
                    printf("Invalid choice! Please select between 1-8.\n");
            }
        } while (choice != 8);
    } else {
        printf("Invalid objective! Please select 1 or 2.\n");
    }
    
    return 0;
}