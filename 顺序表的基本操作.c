#include <stdio.h>
#include <stdlib.h>
 typedef struct
 {
     int data;
     struct node *next;
 }node, *linklist;

 node *list_start(node *l)
 {
     l = (node*)malloc(sizeof(node));
     l ->next = NULL;
     return l;
 }

void creatfromhead(node *l)
{
    int data;
    node *p;
    while(scanf("%d", &data))
    {
        node *p = (node*)malloc(sizeof(node));
        p ->data = data;
        p ->next = l ->next;
        l ->next = p;
    }
}
void creatfrombottom(node *l)
{
    int data;
    node *p;//node
    node *r;//point
    r = l;
    while(scanf("%d", &data))
    {
        node *p = (node*)malloc(sizeof(node));
        p ->data = data;
        r ->next = p;
        r = p;
    }
    r ->next = NULL;
}
void list_show(node *l)
{
    node *no = l ->next;
    while(no)
    {
        printf("%d", no ->data);
        no = no ->next;
    }
}
node *search2(node *l, int e)
{
    node *p = l ->next;
    while(p)
    {
        if(p ->data == e) break;
        else
            p = p ->next;
    }
    return 0;
}


void list_free(node *l)
{
    node *p = l;
    while(p)
    {
        p = l ->next;
        free(l);
        l = p;
    }
    return;
}

    int main ()
{
    node *head = list_start(head);
    creatfrombottom(head);
    list_show(head);
    list_free(head);
    return 0;
}
