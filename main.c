#include<stdio.h>
#include<stdlib.h>

void prime(int num);
void triangle(int a, int b , int c);
// the main function is used to get the appropriate value square root 

int main(){
	
	int targetNum, targetNum1, targetNum2;
	float appro_pre = 1.0;
	float appro_aft = 1.0;
	while ((scanf("%d %d %d", &targetNum, &targetNum1, &targetNum2)) == 1 ){
		
		if(targetNum < 0)
			printf("please enter the number that greater than 0");
		else{
		
			do {
				
				appro_pre = appro_aft;     // assgin the appropriate new value to last one 
				appro_aft = (appro_pre + targetNum/appro_pre)/2;   // update the new value
				
			}while(appro_aft != appro_pre);
	        triangle(targetNum,targetNum1,targetNum2); 
			prime(targetNum);
			printf("the number of appro square root is: %f\n", appro_aft);
			
		}
	}
	
	return 1;
}
// used to calculate the prime 
void prime(int num){
	
	int count = 0;
	
	for(int i = 1; i<=num ; i++){
		
		if (num%i == 0)
			count++;
		
	}
	
	if(count == 2 ){
		
		printf("%d this is a prime\n", num);
		
	}
	else
		printf("it is not a prime\n");
}

// this function is used to calculate the triagle property; 
void triangle(int a, int b , int c){
	
	if( a+b>c && a+c > b && b+c >a ){
		
		if(a == b || a== c || b == c)
		{
			if(a == b == c)
				printf("equilateral triangle");
			else
				printf("isosceles triangle");
			
		}
		else
			printf("ordinary triangle");
	}
	else
		printf("this is not a triangle \n");
	
	
	
}