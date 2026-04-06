#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int NUM;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
    int count;
} Queue;

void initqueue(Queue* q){
    q -> front = NULL;
    q -> rear = NULL;
    q -> count = 0;
}

int isEmpty(Queue* q){
    return (q -> count == 0);
}

void enqueue (Queue* q, int data){
    Node* newNode = (Node*) malloc (sizeof(Node));
    newNode -> NUM = data; 
    newNode -> next = NULL;

    if(isEmpty(q)) 
        q-> front = newNode;
    else 
        q->rear->next = newNode;
    
    q -> rear = newNode;
    q->count++;
}

int dequeue (Queue* q){
    if(isEmpty(q) == 1) return -1;
    Node* temp = q->front;
    int data = temp -> NUM;
    q -> front = temp -> next;
    free (temp);
    q->count--;
    return data;
}

int main(){
    int n;
    scanf("%d", &n);

    if(n==1){
        printf("1\n");
        return 0;
    }

    Queue q;
    initqueue(&q);
    for(int i = 1; i<=n; i++){
        enqueue(&q, i);
    }

    while(q.count > 1){
        dequeue(&q);
        int temp = dequeue(&q);
        enqueue(&q, temp);
    }   
    printf("%d\n", q.front->NUM);
} 
