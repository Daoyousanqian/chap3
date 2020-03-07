#include<stdio.h>

int count;
int numArray[] = {1,2,3,4,5};
int func(void);
int main(){
	int *p = numArray;
	int i ;
	int a , b , c, d;
	char a1,a2,a3,a4; 
	
	a =  b = 10;
	for (i = 0 ; i < 4 ; i ++){
		
		++count ;
		
		printf("the number is : %d\n", count); // output is 1 ,2,3,4
		printf("the addr is : %d\n", *p);
		p++;
	}
	
	//++a = 10; 
	c = a++;  // c = a; a = a + 1;
	d = ++b; // d = b = b+1 
	printf("number a's value is :%d\n", a);
	printf("number b's value is :%d\n", b);
	printf("number c's value is :%d\n", c);
	printf("number d's value is :%d\n", d);
	
	b = a > 5 ? 3: -20;
	/*
	*** it is equal to 
	if (a > 5)
		b = 3;
	else 
		b = -20;
	*/
	printf ("the number b is : %d\n ", b);
	/*
	while( a = get_value(), count_value(a), a > 0){  // , could be used by this, only a > 0 works as a condition
		
	}
	
	*/
	/*
	 **** other operators like " . "	 and   " -> "
	 *****  " . " dot is used to access the struct members like s.a   ************
	 **** " -> " is when you have pointer of the struct you can use this to access the members *********
	*/
	
	a1 = a2 + a3 ;   // a2 and a3 are promted to integers and then added , then truncted to 8-bit to 
	a1 = (-a2 ^ a3 << 1 ) >> 1 ; // will be calculated as integers. 
	/* 
	**** sometimes the operation and operators could not be used 
	****
	*/
	d = c + ++c;   // the oupt is 22.
	
	printf("the number is : %d\n", d);
	
	int answer, answer1 ;
	a = func();
	b = func();
	c = func();
	
	//answer = (a=func()) - (b=func() )* (c=func());
	answer1 = a - b*c;
	//float num1 = (float)(25/10);
	printf("the answer number is : %d\n", answer1); // output is 10 = 2-3*4
	return 1 ;
	
}

int
func( void )
{
	static int counter = 1; // the static local variables will exist in the whole program
	return ++counter;
}