#include<stdio.h>
#include<stdlib.h>

typedef struct stacktype{
int info;
struct stacktype *next;
}node;
node *stack=NULL;
void push();
void pop();
void display();
int main(){
int n;
do{
    printf("\n1-->Push \n2-->Pop\n3-->Display\n4-->Exit\n");
    printf("Enter the choice :");
    scanf("%d",&n);
    switch(n){
    case 1:push();break;
    case 2:pop();break;
    case 3:display(); break;
    case 4:printf("Exiting..../n");break;
    default: printf("Invalid choice !/n");
}
}
while(n!=4);
    }
void push(){
int v;
node *temp;
printf("Enter value to push :");
scanf("%d",&v);
temp=(node*)malloc(sizeof(node));
if(temp==NULL){
    printf("Memory allocation failed\n");
    return ;

}
temp->info=v;
stack=temp;
}
void pop(){
node *temp;
if(stack==NULL){
    printf("stack is empty, cannot pop\n");
    return;
}
temp=stack;
printf("Deleted element is %d/n",temp->info);
stack = stack->next;
free(temp);

}
void display(){
node *t=stack;
if(t==NULL){
    printf("Stack is empty\n");
    return;
}
printf("stack element :\n");
while(t!=NULL){
    printf("%d/n",t->info);
    t=t->next;
}
}
