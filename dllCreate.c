    #include <stdio.h>  
       
      
    struct node{  
        int data;  
        struct node *previous;  
        struct node *next;  
    };      
       
    struct node *head, *tail = NULL;  
       
    void addNode(int data) {  
        
        struct node *newNode = (struct node*)malloc(sizeof(struct node));  
        newNode->data = data;  
          
        if(head == NULL) {  
            head = tail = newNode;  
            head->previous = NULL;  
            tail->next = NULL;  
        }  
        else {  
            tail->next = newNode;  
            newNode->previous = tail;  
            tail = newNode;  
            tail->next = NULL;  
        }  
    }  
       
    void display() {  
        struct node *current = head;  
        if(head == NULL) {  
            printf("List is empty\n");  
            return;  
        }  
        printf("Nodes of doubly linked list: \n");
        printf("HEAD-->");
        while(current != NULL) {
            printf("<--");
            printf("%d", current->data);
            printf("-->");  
            current = current->next;  
        }  
        printf("NULL");
    }  
       
    int main(){  
    	int size, i, temp;
    	printf("Enter size: ");
    	scanf("%d", &size);
    	for(i=0; i<size; i++){
    		printf("Enter input: ");
    		scanf("%d", &temp);
    		addNode(temp);
    	}
          
        display();  
       
        return 0;  
        }  


