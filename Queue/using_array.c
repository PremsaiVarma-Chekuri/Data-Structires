#include<stdio.h>
#include<stdlib.h>
#define N 5
int main(){
    int queue[N];
    int front = -1, rear = -1;
    void enqueue(int x){
        if(rear>=N-1){
            printf("Overflow\n");
        }
        else if(front==-1 && rear==-1){
            front = rear =0;
            queue[front] = x;
        }
        else{
            rear++;
            queue[rear] = x;
        }
    }
    void dequeue(){
        if(front==-1 && rear==-1){
            printf("Underflow\n");
        }
        else if(front==rear){
            front = rear = -1;
        }
        else{
            printf("%d\n",queue[front]);
            front++;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            printf("The element is %d\n",queue[i]);
        }
    }
    enqueue(9);
    enqueue(10);
    enqueue(5);
    dequeue();
    display();

}


