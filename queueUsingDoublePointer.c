#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node *next;
}nodetype;

void push(nodetype **front, nodetype **rear, int val){
    nodetype *p = (nodetype *)malloc(sizeof(nodetype));
    if( p == NULL){
        printf("\n No memory allocated.");
    }else{
        p->info = val;
        p->next = *front;
        *front = p;
        if(*rear == NULL){
            *rear = p;
        }
    }
}

void pop(nodetype **front,nodetype **rear){
    if(*rear == NULL){
        printf("No element to pop.");
    }else if(*rear == *front){
        nodetype *temp = *front;
        printf("\n%d popped.", temp->info);
        *front = NULL;
        *rear = NULL;
        free(temp);
    }else{
        nodetype *temp = *front;
        while(temp->next != *rear){
            temp = temp->next;
        }
        nodetype *popped = temp->next;
        temp->next = NULL;
        printf("\n%d popped.\n", popped->info);
        free(popped);
        *rear = temp;
    }
}

void display(nodetype *front){
    
    if(front == NULL){
        printf("No elements to display.\n");
        return;
    }
    printf("\n Elements in stack : ");
    while(front != NULL){
        printf(" %d ",front->info);
        front = front->next;
    }
}

void main(){

    nodetype *front = NULL,*rear =NULL;
    int val,ch,i = 1;
    while(i){
        printf("\nEnter your choice :\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                printf("Enter the number to insert in new node :");
                scanf("%d",&val);
                push(&front,&rear,val);
                break;
            case 2: 
                pop(&front,&rear);
                break;
            case 3: 
                display(front);
                break;
            default : i=0;
        }
    }

}