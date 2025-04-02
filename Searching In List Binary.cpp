#include <stdio.h>

int main() {
    int myNumbers[] = {25, 35, 15, 10, 9, 20};
    int size = 6;
    int searchNum, i;

    printf("Enter the number to search: ");
    scanf("%d", &searchNum);
    for (i = 0; i < size; i++) {
        if (myNumbers[i] == searchNum) {
            printf("%d is in the list\n", searchNum);
            return 0;
        }
    }
    printf("%d is not in the list\n", searchNum);
    return 0;
}
