#include <stdio.h>
int main(){
	int  customertype;
		printf("customer type (1 = Student, 2 = Regular) : ");
		scanf("%d",&customertype);
	int gb;
		printf("Req GB : ");
		scanf("%d",&gb);
	switch(customertype){
		case 1:
			if(gb<=50){
				printf("Eligible");
			}
		else{
			printf("Not Eligible");
		}
		break;
		case 2:
				if(gb<=100){
				printf("Eligible");
			}
		else{
			printf("Not Eligible");
		}

		break;
		default:
			printf("Invalid Package");
	}	
	
	
}

