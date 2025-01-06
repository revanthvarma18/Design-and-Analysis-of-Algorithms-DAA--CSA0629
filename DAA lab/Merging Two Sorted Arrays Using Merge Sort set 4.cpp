#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[mid + 1 + i];
    }
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int main() {
    int A[] = {3, 8, 1, 9};
    int B[] = {4, -2, 0, 7};
    int size_A = sizeof(A) / sizeof(A[0]);
    int size_B = sizeof(B) / sizeof(B[0]);
    
    int total_size = size_A + size_B;
    int merged[total_size];
    
    for (int i = 0; i < size_A; i++) {
        merged[i] = A[i];
    }
    for (int i = 0; i < size_B; i++) {
        merged[size_A + i] = B[i];
    }
    
    mergeSort(merged, 0, total_size - 1);
    
    printf("Merged and sorted array: ");
    for (int i = 0; i < total_size; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}

