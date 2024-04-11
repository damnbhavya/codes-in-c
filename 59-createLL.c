#include<stdio.h>
struct node{
    int info;
    struct node *nxt;
};
void main()
{
    struct node a,b,c;
    a.info=10;
    b.info=20;
    c.info=30;
    struct node *st;
    st=&a;
    a.nxt=&b;
    b.nxt=&c;
    c.nxt=NULL;
    struct node *ptr;
    ptr=st;
    while(ptr!=NULL){
        printf("|%d|--> ",ptr->info);
        ptr=ptr->nxt;
    }
}