#include<stdio.h>
#include<stdlib.h>

// the main function is used to get the appropriate value square root 

int main(){
	
	int targetNum;
	float appro_pre = 1.0;
	float appro_aft = 1.0;
	while ((scanf("%d", &targetNum)) == 1 ){
		
		if(targetNum < 0)
			printf("please enter the number that greater than 0");
		else{
		
			do {
				
				appro_pre = appro_aft;     // assgin the appropriate new value to last one 
				appro_aft = (appro_pre + targetNum/appro_pre)/2;   // update the new value
				
			}while(appro_aft != appro_pre);
			
			printf("the number of appro square root is: %f\n", appro_aft);
		}
	}
	
	return 1;
}