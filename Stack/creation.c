#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);
    int stack[n];
    int top = -1;
    void push(int i){
        printf("Top is %d\n",top);
        if(top==n-1){
            printf("Stack Overflow\n");
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
    push(7);
    peak();

}