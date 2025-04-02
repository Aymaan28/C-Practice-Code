#include <stdio.h>
#include <string.h>

int main() {
    FILE *pF = fopen("file_append.txt", "a+");
    char data[100];
    char datas[200] = "";
    char newline[100];
    if (pF != NULL) {
        while (fgets(data, sizeof(data), pF)) {
            strcat(datas, data);
        }
        rewind(pF);
    }
    else {
        fprintf(stderr, "Unable to open file!\n");
    }
	printf("%s\n", datas);
	fprintf(pF, "\n");
	
	printf("Enter the new line to append: ");
	
	fgets(newline, sizeof(newline), stdin);
	fprintf(pF,"%s", newline);
	
    fclose(pF);
    return 0;
}
