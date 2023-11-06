

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;           
    struct node *next; 
}*head;


void createList(int n);
void deleteFirstNode();
void displayList();



int main()
{
    int n, choice;

    printf("Enter size: ");
    scanf("%d", &n);
    createList(n);

    printf("\nLinked list: \n");
    displayList();

    printf("\nPress 1 to delete first node, 0 to delete last node, number between 1 and %d to delete element at specific location: ", n);
    
    scanf("%d", &choice);
    if(choice == 1){
        deleteFirstNode();
     } else if(choice==0){
     	deleteLastNode();
     } else if(choice>1&&choice<=n){
     	choice--;
     	deleteSpecificNode(choice);
     }
    printf("\nData in the list \n");
    displayList();

    return 0;
}


void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL; 

        temp = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode; 
                temp = temp->next;
            }
        }

        printf("Linked list created.\n");
    }
}

void deleteFirstNode()
{
    struct node *toDelete;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        head = head->next;

        printf("\nData deleted = %d\n", toDelete->data);

        free(toDelete);

        printf("First node deleted.\n");
    }
}

void deleteLastNode()
{
   struct node *toDelete, *secondLastNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        secondLastNode = head;

        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }

        if(toDelete == head)
        {
            head = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }

        free(toDelete);

        printf("Deleted last node.\n");
    }

}
void deleteSpecificNode(int position)
{
    int i;
    struct node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;
            free(toDelete);

            printf("Deleted element %d \n", position);
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}




void displayList()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
