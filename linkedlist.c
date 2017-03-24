#include <stdio.h>
#include<malloc.h>
//using namespace std;
struct node{
    int data;
    struct node* next;
};

void print_list(struct node* head){				//Function to print the list
    struct node* traverser=head;
    while((traverser)!=NULL){
        printf("%d\n",traverser->data);
        traverser=traverser->next;
    }
}

void add(struct node* head,struct node* new_node){		//Function to add new values
    struct node* traverser;
    traverser=head;
    while((traverser->next)!=NULL){
        traverser=traverser->next;
    
    }
        traverser->next=new_node;
}
struct node* create_list(int n){
    int i;
    struct node* head = NULL;
    struct node* first_node;					//First node is created
    first_node=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&(first_node->data));
	first_node->next=NULL;
	head=first_node;
	for(i=1;i<n;i++){					//Successive nodes are created using add function in the loop
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&(new_node->data));
	new_node->next=NULL;
	add(head,new_node);
	}
	print_list(head);
	return head;
}

void check(struct node* head,int x,int n){
    struct node* traverser;
    traverser=head;
    int count=0,flag=1;
    while(count<n){					//Function to traverse and find the required element
        if((traverser->data)==x){
            printf("\nThe index is %d\n%d\n",traverser->data,count);
            traverser=traverser->next;
            
            flag=0;					//If the element is found loop is terminated
            break;
        }
        count++;
    }
    if(flag!=0){
        printf("Element Not Found!!!");			//If the element doesnot exist
    }
}

int main() {
	int n,x,val;
	struct node* head;
	head=(struct node*)malloc(sizeof(struct node));		
	printf("Enter the number nodes\n");			//Number of nodes is got from user
	scanf("%d",&n);
	printf("Enter the data\n");
	head=create_list(n);					//Function to create list is called
	printf("Enter the value to check");
	scanf("%d",&val);
	check(head,x,val);
	
	return 0;
}
