#include<stdlib.h>
#include <stdio.h>


struct node
{
    int info;
    struct node *next;
};
struct node *top = NULL;

struct node* getNode(void){
    return ((struct node*)malloc(sizeof(struct node)));
}

void push(int x){
    struct node *newnode;
    newnode = getNode();
    newnode->info = x;
    newnode->next = top;
    top = newnode;

}

void display(){
    struct node *temp;
    temp = top;

    if(top == NULL)
        printf("\n\tStack is Empty... (Push Values in stack)");
    else{
        printf("Stack Elements Are: ");
        while (temp!=NULL)
        {
            printf(" %d ", temp->info);
            temp = temp->next;
        }
        printf("\n");
    
    }
}

void pop(){
    struct node *temp;
    temp = top;
    if(top == NULL)
        printf("\t...Stack is Empt...");
    else{
        printf("\tPop Element is : %d", temp->info);
        top = top->next;
        free(temp);
    }
}

void peek(){
    if(top == NULL)
        printf("Stack is Empty...");
    else{
        printf("\tTop element is : %d",top->info);
    }
    
}

int main()
{ 

    int choice;
    do{
        printf("\n\tSTACK OPERATIONS USING LINKED-LIST");
        printf("\n\t--------------------------------");
        printf("\n\t1.PUSH\n\t2.POP \n\t3.DISPLAY \n\t4.PEEK\n\t5.EXIT\n");
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{   
                int temp; 
                printf("Enter value for PUSH: ");
                scanf("%d",&temp);
                push(temp);
                break;
            } 
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                peek();
                break;
            }
            case 5:{
                printf("\n\tEXIT POINT ");
                exit(0);
                break;
            }
            default:{
                printf ("\nPlease Enter a Valid Choice(1/2/3/4/5)...");
            }
                
        }
    }while(choice!=5);

    return 0;
}

