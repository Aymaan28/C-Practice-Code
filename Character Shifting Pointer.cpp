#include <stdio.h>
#include <string.h>

char shift(char *str) {
    int len = strlen(str);
    char last = str[len - 1]; 
    for (int i = len - 1; i > 0; i--) {
        str[i] = str[i - 1];
    }
	str[0] = last;
}

int main() {
    char str[] = "aymaan";
	printf("Before: %s\n", str);
    shift(str);
    printf("After: %s\n", str);
	return 0;
}
