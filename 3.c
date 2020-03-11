#ifndef _HEADERNAME_H
#define _HEADERNAME_H  1

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include"str.h"
#endif

#define True   1 
#define  False 0
#define N_Value 5
#define DEBUG 0
#define SUM(value)   ((value) + (value))


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
void new_str1();
void oper_Str();
void acc_Str(Simple *cp);
void new_Union();
void new_Malloc();
void * alloc (size_t size);
void test_Macro( );
int sum1(int val);
int compared_int( void const *a, void const * b);
void new_dynamic_m();
void store_Manage();
Creat_rec * creat_subassy_rec (int n_parts);

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
	new_str1();
	
	oper_Str(); 
	
	new_Union();
	
	new_Malloc();
	
	test_Macro();
	
	new_dynamic_m();
	
	store_Manage();
	
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
	printf("b is address of a  is %p\n", b);
	++*++b;
	printf("a number is %d\n", a);
	// b 
	printf("b is address of a  is %p\n", b);
	printf("*b is number of a  is %d\n", *b);
	
	// c 
	printf("c is address  %p\n", c);
	printf(" *c points to b address  is %p\n", *c);
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

// in this function to show how to define and access the member of structure
void new_str1(){

	struct COMPLEX {
		float  number; 
		int age;
		long *lp;
		struct SIMPLE s;
		struct SIMPLE sa[10];
		Simple  b[5];
		struct SIMPLE *SP;
		
	};
	
	struct COMPLEX comp; // declare a new structure; 
	
	comp.number = 30;
	comp.age = 45;
	comp.sa[1].gender = 'f';              // short for ******** ((comp.sa)[1]).gender; 
	comp.sa[2].gender = 'm';
	printf("to access the age %f\n", comp.number);
	printf("to access the gender %c\n", ((comp.sa)[1]).gender);
	
	struct COMPLEX *sp = &comp;
	//acc_Str(sp);                               // **** different structure declaration would have a problem. 
		
}

void oper_Str(){

		Simple str1 = { 28, 'm', 4.3   };
		Simple *px = &str1;
		acc_Str(px);                               // ***** call a function to with the arguement of structure pointer
	
}


void acc_Str(Simple *cp ){
	
	printf("it would show the two ways of accessing structure\n");
	printf("access the structure number by pointer: %d\n", cp-> age);   //  ********* ' . ' and ' -> ' two ways access the member of structure
	printf("access the structure number by dot: %c\n", (*cp).gender);   
	
	// when structure is used as an arguement. the call-by-value passing of C requires that a copy of the arguement given to the function. It will waste too much time
	//**** However, when pointer is passed, it is much smaller than the entire struture. 
	//****** pointers are much more efficient. 
	
}

//******************* size_t is like unsigned int , represents it is a non-negative number;

void new_Union(){
		
		union {
			float pi;
			int i;
		} fi;
		
		fi.pi = 3.1415;                                     // to initialize a union, you have to initialize the first member of the union
		printf("the union number is %f\n",fi.pi);
	
}

/* malloc is used for allocating the memory 
*********    void *malloc (size_t size);              //  this function will return the addres of memory 
*********     void free( void  *pointer);               //  it will free the memory 
*********
*/

//void *malloc (size_t size);  // return an address;

//void free( void  *pointer); 

//void *calloc (size_t num_elements, size_t element_size);  // illustrate the number of elements and element size also initialize memory to 0;

//void realloc( void *ptr, size_t new_size); // it will change the size of the memory 

void new_Malloc(){
	
	int *pi, *array, *arr_pointer, i ;
	int m_num = 100;
	pi = malloc(100);
	printf("the allocation memory is %p\n", pi);       // printf ("%p", pointer) is used to print the address . 
	if(pi == NULL){
		
		printf("out of the bound of memory\n");
		exit(1);
	}
	
	//array = malloc(25 * sizeof( int ));      // this could run on different OS as the length is different on OS;
	//array = alloc (25 * sizeof( int ));
	array = alloc (m_num);
	arr_pointer = array;
	for( i = 0; i < 25; i += 1)
	{
		
		* arr_pointer ++ = 0;            // make a copy of the pointer then the pointe plus one; 
	
	}
	
	
	//printf("the allocation memory is %d\n", sizeof(int));
	printf("the number before memory free %d\n", *array);  // test the value before and after the memory allocation 
	free( pi );
	free( array );                                                                     // realloc could be used to free the end of the memory. 
	printf("the number after memory free %d\n", *array);

}

