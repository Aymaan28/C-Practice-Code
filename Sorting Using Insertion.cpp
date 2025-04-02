#include <stdio.h>

int main() {
    int arr[] = {10, 24, 34, 20, 2, 5, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sarr[n];
    for (int i = 0; i < n; i++) {
        sarr[i] = arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sarr[j] > sarr[j + 1]) {
                int t = sarr[j];
                sarr[j] = sarr[j + 1];
                sarr[j + 1] = t;
            }
        }
    }
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sarr[i]);
    }

    return 0;
}

