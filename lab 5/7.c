#include <stdio.h>
#include <math.h>
int main(){
	int num1,num2;
	printf("Enter Number 1 : ");
	scanf("%d",&num1);
	printf("Enter Number 2 : ");
	scanf("%d",&num2);
	int choice;
	printf("Enter  operation choice (1 = Power, 2 = Square Root, 3 = Absolute Value, 4 = Round)  : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			choice = pow(num1,num2);
			printf("%d",choice);
			break;
		case 2:
			choice = sqrt(num1);
			printf("%d",choice);
			break;
		case 3:
			choice = abs(num1);
			printf("%d",choice);
			break;	
		case 4:
			choice = round(num1);
			printf("%d",choice);
			break;	
			default:
				printf("Invalid");	
	}
	
		
}
