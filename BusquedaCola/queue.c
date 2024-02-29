#include "queue.h" 

void createQueue(Queue *qu){
  qu -> head = qu -> tail = NULL;
}

Node* createNode(element e){
  Node *t;
  t = (Node*)malloc(sizeof(Node));
  t -> e = e;
  t -> next = NULL;
  return t;
}

void enqueue(Queue *qu, element e){
  Node *n;
  n = createNode(e);
  if (isEmpty(*qu)){
    qu -> head = n;
  }else{
    qu -> tail -> next = n;
  }
  qu -> tail = n;
}

bool isEmpty(Queue qu){
  return(qu.head == NULL);
}

element dequeue(Queue *qu){
  element value;
  if(isEmpty(*qu)){
    puts("underflow");
  }else{
    Node *aux;
    aux = qu -> head;
    value = qu -> head -> e;
    qu -> head = qu -> head -> next;
    free(aux);
  }
  return value;
}

void show(Queue *qu) {
  if (isEmpty(*qu)) {
    printf("The queue is empty.\n");
  }
  Node *current = qu-> head;
  while (current != NULL) {
    printf("%d ", current->e);
    current = current->next;
  }
  printf("\n");
}

void deleteAll(Queue *qu){
  if(isEmpty(*qu)){
    puts("Queue is already empty.\n");
  }else{
    while(!isEmpty(*qu)){
      dequeue(qu);
    }
  }
}

void copyQueue(Queue *q1, Queue *q2){
  Node *aux = q1 -> head;
  while( aux -> next != NULL){ // chacar por que no llega hasta el ultimo elemento
    enqueue(q2, aux -> e);
    aux = aux -> next;
  }
}