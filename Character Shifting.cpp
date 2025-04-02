#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "aymaan";
    int len = strlen(str);
	char last = str[len - 1];
    for (int i = len - 1; i > 0; i--) {
        str[i] = str[i - 1];
        }
    str[0] = last;
	printf("%s\n", str);
    return 0;
}
