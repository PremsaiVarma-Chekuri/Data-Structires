#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top=NULL;
void push(int x){
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        newnode->next = top;
        top = newnode;
}
void pop(){
    struct node *temp;
    temp = top;
    if(top==NULL){
        printf("No elements are present\n");
    }
    else{
        printf("The pop element is: %d\n",temp->data);
        top = top->next;
        free(temp);
    }
}
void peek(){
    struct node *temp = top;
    if(top==NULL){
        printf("The stack is empty\n");
    }
    else{
        printf("The peek element is %d\n",temp->data);
    }
}
void display(){
    struct node *temp = top;
    if (temp==NULL){
        printf("No elements are present\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("elements are ");
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }

}
int main(){
    peek();
    push(9);
    push(5);
    push(10);
    peek();
    pop();
    display();
}








