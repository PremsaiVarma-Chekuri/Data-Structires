#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);
    int stack[n];
    int top = -1;
    void push(int i){
        if(top==n){
            printf("Stack Overflow");
        }
        else{
            top++;
            stack[top] = i;
        }
    }
    void peak(){
        printf("The top element is %d",stack[top]);
    }
    push(9);
    push(5);
    peak();

}