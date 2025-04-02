#include <stdio.h>
#include <string.h>

int main() {
	int count_words = 0;
	int count_lines = 0;
	int count_characters = 0;
    FILE *pF = fopen("file1.txt", "r");
    char data[100];
    char datas[200] = "";
    if (pF != NULL) {
        while (fgets(data, sizeof(data), pF)) {
            strcat(datas, data);
        }
    }
    else {
        fprintf(stderr, "Unable to open file!\n");
    }
	printf("%s\n", datas);
    for(int i = 0; i<sizeof(datas); i++){
    	if(datas[i] == *" "){
    		count_words++;
		}
		if(datas[i] == *"\n"){
    		count_lines++;
		}
		if(datas[i] != NULL){
			count_characters++;
		}
	}
	printf("%d\n", count_words+count_lines+1);
	printf("%d\n", count_lines+1);
	printf("%d\n", count_characters-count_lines);
    fclose(pF);
    return 0;
}
