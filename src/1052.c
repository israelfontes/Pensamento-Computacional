#include <stdio.h>

int main(void){
	int mounthNumber;
	
	scanf("%i", &mounthNumber);
	
	if(mounthNumber < 1 || mounthNumber > 12)
		return 0;

	char *mounth;
	switch(mounthNumber){
		case 1:
			mounth = "January";
			break;
		case 2:
			mounth = "February";
			break;	
		case 3:
			mounth = "March";
			break;	
		case 4:
			mounth = "April";
			break;
		case 5:
			mounth = "May";
			break;
		case 6:
			mounth = "June";
			break;
		case 7:
			mounth = "July";
			break;
		case 8:
			mounth = "August";
			break;
		case 9:
			mounth = "September";
			break;
		case 10:
			mounth = "Octuber";
			break;
		case 11:
			mounth = "November";
			break;
		case 12:
			mounth = "December";
			break;
	}

	printf("%s\n", mounth);
	return 0;
}