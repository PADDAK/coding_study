#include<stdio.h>
#define STACK_SIZE 10   //스택사이즈
int stack[STACK_SIZE];  //스택
int top=-1;

int isFull(){
    if(top>=STACK_SIZE -1){
        printf("Error:Stack is FUll\n");
        return 1;
    }
    return 0;
}
int isEmpty(){
    if(top==-1){
        printf("Error:Stack is empty\n");
        return 1;
    }
    return 0;
}
void push(int data){
    if(!isFull()){
        top++;
        stack[top]=data;
    }
}
int pop(){
    if(!isEmpty){
        return stack[top--];
    }
}
void printStack(){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}