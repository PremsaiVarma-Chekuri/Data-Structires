#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of the stack: ");
    scanf("%d",&n);
    int stack[n];
    int top = -1;
    void push(int i){
        //printf("Top is %d\n",top);
        if(top==n-1){
            printf("Stack Overflow\n");
        }
        else{
            top++;
            stack[top] = i;
        }
    }
    void peak(){
        printf("The top element is %d\n",stack[top]);
    }
    void pop(){
        if (top<0){
            printf("Stack underflow\n");
        }
        else{
            int x = stack[top];
            top--;
            printf("The pop element is %d\n",x);
        }
    }
    push(9);
    push(5);
    push(7);
    peak();
    pop();
    pop();
    


}