#include <stdio.h>
int main(){
	int age,emergencystatus;
	printf("Enter Age : ");
	scanf("%d",&age);	
		printf("Enter emergency status (1 = Emergency, 0 = Normal) : ");
	scanf("%d",&emergencystatus);
	switch(emergencystatus){
		case 1:
			printf("High Priority!");
			break;
		case 0:
			if(age>=60){
				printf("High Priority");
			}
			else if(age>=18 && age<=59){
				printf("Normal Priority");
			}
			else if(age<=18 && age>=0){
				printf("child Priority");
			}
			break;
			default:
			printf("Invalid ");	
	}
	
}

