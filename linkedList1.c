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
        printf("%d\n", head -> data);
        display(head->next);
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
void insert(int spec, int specValue) {
	int i;
	for (i=0; i<spec; i++) {
		head->next;
	}
} 

int main(){
    struct node *prev,*head, *p;
    int n,i, start, last, spec;
    printf ("number of elements:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++){
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    printf("Enter value to be added in front: ");
    scanf("%d", &start);
    printf("Enter value to be added in the end: ");
    scanf("%d", &last);
    head = front(head,start);
    end(head,last);
    display(head);
    printf("Enter specified location: ");
    scanf("%d", &spec);
    printf("Enter value to be added in specified location: ");
    scanf("%d", &specValue);
    insert(spec, specValue);
}




