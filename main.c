#include<stdio.h>
#include<stdlib.h>

// the main function is used to get the appropriate value square root 

int main(){
	
	int targetNum;
	float appro_pre = 1.0;
	float appro_aft;
	while ((scanf("%d", &targetNum)) == 1 ){
		
		while(appro_aft != appro_pre){
			
			appro_aft = (appro_pre + targetNum/appro_pre)/2;
			appro_pre = appro_aft;
			
			
		}
		
		printf("the number of appro square root is: %f\n", appro_aft)
		
	}
	
	return 1;
}