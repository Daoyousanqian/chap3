#include<stdio.h>
#include<stdlib.h>

void prime(int num);
void triangle(int a, int b , int c);
void copy_n(char dst[], char src[], int n);
int count_one_bits( unsigned value );
// the main function is used to get the appropriate value square root 

int main(){
	
	int targetNum, targetNum1, targetNum2;
	float appro_pre = 1.0;
	float appro_aft = 1.0;
	
	char dst1[10];
	char str1[20];
	char ch;
	printf("please enter the number \n");
	printf("the count number is: %d\n ", count_one_bits(10));
	printf("please enter the string\n");
	scanf("%s",str1 );
	while((ch = getchar()) !=EOF&& ch != '\n')    // to throw away the left characters
		;
	copy_n(dst1,str1,10);
	printf("the destination array is %s\n", dst1);
	printf("the destination array is %s, %s\n", str1,dst1);
	while ((scanf("%d %d %d", &targetNum, &targetNum1, &targetNum2)) != EOF ){
		
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
			if(a == b && a == c && b == c)
				printf("equilateral triangle\n");
			else
				printf("isosceles triangle\n");
			
		}
		else
			printf("ordinary triangle\n");
	}
	else
		printf("this is not a triangle \n");
	
	
}

/*
**this function is used to copy n characters from sources to destination 
**
*/
void copy_n(char dst[], char src[], int n){
	
	int num_dst, num_src;
	int dst_index, src_index;
	src_index = 0;
	/*
	for(num_dst = 0 ; num_dst < n; num_dst++){
		
		if(src[num_dst] == 0)
			dst[num_dst] = 0;
		else
			dst[num_dst] = src[num_dst];
	}*/
	
	for( dst_index = 0; dst_index < n; dst_index += 1 ){
		dst[dst_index] = src[src_index];
		if( src[src_index] != 0 )
			src_index += 1;
     }
	
	//printf("the destination array is %s\n", dst[n]);
}

int count_one_bits( unsigned value )
{
	int ones;
    // for loop could be controled by different value 
	for( ones = 0; value != 0; value >>= 1 )
	/*
	** If the low-order bit is a 1, count it.
	*/
		if( ( value & 1 ) != 0 )
		ones += 1;
	return ones;
}

