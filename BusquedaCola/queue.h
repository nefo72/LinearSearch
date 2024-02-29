#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int element; 

typedef struct node {
  element e;
  struct node *next;
}Node;

typedef struct queue{
  Node *head;
  Node *tail;
}Queue;

//Prototypes

void createQueue(Queue *qu);
Node* createNode(element e);
void enqueue(Queue *qu, element e);
element dequeue(Queue *qu);
bool isEmpty(Queue qu);
void show(Queue *qu);
void deleteAll(Queue *qu);
void copyQueue(Queue *q1, Queue *q2);