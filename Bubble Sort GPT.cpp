void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int myNumbers[] = {25, 35, 15, 10, 9, 20};
    int size = 6;
    int searchNum;
    bubbleSort(myNumbers, size);

    printf("Enter the number to search: ");
    scanf("%d", &searchNum);
    int result = binarySearch(myNumbers, size, searchNum);

    if (result != -1) {
        printf("%d is in the list at index %d (sorted order)\n", searchNum, result);
    } else {
        printf("%d is not in the list\n", searchNum);
    }

    return 0;
}

