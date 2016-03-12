 #include <stdlib.h>
#include <stdio.h>
#include "Queue.h"

int  main() {
	Queue * q1 = init_Queue(1);
           insert(q1,2);
		   insert(q1,3);
		 //  remove1(q1);
		  
	    // clear_Queue(q1);
		    printf("\n%d",q1->count);
	   print(q1);
	     printf("\n%d",q1->count);

		   
		   getchar();
		   

}