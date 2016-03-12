#include <stdlib.h>
#include "Queue.h"
#include <stdio.h>

  Queue * init_Queue(int k){
	  struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
	  struct node *temp=(struct node*)malloc(sizeof(struct node));
	  temp->info=k;
	  q->head=temp;
	  q->tail=NULL;
	  q->head->next=q->tail;
	  q->count=1;
	  return q;
     } 



  void insert(Queue * q,int k){
	   struct node *temp=(struct node*)malloc(sizeof(struct node));
	   temp->info=k;
	   if(q->head->next==NULL){
		   q->tail=temp; q->count++;
		   q->head->next=q->tail;
		   return; 
	   }

	   q->tail->next=temp;
	   q->tail=temp;
	   q->count++;

  } 


  
   
  void print(Queue * q){




	  if(q->count==1) {printf("%d",q->head->info); 
	  return;} 
	  
	  q->count--;
	   printf("%d",q->head->info);
	  insert(q,remove1(q)->info);
	 
	  print(q);
	  q->count++;

	// //   struct Queue *nq=(struct Queue*)malloc(sizeof(struct Queue));
	//  
	////	nq=q;

	// 
	////  if(nq->head->next==NULL){
	//   if(q->head->next==NULL){
	//      printf("%d",q->head->info);
	//		  return;
	//   }
	// // } 

	// // printf("%d,",q->head->info);
	// //// printf("%d,", nq->head->info);	 
	// // ////remove1(nq);
	// // //print(q);
	// // ////print(nq);
	// // //print(q);	 

	  
  }

  



   node* remove1(Queue * q){
           
	   if(q->head->next==NULL) {
           struct node *temp=(struct node*)malloc(sizeof(struct node));
		 //  temp=q->head;
		   temp->info=q->head->info;
		   temp->next=q->head->next;

		  free(q->head);
		   q->count--;
		   return temp;
	   }
	   else{
		    struct node *temp=(struct node*)malloc(sizeof(struct node));
			 temp->info=q->head->info;
			  temp->next=q->head->next;
			q->head=q->head->next;
			q->count--;
			return temp;
	   }

	   return NULL;

   }


  /* void clear_Queue(Queue *q){
	   if(q->head->next==NULL) 
	   {free(q->head);
	   free(q);
	   return;
	   } 
	     free(q->head);
	   q->head=q->head->next;
	
	   clear_Queue(q);
	 
   }*/

   void clear_Queue(Queue *q){  free(q);}
   int length(Queue *q){ return q->count;}
   node* firstElement(Queue *q){return q->head;}
