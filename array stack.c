#include<stdio.h>
#include<stdlib.h>
int* stack;
int top =-1;
int size;
void push(int data){
  if(top==size-1){
    printf("the stack is full");
  }else{
  top++;
  stack[top]=data;}
}
void pop(){
  if(top==-1){
    printf("the stack is empty");
  }else{
    printf("deleting the element %d",stack[top]);
    top--;
  }
}
void isempty(){
  if(top==-1){
    printf("the stack is empty");
  }else{
    printf("the stack is not empty");
  }
}
void isfull(){
  if(top==size-1){
  printf("the stack is full");}
  else{
    printf("the stack is not empty");
  }
}
void peek(){
  printf("the top element is %d",stack[top]);
}
int main(){
  int data;
  int op;
  int choice =1;
  printf("enter the size of the stack");
  scanf("%d",&size);
 stack =(int*)malloc(size*sizeof(int));
  while(choice){
    printf("which operation you want to perform \n 1=push()\n2=pop()\n3=peek\n4=is empty\n5=is full");
    scanf("%d",&op);
    if(op>=1&&op<=5){
      switch(op){
        case 1:printf("enter the pushing data");scanf("%d",&data);push(data);
        break;
        case 2: pop();
        break;
        case 3:peek();
        break;
        case 4: isempty();
        break;
        case 5:isfull();
        break;
      }
    }else{
      printf("the inputted number is out of range");
    }printf("do you want to continue");
    scanf("%d",&choice);
  }
}