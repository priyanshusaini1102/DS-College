#include <stdio.h>

typedef struct list{
    int info;
    struct nodes *next;
}node;

int main(){
    
    node *temp,a,b,c,d;
    a.info=10;
    b.info=20;
    c.info=30;
    d.info=40;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    temp = &a;

    while(temp!=NULL) {
        printf("%d\t",temp->info);
        temp = temp->next;
    }
    
}