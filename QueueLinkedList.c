#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

struct node* getnode(){
    return ((struct node*)malloc(sizeof(struct node)));
}
void enQueue(int X){
    struct node *newnode;
    newnode = getnode();
    newnode->info = X;
    newnode->next = NULL;

    if(front == NULL && rear == NULL)
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }  
}

void delQueue()
{
    
    if (front == NULL && rear == NULL)
    {
        printf("Queue is Emplty... \n");
    }else
    {
        struct node *temp;
        temp = front;
        printf("%d : is Deleted from Queue \n", front->info);
        front = front->next;
        free(temp);
    }
    
    
}

void display()
{
    
    if(front == NULL && rear == NULL)
        printf("Queue is Emplty... \n");
    else
    {
        struct node *temp;
        temp = front;
        printf("Queue Values are :\n");
        while (temp!=NULL)
        {
            printf(" %d", temp->info);
            temp = temp->next;
        }
        printf("\n");
    } 
    
} 

void peek()
{
    if(front == NULL && rear == NULL)
        printf("Queue is Emplty... \n");
    else
        printf("Peek Element in queue is : %d", front->info);
}

int main(int argc, char const *argv[])
{
    int choice;
    while (1)
    {
        printf("\n1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Display Peek element of queue \n");
        printf("5.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                int inValue;
                printf("Enter Value to be Insert in Queue : ");
                scanf("%d",&inValue);
                enQueue(inValue);
                break;
            case 2:
                delQueue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                // return 0;
                exit(1);
            default:
                printf("Wrong choice \n");
        } 
    }
    return 0;
}

