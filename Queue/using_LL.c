#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *rear = 0, *front = 0;
    void enqueue(int x){
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->next = 0;
        if(front==0 && rear==0){
            front = rear = newnode;
            front->data = x;
        }
        else{
            rear->next = newnode;
            rear->data = x;
            rear = newnode;
        }
    }
    void dequeue(){
        struct node *temp;
        temp = front;
        if(front==0 && rear==0){
            printf("Q is empty");
        }
        else{
            printf("The data is %d\n",front->data);
            free(temp);
        }
    }
    void peek(){
        if(front==0 && rear==0){
            printf("Q is empty");
        }
        else{
            printf("The data is %d\n",front->data);
        }
    }
    void display(){
        struct node *temp;
        if(front==0 && rear==0){
            printf("Q is empty");
        }
        else{
            temp = front;
            while(temp!=0){
                printf("The data is %d\n",temp->data);
                temp = temp->next;
            }
                
        }
    }
    enqueue(9);
    enqueue(5);
    enqueue(10);
    display();



}




