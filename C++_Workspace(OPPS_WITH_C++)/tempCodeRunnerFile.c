#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    node*next;
};
void oddprint(head){
    struct node*ptr;
    ptr=head;
    while(ptr->next!=NULL){
        if(ptr->data%2!=0){
            printf("%d",ptr->data)
        }
    }
}
int main(){
    struct node*head;
    struct node*p;
    p=head;
    p->data=10;
    p=p->next;
    p->data=121;
    oddprint(head);
    return 0;

}