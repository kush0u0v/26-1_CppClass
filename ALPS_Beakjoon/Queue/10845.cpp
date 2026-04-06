#include <stdio.h>
#include <string.h>

int rear = -1, front = -1;
int queue[10001];

void push(int d){
    queue[++front] = d;
}

int empty(){
    return rear == front;
}

int pop(){
    if(empty()) return -1;
    return queue[++rear];
}

int size(){
    return front - rear;
}

int peekfront(){
    if(!empty()) return queue[rear + 1];
    else return -1;
}

int peekback(){
    if(!empty()) return queue[front]; 
    else return -1;
}
char instruction[7][7] = {"push", "pop", "size", "empty", "front", "back"};

int main(){
    int T;
    scanf("%d", &T);

    for(int i = 0; i<T; i++){
        char temp[7];
        int num = 0;
        int flag = -1;

        scanf("%s", temp);
        
        if(strcmp(temp, "push") == 0){
            scanf("%d", &num);
        }

        for(int j = 0 ; j < 6; j++){
            if(strcmp(temp, instruction[j]) == 0){
                flag = j;
                break;
            }
        }

        switch (flag){
            case 0: push(num); break;
            case 1: num = pop(); break;
            case 2: num = size(); break;
            case 3: num = empty(); break;
            case 4: num = peekfront(); break;
            case 5: num = peekback(); break;
        }

        if(flag != 0){
            printf("%d\n", num);
        }
    }
}