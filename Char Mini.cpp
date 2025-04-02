#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "aymaan";
    char str1[10] = "";
    int k = 0;

    for(int i = 0; i < strlen(str); i++) {
        int j;
        for(j = 0; j < k; j++) {
            if (str[i] == str1[j]) {
                break;
            }
        }
        if (j == k) {
            str1[k] = str[i];
            k++;
        }
    }
    printf("%s\n", str1);

    return 0;
}
