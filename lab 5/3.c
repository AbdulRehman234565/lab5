#include <stdio.h>
int main(){
	int attendence,latearrivals;
	printf("Enter Attendence: ");
	scanf("%d",&attendence);
		printf("Enter late arrivals: ");
	scanf("%d",&latearrivals);
	if(attendence<75){
		printf("\nWARNING!");
	}
		else if(latearrivals>5){
			printf("\nperfomence review req");
		}
		else{
			printf("attendence  satisfactory");
		}
	
		
		
	
}
