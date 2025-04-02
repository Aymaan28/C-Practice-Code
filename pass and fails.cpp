#include <stdio.h>

int check(int in[], int ns){
	int var;
	int first = 0, second = 0, third = 0, pass = 0, fail = 0;
	for(int i; i< ns; i++){
		
		if (in[i]>= 60){
			var = 1;
		}
		else if (in[i]>= 50){
			var = 2;
		}
		else if (in[i]>= 40){
			var = 3;
		}
		else if (in[i]>= 35){
			var = 4;
		}
		else{
			var = 5;
		}
	
    	switch (var) {
    	case 1:
        	printf("First Class\n");
        	first = first + 1;
        	break;
		case 2:
        	printf("Second Class\n");
        	second = second + 1;
        	break;
    	case 3:
        	printf("Third Class\n");
        	third = third + 1;
        	break;
    	case 4:
        	printf("Pass\n");
        	pass = pass + 1;
        	break;
    	case 5:
    		printf("Fails\n");
    		fail = fail + 1;
        	break;
    	default:
        	printf("Invalid\n");
        	break;
    	}
	}
	printf("First Class: %d\n", first);
	printf("Second Class: %d\n", second);
	printf("Third Class: %d\n", third);
	printf("Pass: %d\n", pass);
	printf("Fail: %d\n", fail);
}


int main(){
	int in[] = {};
	int in1;
	int numberS = 0;
	printf("Enter Student Numbers then marks:\n");
	scanf("%d", &numberS);
	for(int i; i < numberS; i++){
		scanf("%d", &in1);
	}
	check(in, numberS);
  	return 0;
}
