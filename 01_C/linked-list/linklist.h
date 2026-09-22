#ifndef LINKLIST_H
#define LINKLIST_H

struct LinkNode{//定义链表
    int data;
    struct LinkNode *next;
};

void DisplayNode(struct LinkNode *head);
struct LinkNode *AppendNode(struct LinkNode *head);
void DeleteMentory(struct LinkNode *head);
struct LinkNode *DeleteNode(struct LinkNode *head,int nodeData);
struct LinkNode *InsertNode(struct LinkNode *head,int nodeData);

#endif