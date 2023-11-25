#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int n1, n2;

    printf("Enter Number Of Elements For First Array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter Elements Of First Array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter Number Of Elements For Second Array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter Elements Of Second Array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int totalCount = n1 + n2;
    int farr[totalCount];

    // Merging arrays while sorting
    mergeArrays(arr1, n1, arr2, n2, farr);

    printf("Merged and Sorted Array: ");
    for (int i = 0; i < totalCount; i++) {
        printf("%d ", farr[i]);
    }

    return 0;
}
