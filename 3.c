#include<stdio.h>
#include<ctype.h>
#define True   1 
#define  False 0
#define N_Value 5

/*
**   By this way the declare a structure we can use
**   Simple x; 
**   Simple class[10], *z;
*/
typedef struct {
	
	int age;
	char gender;
	float credits; 
	
} Simple;                       

/*
******    in this way to declare new struct 
******  struct SIMPLE x;   struct SIMPLE student[10]; 
*/
struct SIMPLE {
	
	int age;
	char gender;
	float credits; 
	
};



int count;
int numArray[] = {1,2,3,4,5};
int func(void);
int convert_to_L();
int security_ch();
void reverse_bits();
void pointers();
void init_Array();


int main(){
	int *p = numArray;
	// p =  12040506;    cannt print anything
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
	//reverse_bits();
	//pointers();
	init_Array();
	
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
	unsigned int value, rev_value= 0;
	
	printf("please enter the value here: \n");
	scanf("%u", &value );
	//value = 25;
	//unsigned int i ;
	for (unsigned int i = 1; i != 0; i <<=1){
		rev_value <<=1;                                       // <<=   left shift 
		if(value & 1 )                                            
			rev_value |= 1;
		
		value >>= 1;											// >>= right shift 
	}
	printf("the enter number is %u\n" , value);   // here can not use " %d " to output
	printf("the number is %u\n" , rev_value);     // here can not use "%d " to output 
}

void pointers(){
	
	int a = 10; 
	int *b = &a;
	int **c = &b;  // pointers to pointers  
	
	// ++*b ;
	// (*b)++; 
	printf("b is address of a  is %d\n", b);
	++*++b;
	printf("a number is %d\n", a);
	// b 
	printf("b is address of a  is %d\n", b);
	printf("*b is number of a  is %d\n", *b);
	
	// c 
	printf("c is address  %d\n", c);
	printf(" *c points to b address  is %d\n", *c);
	printf(" **c is number of a  is %d\n", **c);
}


int std_strlen(char *strings){
	int length = 0;
	
	while(*strings++ != '\0')       // could be replaced by while((string = *strings++) != '\0'  )
		length += 1;
	
	return length ;
	
}

void init_Array(){
	
	float values[6];
	float *vp;
	
	for ( vp = &values[0]; vp < &values[N_Value] ;  )       
		*vp++ = 0;                                                            //  *vp = 0 , vp = vp +1 
	printf("the first value is is %f\n", values[0] );
	*vp++ = 2;  	// 
	* --vp = 4;
	printf("the value is is %f\n", values[5] );
	
	//return True; 
}

void
reverse_string( char *str )
{
	char *last_char;
	/*
	** Set last_char to point to the last character in the
	** string.
	*/
	for( last_char = str; *last_char != '\0'; last_char++ )
		;
		last_char--;
	/*
	** Interchange the characters that str and last_char point
	** to, advance str and move last_char back one, and keep
	** doing this until the two pointers meet or cross.
	*/
	while( str < last_char ){
		char temp;
		temp = *str;
		*str++ = *last_char;
		*last_char-- = temp;
	}
}






