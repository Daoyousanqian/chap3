/*

**
**   Here is to declare different type of structures.

**   including part information 
**   subassembly parts;
*/

// one part 
typedef  struct {
	
	int cost;
	int supplier;
	int date;
	int SN;
	
} Partinfo;

// subassembly 

typedef struct {
	
	int n_parts;
	struct SUBASSPART {
		
		char partno[10];
		short quan;
		
	} *part;
	
} Subassyinfo;

typedef struct  {
	
	char partno[10];
	int quan;
	enum { PART, SUBASSY} type;
	union {
		
		Partinfo *part ;
		Subassyinfo *subassy;
		
	} info;
	
	
} Creat_rec; 










