struct node{
	int info;
	struct node *next;
};
 struct Queue{ 
	 int count;
	 struct node *head;
	 struct node *tail;
 } ;

 typedef struct Queue Queue;
 typedef struct node node;

  Queue * init_Queue(int);
  void insert (Queue *,int);
  node * remove1(Queue *);
  void print(Queue *);
  void clear_Queue(Queue *);
  int length(Queue *);
  node* firstElement(Queue *);


