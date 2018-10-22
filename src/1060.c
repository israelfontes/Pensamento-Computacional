#include <stdio.h>

int main(void){
	int numbers[6];
	char positives = 0;

	for(int i = 0; i < 6; i++){
		scanf("%i",numbers+i);
		if(numbers[i] > 0)
			positives += 1;
	}

	printf("%i valores positivos\n", positives);

	return 0;
}