/*
******** THIS function is used to check the returned address, if it is NULL then failed will be passed.
********
*/
void *
alloc (size_t size){
	
	void *new_memory;
	new_memory = malloc( size );
	if(new_memory == NULL ){
		
		printf("memory allocation failed, out of boudary!!\n");
		exit(1);
		
	}
	
	#if DEBUG
		printf("the memory address is : %p\n", new_memory);
	
	#endif
	
	return new_memory;
	
}


/*******
********** below function shows the side effect of the macros
********** when the argument is used more than once like ' i++ '
********** it will change the orginal meaning 
*/

void test_Macro( ) {
	
	int i = 0;
	int result = 0; 
	int array[10] = {1,1,1,1,1,1,1,1,1,1};
	
	while (i < 10){
		result += SUM(array[i++]);  
		printf("the number of i is : %d\n", i);    
		// ***********the print number is 2, 4, 6, 8 , 10,  means i++ increament did two times.
	}
	
	i = 0;
	while (i < 10){
		result += sum1(array[i++]);  
		printf("the number of i is : %d\n", i);
		// ***********the print number is 1, 2, 3,4,5,6,7,8,9,10, when use function it only pass the copy. 
	}
	
	
}

int sum1(int val){
	
	return (val + val) ;
	
}

int compared_int( void const *a, void const * b){
	
	register int const *pa = a; 
	register int const *pb = b; 
	return *pa > *pb ? -1 : *pa < *pb ? 1 : 0;  
	/*
	******   a > b return 1;
	******   a < b return -1; a = b return 0  
	*/
	
}

void new_dynamic_m(){
	
	int *array;
	int n_value;
	int i;
	
	/*
	***** use scanf to enter the number of the 
	*/
	printf("please enter how number of the array:\n");
	if((scanf("%d", &n_value)) != 1 || n_value < 0){
		
		printf("the input is incorrect\n");
		exit(EXIT_FAILURE);
	}
	
	// check memory allocation address 
	array = malloc( n_value * sizeof(int));
	if (array == NULL ){
		
		printf("memory allocation failed \n");
		exit(EXIT_FAILURE);
		
	}
	
	for (i = 9; i >= 0 ; i --)
		array[i] = i;
	
	qsort(array, n_value, sizeof(int), compared_int);
	i = 0;
	while(i < n_value)
		printf("the array number is %d\n", array[i++]);
	free(array);
	
}


void store_Manage(){
	
	Creat_rec *instrument1 = creat_subassy_rec(10);
	printf("the total number of the assmebly is : %d\n", instrument1-> info.subassy -> n_parts);
	printf("the SN of  assmeblyis : %s\n", instrument1-> info.subassy -> part -> partno);
	
}
	
Creat_rec *
creat_subassy_rec (int n_parts){

	Creat_rec * new_rec;
	
	new_rec  = malloc(sizeof (Creat_rec) );
	if(new_rec != NULL){
		
		// get the new structure address then allocate the memory of 
		new_rec -> info.subassy = malloc(sizeof (Subassyinfo));
		if (new_rec-> info.subassy != NULL ){
			
		// get the sub structure address successfully. 
			
			new_rec-> info.subassy -> part = malloc(sizeof( struct SUBASSPART ));
			if(new_rec-> info.subassy -> part != NULL){
				
				// get memory allocation on the part structure 
				new_rec-> info.subassy -> n_parts = n_parts;
				//new_rec-> info.subassy -> part -> partno = {"2020031220"};
				new_rec->type = SUBASSY;
				return new_rec; 
				
			}
			
			// if failed then free the allocated memory
			free (new_rec-> info.subassy);
		}
		// if failed then free the allocated memory
		free(new_rec)	;
	}	
	
	return new_rec;

}	
	








