#include<stdio.h>
typedef struct _Node{
    int data;
    struct _Node* next;
}Node;

Node* head;

void init(){
    head = NULL;
}

void insert(int data){
    Node* ptr;
    Node* newNode=(Node*)malloc(sizeof(Node));  //newNode 할당
    newNode->data=data; //데이터할당
    newNode->next=NULL; //next포인터초기화

    if(head==NULL){
        head=newNode;
    }else{
        if(head->data > newNode->data){
            newNode->next=head;
            head=newNode;
            return;
        }
        for(ptr=head;ptr->next;ptr=ptr->next){
            if(ptr->data < newNode->data && ptr->next->data > newNode->data){
                newNode->next=ptr->next;
                ptr->next=newNode;
                return;
            }
        }
        ptr->next=newNode;
    }
}