#include <stdio.h>
#include <string.h>

int main() {
    char a[10] = "Apple";
    char b[] = "Ball";
    int l = strlen(a);
    int c = strcmp(a,b);
	strcpy(a,b);
	printf("%d\n", l);
	printf("%d\n", c);
    printf("%s\n", a);
    return 0;
}
