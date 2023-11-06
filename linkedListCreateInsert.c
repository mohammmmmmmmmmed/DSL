#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    if(head != NULL) {
        printf("%d -> ", head -> data);
        display(head->next);
    } else {
    	printf("NULL\n");
    }
}

struct node* front(struct node *head,int value)
{
    struct node *p;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=head;
    return (p);
}

void end(struct node *head,int value){
    struct node *p,*q;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    q=head;
    while(q->next!=NULL){
        q = q->next;
    }
    q->next = p;
}

void after(struct node *a, int value){
    if (a->next != NULL){
        struct node *p;
        p = malloc(sizeof(struct node));
        p->data = value;
        
        p->next = a->next;
        a->next = p;
    }
    else{
        printf("Use end function");
    }
}

int main(){
    struct node *prev,*head, *p;
    int n,i, start, last, switchcase;

    printf ("number of elements:");
    scanf("%d",&n);
    head=NULL;
    printf("Display (1) or Insert (2)? ");
    scanf("%d", &switchcase);
    switch (switchcase) {
    	case 1: 
    		display(head);
    		break;
    	case 2:
    		for(i=0;i<n;i++){
        	p=malloc(sizeof(struct node));
        	scanf("%d",&p->data);
        	p->next=NULL;
        	if(head==NULL)
            		head=p;
        	else{
            		prev->next=p;
            	}
        	prev=p;
        	}
        	display(head);
        	break;
    		
    }
    
    
}


