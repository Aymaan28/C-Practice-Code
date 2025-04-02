#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int n;
int k = 0;
char finalstr[52] = {0};

int main() {
    printf("Enter a word: ");
    
    char str[1000];
    scanf("%s", str);
    
    n = strlen(str);
    
    for (int i = 0; i < n; i++) {
        bool same = false;

        for (int j = 0; j < k; j++) {
            if (str[i] == finalstr[j]) {
                same = true;
                break;
            }
        }

        if (!same) {
            finalstr[k] = str[i];
            k++;
        }
    }
    
    finalstr[k] = '\0';
    printf("Final string: %s\n", finalstr);

    return 0;
}
