#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;};
  struct node* top = NULL;
  void push(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=top;
    top = newnode;
    printf("%d",top->data);
  }
  void pop(){
    if(top==NULL){
      printf("the stack is empty");
    }
   else{struct node* todelete = top;
    top = top->next;
    free(todelete);}}
    void peek(){
      if(top==NULL){
        printf("is empty");
      }else{
        printf("%d",top->data);
      }
    }
    void isempty(){
      if(top==NULL){
        printf("the stack is empty");
      }else{
        printf("the stack is not empty");
      }
    }
int main(){
  push(100);
  push(200);
  push(300);
  peek();
  pop();
  peek();
  isempty();

}

    
  
