#include<stdio.h>
#include<ctype.h>
#define True   1 
#define  False 0

int count;
int numArray[] = {1,2,3,4,5};
int func(void);
int convert_to_L();
int security_ch();
void reverse_bits();
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
	printf("the answer number is : %d\n", answer1); // output is -10 = 2-3*4, could also be 3- 2*4, 4 - 2*3
	
	/*
	**
	**  below is to change the uppercase characters to lowercases.
	*/
	//convert_to_L();
	//security_ch();
	reverse_bits();
	return True ;
	
}

int
func( void )
{
	static int counter = 1; // the static local variables will exist in the whole program
	return ++counter;
}


int convert_to_L(){
	int ch;
	while((ch=getchar()) != EOF)
		putchar(tolower(ch));         // tolower() from the cytype preprocess. 
	
	return True;
	
}

int security_ch(){
	int ch;
	while((ch=getchar()) != EOF)
		if('A'<= ch && ch<= 'z' )
			putchar(ch+13);         // security to the char characters from 'A' to 'z'; 
		else
			putchar(ch); 
	return True;
	
}

unsigned int reverse_bits1(){
	
	int bitArray[32];
	int value;
	
	scanf("%d", &value );
	for( int i = 0; value != 0; i++ ){
		
		bitArray[i] = value % 2; 
		value /= 2;
		
	}
	return value; 
}

void reverse_bits(){
	int value, rev_value= 0;
	
	scanf("%d", &value );
	for (int i = 1; i != 0; i <<1){
		if(value & 1 )
			rev_value |= 1;
		rev_value <<=1; 
		value >>= 1;
	}
	printf("the number is %d\n" , rev_value);
}

