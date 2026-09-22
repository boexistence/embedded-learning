#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linklist.h"

struct LinkNode{
    int data;
    struct LinkNode *next;
};

int main(){
    struct LinkNode node1={10,NULL};
    struct LinkNode node2={20,NULL};
    struct LinkNode node3={30,NULL};
    struct LinkNode node4={40,NULL};
    struct LinkNode node5={50,NULL};
    node1.next=&node2;
    node2.next=&node3;
    node3.next=&node4;
    node4.next=&node5;
    struct LinkNode *head=&node1;
    AppendNode(head);
    DisplayNode(head);
    DeleteMentory(head);
    return 0;
}